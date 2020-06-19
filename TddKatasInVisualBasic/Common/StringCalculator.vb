Imports System.Text.RegularExpressions

''' <summary>
''' A calculator that accepts a string input and does an operation on the provided numbers.
''' </summary>
Public Class StringCalculator
#Region "Fields"

    ' Contains the supported number separators.
    Protected numberSeparators As List(Of String)

    ' Contains the characters that can be used for content substitution.
    Protected substitutionCharacters As List(Of Char)

#End Region

#Region "Constructors"

    ''' <summary>
    ''' Initialises a new instance on the <see cref="StringCalculator"/> class.
    ''' </summary>
    Public Sub New()
        Me.Initialize()
    End Sub

    ''' <summary>
    ''' Terminates an instance on the <see cref="StringCalculator"/> class.
    ''' </summary>
    Protected Overrides Sub Finalize()
        Me.numberSeparators = Nothing
        Me.substitutionCharacters = Nothing
    End Sub

#End Region

#Region "Methods"

#Region "Public Methods"

    ''' <summary>
    ''' Adds the provided numbers together.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <returns>The sum of the provided numbers.</returns>
    Public Function Add(numbers As String) As Integer
        ' Return zero if the input is null, empty string or whitespace.
        If String.IsNullOrWhiteSpace(numbers) Then
            Return 0
        End If

        Dim errorMessages = New List(Of String)

        ' Detect and set any given custom separator.
        numbers = Me.HandleCustomSeparators(numbers)

        ' Detect any negative numbers in the input And create an error message if any are found.
        Me.HandleNegativeNumbers(numbers, errorMessages)

        ' Detect any unregistered Or unsupported separators And create an error message if any are found.
        Me.HandleUnregisteredSeparators(numbers, errorMessages)

        ' Calculate the sum of the given numbers And detect And errors in the input.
        Dim sum = Me.ProcessNumbers(numbers, errorMessages)

        ' Throw an exception if any errors were detected.
        If errorMessages.Any() Then
            Throw New Exception(String.Join("\n", errorMessages))
        End If

        Return sum
    End Function

#End Region

#Region "Protected Methods"

    ''' <summary>
    ''' Initialise variables.
    ''' </summary>
    Protected Sub Initialize()
        ' Initialize the default number separators.
        Me.numberSeparators = New List(Of String) From
            {
                ";",
                "\n"
            }
        Me.substitutionCharacters = New List(Of Char) From
            {
                ";",
                "'",
                """",
                "+",
                "!",
                "-",
                "%",
                "/",
                "=",
                "~",
                "(",
                ")",
                "*",
                "_",
                ":",
                ",",
                "?",
                ".",
                "{",
                "}",
                "@",
                "&",
                "#",
                ">",
                "<",
                "[",
                "]",
                "$",
                "\",
                "|",
                "€",
                "÷",
                "¤",
                "^",
                "§"
            }
    End Sub

    ''' <summary>
    ''' Detects any provided definition for custom number separators and sets them to be used.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <returns>The string input that contains the numbers to be added together without the definition of custom number separators.</returns>
    Protected Function HandleCustomSeparators(numbers As String) As String
        ' If any custom separators are given in the start of the input.
        If numbers.StartsWith("//") Then
            ' Clear the default number separators.
            Me.numberSeparators.Clear()

            ' Get the custom separator definition.
            Dim customSeparator = Me.GetTheCustomSeparatorDefinitionFromTheInput(numbers)

            ' Remove the custom separator definition from the input.
            numbers = numbers.Replace(String.Format("//{0}\n", customSeparator), "")

            ' Process the custom separator definition.
            Me.ProcessCustomSeparatorDefinition(customSeparator)
        End If

        Return numbers
    End Function

    ''' <summary>
    ''' Detects any provided negative numbers in the input.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <param name="errorMessages">Error messages detected when checking the input.</param>
    Protected Sub HandleNegativeNumbers(numbers As String, errorMessages As ICollection(Of String))
        numbers = Me.ReplaceSeparatorsInInput(numbers)
        Dim negativesFound = Me.CollectNegativeNumbersFromInput(numbers)

        ' If any negative numbers were found, create an error message.
        If negativesFound.Any() Then
            errorMessages.Add(String.Format("Negatives not allowed : {0}", String.Join(", ", negativesFound)))
        End If
    End Sub

    ''' <summary>
    ''' Detects any unsupported number separators in the input.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <param name="errorMessages">Error messages detected when checking the input.</param>
    Protected Sub HandleUnregisteredSeparators(numbers As String, errorMessages As ICollection(Of String))
        Dim originalNumbers = numbers
        Dim substitutionCharacter = Me.GetSubstitutionString(numbers)
        numbers = Me.SubstituteSeparatorsInInput(numbers, substitutionCharacter)
        numbers = Me.SubstituteNumbersInInput(numbers, substitutionCharacter)
        numbers = Me.TruncateTextSubstitutionInInput(numbers, substitutionCharacter)

        If (String.IsNullOrWhiteSpace(numbers)) Then
            Return
        End If

        Dim numberParts = numbers.Split(substitutionCharacter(0))

        ' If there's anything still remaining in the input, that's unsupported and an error should be added about it.
        For Each numberPart As String In numberParts
            If (String.IsNullOrWhiteSpace(numberPart)) Then
                Continue For
            End If

            Dim indexOfUnsupportedSeparator = originalNumbers.IndexOf(numberPart)
            errorMessages.Add(String.Format("'{0}' expected but '{1}' found at position {2}.", String.Join("' or '", Me.numberSeparators), numberPart, indexOfUnsupportedSeparator))
        Next
    End Sub

    ''' <summary>
    ''' Processes the input string's numbers and returns the sum of them.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <param name="errorMessages">Error messages detected when checking the input.</param>
    ''' <returns>The sum of the provided numbers.</returns>
    Protected Function ProcessNumbers(numbers As String, errorMessages As ICollection(Of String)) As Integer
        ' Return zero if the numbers part Is null, empty string Or whitespace.
        If String.IsNullOrWhiteSpace(numbers) Then
            Return 0
        End If

        Dim originalNumbers = numbers
        Dim substitutedNumbers = Me.SubstituteSeparatorsInInput(numbers, ";")
        numbers = Me.ReplaceSeparatorsInInput(numbers)
        Dim numberParts = numbers.Split(";")
        Dim parseHelper As Integer
        Dim sum = 0
        Dim index As Integer

        ' Process the numbers from the input.
        For index = 0 To numberParts.Length - 1
            Dim numberPart = numberParts(index)

            ' If the current number Is empty an error should be added.
            If String.IsNullOrWhiteSpace(numberPart) Then
                ' If the number Is at the end of the input.
                If index = numberParts.Length - 1 Then
                    errorMessages.Add("Number expected but EOF found.")
                Else
                    Dim indexOfUnexpected = 0

                    If (index > 0) Then
                        Dim previousNumber = numberParts(index - 1)
                        indexOfUnexpected = substitutedNumbers.IndexOf(previousNumber) + previousNumber.Length

                        For Each numberSeparator As String In Me.numberSeparators
                            Dim currentVersion = String.Format("{0}{1}", previousNumber, numberSeparator)

                            If originalNumbers.Contains(currentVersion) And originalNumbers.IndexOf(currentVersion) = indexOfUnexpected - previousNumber.Length Then
                                indexOfUnexpected += numberSeparator.Length
                                Exit For
                            End If
                        Next
                    End If

                    Dim nextNumberIndex = substitutedNumbers.IndexOf(numberParts(index + 1))
                    Dim unexpectedSeparator = originalNumbers.Substring(indexOfUnexpected, nextNumberIndex - indexOfUnexpected)
                    errorMessages.Add(String.Format("Number expected but '{0}' found at position {1}.", unexpectedSeparator, indexOfUnexpected))
                End If
                ' If the number can be parsed And are up to 1000, add it to the sum.
            ElseIf Integer.TryParse(numberPart, parseHelper) And parseHelper <= 1000 Then
                sum += parseHelper
            End If
        Next

        Return sum
    End Function

    ''' <summary>
    ''' Gets the custom delimiter definition from the input.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <returns>The custom delimiter definition from the input.</returns>
    Protected Function GetTheCustomSeparatorDefinitionFromTheInput(numbers As String) As String
        Dim customSeparator = numbers.Substring(2)

        If numbers.StartsWith("//[") Then
            customSeparator = customSeparator.Substring(0, customSeparator.IndexOf("]\n") + 1)
        ElseIf numbers.StartsWith("//\n\n") Then
            customSeparator = "\n"
        Else
            customSeparator = customSeparator.Substring(0, customSeparator.IndexOf("\n"))
        End If

        Return customSeparator
    End Function

    ''' <summary>
    ''' Processes the custom delimiter definition from the input And adds them to the used separators.
    ''' </summary>
    ''' <param name="customSeparator">The custom delimiter definition from the input.</param>
    Protected Sub ProcessCustomSeparatorDefinition(customSeparator As String)
        ' If there are multiple custom separators given.
        If customSeparator.Contains("][") Then
            Do
                Dim currentPart = customSeparator.Substring(0, customSeparator.IndexOf("][") + 1)
                customSeparator = customSeparator.Replace(currentPart, "")
                currentPart = Me.RemoveSquareBracketsFromStartAndEnd(currentPart)
                Me.numberSeparators.Add(currentPart)
            Loop While customSeparator.Contains("][")
        End If

        customSeparator = Me.RemoveSquareBracketsFromStartAndEnd(customSeparator)
        Me.numberSeparators.Add(customSeparator)
        Me.numberSeparators = Me.numberSeparators.OrderByDescending(Function(x) x.Length).ToList()
    End Sub

    ''' <summary>
    ''' Removes the square brackets from the given custom delimiter.
    ''' </summary>
    ''' <param name="customSeparator">The custom delimiter definition from the input.</param>
    ''' <returns>The given custom delimiter without square brackets around it.</returns>
    Protected Function RemoveSquareBracketsFromStartAndEnd(customSeparator As String) As String
        ' If the custom separator Is defined in squarely braces, remove them.
        If customSeparator.StartsWith("[") And customSeparator.EndsWith("]") Then
            customSeparator = customSeparator.Substring(1)
            customSeparator = customSeparator.Substring(0, customSeparator.Length - 1)
        End If

        Return customSeparator
    End Function

    ''' <summary>
    ''' Replaces the number separators with a single type in the input. This may shorten the length of the input.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <returns>The input with replaced number separators.</returns>
    Protected Function ReplaceSeparatorsInInput(numbers As String) As String
        ' Process the supported number separators.
        For Each numberSeparator As String In Me.numberSeparators
            numbers = numbers.Replace(numberSeparator, ";")
        Next

        Return numbers
    End Function

    ''' <summary>
    ''' Replaces the number separators with the given character in the input, but keeps the length of the input.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <param name="substitutionCharacter">The character used for substituting a part of the input.</param>
    ''' <returns>The input with replaced number separators.</returns>
    Protected Function SubstituteSeparatorsInInput(numbers As String, substitutionCharacter As String) As String
        ' Process the supported number separators.
        For Each numberSeparator As String In Me.numberSeparators
            Dim separatorSubstitution = ""

            For i = 0 To numberSeparator.Length - 1
                separatorSubstitution += substitutionCharacter
            Next

            numbers = numbers.Replace(numberSeparator, separatorSubstitution)
        Next

        Return numbers
    End Function

    ''' <summary>
    ''' Replaces the numbers with the given character in the input, but keeps the length of the input.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <param name="substitutionCharacter">The character used for substituting a part of the input.</param>
    ''' <returns>The input with replaced numbers.</returns>
    Protected Function SubstituteNumbersInInput(numbers As String, substitutionCharacter As String) As String
        Dim regularExpressionPattern = "([0-9.,-]+)+"
        Dim regexMatches = Regex.Matches(numbers, regularExpressionPattern)
        Dim regexMatches2 = New List(Of String)

        For Each regexMatch As Match In regexMatches
            regexMatches2.Add(regexMatch.ToString())
        Next

        regexMatches2 = regexMatches2.OrderByDescending(Function(x) x.Length).ToList()

        ' Cut out each number from the input.
        For Each regexMatch As String In regexMatches2
            Dim separatorSubstitution = ""

            For i = 0 To regexMatch.Length
                separatorSubstitution += substitutionCharacter
            Next

            numbers = numbers.Replace(regexMatch, separatorSubstitution)
        Next

        Return numbers
        End Function

    ''' <summary>
    ''' Truncates the given character in the input if it contains multiple occurrences in one place.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <param name="substitutionCharacter">The character used for substituting a part of the input.</param>
    ''' <returns>The input with truncated occurrences of the given character.</returns>
    Protected Function TruncateTextSubstitutionInInput(numbers As String, substitutionCharacter As String) As String
        While numbers.Contains(substitutionCharacter + substitutionCharacter)
            numbers = numbers.Replace(substitutionCharacter + substitutionCharacter, substitutionCharacter)
        End While

        Return numbers
    End Function

    ''' <summary>
    ''' Gets a character that Is Not used in the input And can be used to substitute all number delimiters.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <returns>A character that Is Not used in the input And can be used to substitute all number delimiters.</returns>
    Protected Function GetSubstitutionString(numbers As String) As String
        Dim substitutionCharacter = ""

        For Each currentCharacter As String In Me.substitutionCharacters
            If Not numbers.Contains(currentCharacter) Then
                substitutionCharacter = currentCharacter.ToString()
                Exit For
            End If
        Next

        Return substitutionCharacter
    End Function

    ''' <summary>
    ''' Collects the negative numbers from the input.
    ''' </summary>
    ''' <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
    ''' <returns>The negative numbers from the input.</returns>
    Protected Function CollectNegativeNumbersFromInput(numbers As String) As IEnumerable(Of String)
        Dim negativesFound = New List(Of String)
        Dim regularExpressionPattern = "([0-9.,-]+)+"
        Dim regexMatches = Regex.Matches(numbers, regularExpressionPattern)
        Dim parseHelper As Integer

        ' Check each number if it's negative and gather them up.
        For Each regexMatch As Match In regexMatches
            If Integer.TryParse(regexMatch.ToString(), parseHelper) And parseHelper < 0 Then
                negativesFound.Add(regexMatch.ToString())
            End If
        Next

        Return negativesFound
    End Function

#End Region

#End Region
End Class
