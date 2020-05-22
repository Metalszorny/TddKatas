using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace Common
{
    /// <summary>
    /// A calculator that accepts a string input and does an operation on the provided numbers.
    /// </summary>
    public class StringCalculator
    {
        #region Fields

        // Contains the supported number separators.
        protected List<string> numberSeparators;

        // Contains the characters that can be used for content substitution.
        protected List<char> substitutionCharacters;

        #endregion Fields

        #region Constructors

        /// <summary>
        /// Initializes a new instance on the <see cref="StringCalculator"/> class.
        /// </summary>
        public StringCalculator()
        {
            this.Initialize();
        }

        /// <summary>
        /// Terminates an instance on the <see cref="StringCalculator"/> class.
        /// </summary>
        ~StringCalculator()
        {
            this.numberSeparators = null;
            this.substitutionCharacters = null;
        }

        #endregion Constructors

        #region Methods

        #region Public Methods

        /// <summary>
        /// Adds the provided numbers together.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>The sum of the provided numbers.</returns>
        public int Add(string numbers)
        {
            // Return zero if the input is null, empty string or whitespace.
            if (string.IsNullOrWhiteSpace(numbers))
            {
                return 0;
            }

            var errorMessages = new List<string>();

            // Detect and set any given custom separator.
            numbers = this.HandleCustomSeparators(numbers);

            // Detect any negative numbers in the input and create an error message if any are found.
            this.HandleNegativeNumbers(numbers, errorMessages);

            // Detect any unregistered or unsupported separators and create an error message if any are found.
            this.HandleUnregisteredSeparators(numbers, errorMessages);

            // Calculate the sum of the given numbers and detect and errors in the input.
            var sum = this.ProcessNumbers(numbers, errorMessages);

            // Throw an exception if any errors were detected.
            if (errorMessages.Any())
            {
                throw new Exception(string.Join("\n", errorMessages));
            }

            return sum;
        }

        #endregion Public Methods

        #region Protected Methods

        /// <summary>
        /// Initialialize variables.
        /// </summary>
        protected void Initialize()
        {
            // Initialize the default number separators.
            this.numberSeparators = new List<string>()
            {
                ";",
                "\n"
            };
            this.substitutionCharacters = new List<char>()
            {
                ';',
                '\'',
                '"',
                '+',
                '!',
                '-',
                '%',
                '/',
                '=',
                '~',
                '(',
                ')',
                '*',
                '_',
                ':',
                ',',
                '?',
                '.',
                '{',
                '}',
                '@',
                '&',
                '#',
                '>',
                '<',
                '[',
                ']',
                '$',
                '\\',
                '|',
                '€',
                '÷',
                '¤',
                '^',
				'§'
            };
        }

        /// <summary>
        /// Detects any provided definition for custom number separators and sets them to be used.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>The string input that contains the numbers to be added together without the definition of custom number separators.</returns>
        protected string HandleCustomSeparators(string numbers)
        {
            // If any custom separators are given in the start of the input.
            if (numbers.StartsWith("//"))
            {
                // Clear the default number separators.
                this.numberSeparators.Clear();

                // Get the custom separator definition.
                var customSeparator = this.GetTheCustomSeparatorDefinitionFromTheInput(numbers);

                // Remove the custom separator definition from the input.
                numbers = numbers.Replace(string.Format("//{0}\n", customSeparator), "");

                // Process the custom separator definition.
                this.ProcessCustomSeparatorDefinition(customSeparator);
            }

            return numbers;
        }

        /// <summary>
        /// Detects any provided negative numbers in the input.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <param name="errorMessages">Error messages detected when checking the input.</param>
        protected void HandleNegativeNumbers(string numbers, ICollection<string> errorMessages)
        {
            numbers = this.ReplaceSeparatorsInInput(numbers);
            var negativesFound = this.CollectNegativeNumbersFromInput(numbers);

            // If any negative numbers were found, create an error message.
            if (negativesFound.Any())
            {
                errorMessages.Add(string.Format("Negatives not allowed : {0}", string.Join(", ", negativesFound)));
            }
        }

        /// <summary>
        /// Detects any unsupported number separators in the input.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <param name="errorMessages">Error messages detected when checking the input.</param>
        protected void HandleUnregisteredSeparators(string numbers, ICollection<string> errorMessages)
        {
            var originalNumbers = numbers;
            var substitutionCharacter = this.GetSubstitutionString(numbers);
            numbers = this.SubstituteSeparatorsInInput(numbers, substitutionCharacter);
            numbers = this.SubstituteNumbersInInput(numbers, substitutionCharacter);
            numbers = this.TruncateTextSubstitutionInInput(numbers, substitutionCharacter);

            if (string.IsNullOrWhiteSpace(numbers))
            {
                return;
            }

            var numberParts = numbers.Split(substitutionCharacter[0]);

            // If there's anything still remaining in the input, that's unsupported and an error should be added about it.
            foreach (var numberPart in numberParts)
            {
                if (string.IsNullOrWhiteSpace(numberPart))
                {
                    continue;
                }

                var indexOfUnsupportedSeparator = originalNumbers.IndexOf(numberPart);
                errorMessages.Add(string.Format("'{0}' expected but '{1}' found at position {2}.", string.Join("' or '", this.numberSeparators), numberPart, indexOfUnsupportedSeparator));
            }
        }

        /// <summary>
        /// Processes the input string's numbers and returns the sum of them.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <param name="errorMessages">Error messages detected when checking the input.</param>
        /// <returns>The sum of the provided numbers.</returns>
        protected int ProcessNumbers(string numbers, ICollection<string> errorMessages)
        {
            // Return zero if the numbers part is null, empty string or whitespace.
            if (string.IsNullOrWhiteSpace(numbers))
            {
                return 0;
            }

            var originalNumbers = numbers;
            var substitutedNumbers = this.SubstituteSeparatorsInInput(numbers, ";");
            numbers = this.ReplaceSeparatorsInInput(numbers);
            var numberParts = numbers.Split(';');
            int parseHelper;
            var sum = 0;
            int index;

            // Process the numbers from the input.
            for (index = 0; index < numberParts.Length; index++)
            {
                var numberPart = numberParts[index];

                // If the current number is empty an error should be added.
                if (string.IsNullOrWhiteSpace(numberPart))
                {
                    // If the number is at the end of the input.
                    if (index == numberParts.Length - 1)
                    {
                        errorMessages.Add("Number expected but EOF found.");
                    }
                    else
                    {
                        var indexOfUnexpected = 0;

                        if (index > 0)
                        {
                            var previousNumber = numberParts[index - 1];
                            indexOfUnexpected = substitutedNumbers.IndexOf(previousNumber) + previousNumber.Length;

                            foreach (var numberSeparator in this.numberSeparators)
                            {
                                var currentVersion = string.Format("{0}{1}", previousNumber, numberSeparator);

                                if (originalNumbers.Contains(currentVersion) &&
                                    originalNumbers.IndexOf(currentVersion) == indexOfUnexpected - previousNumber.Length)
                                {
                                    indexOfUnexpected += numberSeparator.Length;
                                    break;
                                }
                            }
                        }

                        var nextNumberIndex = substitutedNumbers.IndexOf(numberParts[index + 1]);
                        var unexpectedSeparator = originalNumbers.Substring(indexOfUnexpected, nextNumberIndex - indexOfUnexpected);
                        errorMessages.Add(string.Format("Number expected but '{0}' found at position {1}.", unexpectedSeparator, indexOfUnexpected));
                    }
                }
                // If the number can be parsed and are up to 1000, add it to the sum.
                else if (int.TryParse(numberPart, out parseHelper) &&
                    parseHelper <= 1000)
                {
                    sum += parseHelper;
                }
            }

            return sum;
        }

        /// <summary>
        /// Gets the custom delimiter definition from the input.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>The custom delimiter definition from the input.</returns>
        protected string GetTheCustomSeparatorDefinitionFromTheInput(string numbers)
        {
            var customSeparator = numbers.Substring(2);

            if (numbers.StartsWith("//["))
            {
                customSeparator = customSeparator.Substring(0, customSeparator.IndexOf("]\n") + 1);
            }
            else if (numbers.StartsWith("//\n\n"))
            {
                customSeparator = "\n";
            }
            else
            {
                customSeparator = customSeparator.Substring(0, customSeparator.IndexOf("\n"));
            }

            return customSeparator;
        }

        /// <summary>
        /// Processes the custom delimiter definition from the input and adds them to the used separators.
        /// </summary>
        /// <param name="customSeparator">The custom delimiter definition from the input.</param>
        protected void ProcessCustomSeparatorDefinition(string customSeparator)
        {
            // If there are multiple custom separators given.
            if (customSeparator.Contains("]["))
            {
                do
                {
                    var currentPart = customSeparator.Substring(0, customSeparator.IndexOf("][") + 1);
                    customSeparator = customSeparator.Replace(currentPart, "");
                    currentPart = this.RemoveSquareBracketsFromStartAndEnd(currentPart);
                    this.numberSeparators.Add(currentPart);
                } while (customSeparator.Contains("]["));
            }

            customSeparator = this.RemoveSquareBracketsFromStartAndEnd(customSeparator);
            this.numberSeparators.Add(customSeparator);
            this.numberSeparators = this.numberSeparators.OrderByDescending(x => x.Length).ToList();
        }

        /// <summary>
        /// Removes the square brackets from the given custom delimiter.
        /// </summary>
        /// <param name="customSeparator">The custom delimiter definition from the input.</param>
        /// <returns>The given custom delimiter without square brackets around it.</returns>
        protected string RemoveSquareBracketsFromStartAndEnd(string customSeparator)
        {
            // If the custom separator is defined in squarely braces, remove them.
            if (customSeparator.StartsWith("[") &&
                customSeparator.EndsWith("]"))
            {
                customSeparator = customSeparator.Substring(1);
                customSeparator = customSeparator.Substring(0, customSeparator.Length - 1);
            }

            return customSeparator;
        }

        /// <summary>
        /// Replaces the number separators with a single type in the input. This may shorten the length of the input.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>The input with replaced number separators.</returns>
        protected string ReplaceSeparatorsInInput(string numbers)
        {
            // Process the supported number separators.
            foreach (var numberSeparator in this.numberSeparators)
            {
                numbers = numbers.Replace(numberSeparator, ";");
            }

            return numbers;
        }

        /// <summary>
        /// Replaces the number separators with the given character in the input, but keeps the length of the input.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>The input with replaced number separators.</returns>
        protected string SubstituteSeparatorsInInput(string numbers, string substitutionCharacter)
        {
            // Process the supported number separators.
            foreach (var numberSeparator in this.numberSeparators)
            {
                var separatorSubstitution = "";

                for (var i = 0; i < numberSeparator.Length; i++)
                {
                    separatorSubstitution += substitutionCharacter;
                }

                numbers = numbers.Replace(numberSeparator, separatorSubstitution);
            }

            return numbers;
        }

        /// <summary>
        /// Replaces the numbers with the given character in the input, but keeps the length of the input.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>The input with replaced numbers.</returns>
        protected string SubstituteNumbersInInput(string numbers, string substitutionCharacter)
        {
            var regularExpressionPattern = @"([0-9.,-]+)+";
            var regexMatches = Regex.Matches(numbers, regularExpressionPattern).OrderByDescending(x => x.Length);

            // Cut out each number from the input.
            foreach (var regexMatch in regexMatches)
            {
                var separatorSubstitution = "";

                for (var i = 0; i < regexMatch.ToString().Length; i++)
                {
                    separatorSubstitution += substitutionCharacter;
                }

                numbers = numbers.Replace(regexMatch.ToString(), separatorSubstitution);
            }

            return numbers;
        }

        /// <summary>
        /// Truncates the given character in the input if it contains multiple occurrences in one place.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>The input with truncated occurrences of the given character.</returns>
        protected string TruncateTextSubstitutionInInput(string numbers, string substitutionCharacter)
        {
            while (numbers.Contains(substitutionCharacter + substitutionCharacter))
            {
                numbers = numbers.Replace(substitutionCharacter + substitutionCharacter, substitutionCharacter);
            }

            return numbers;
        }

        /// <summary>
        /// Gets a character that is not used in the input and can be used to substitute all number delimiters.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>A character that is not used in the input and can be used to substitute all number delimiters.</returns>
        protected string GetSubstitutionString(string numbers)
        {
            var substitutionCharacter = "";

            foreach (var currentCharacter in this.substitutionCharacters)
            {
                if (!numbers.Contains(currentCharacter))
                {
                    substitutionCharacter = currentCharacter.ToString();
                    break;
                }
            }

            return substitutionCharacter;
        }

        /// <summary>
        /// Collects the negative numbers from the input.
        /// </summary>
        /// <param name="numbers">The string input that contains the numbers to be added together separated by delimiters.</param>
        /// <returns>The negative numbers from the input.</returns>
        protected IEnumerable<string> CollectNegativeNumbersFromInput(string numbers)
        {
            var negativesFound = new List<string>();
            var regularExpressionPattern = @"([0-9.,-]+)+";
            var regexMatches = Regex.Matches(numbers, regularExpressionPattern);
            int parseHelper;

            // Check each number if it's negative and gather them up.
            foreach (var regexMatch in regexMatches)
            {
                if (int.TryParse(regexMatch.ToString(), out parseHelper) &&
                    parseHelper < 0)
                {
                    negativesFound.Add(regexMatch.ToString());
                }
            }

            return negativesFound;
        }

        #endregion Protected Methods

        #endregion Methods
    }
}
