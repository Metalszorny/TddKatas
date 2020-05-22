import re


"""
A calculator that accepts a string input and does an operation on the provided numbers.
"""
class StringCalculator:
    # Contains the supported number separators.
    __numberSeparators = None

    # Contains the characters that can be used for content substitution.
    __substitutionCharacters = None

    """
    Initializes a new instance on the StringCalculator class.
    """
    def __init__(self):
        self.__initialize()

    """
    Terminates an instance on the StringCalculator class.
    """
    def __del__(self):
        self.__numberSeparators = None
        self.__substitutionCharacters = None

    """
    Adds the provided numbers together.
    """
    def add(self, numbers):
        # Return zero if the input is null, empty string or whitespace.
        if numbers is None or numbers == "" or numbers.strip() == "":
            return 0

        errorMessages = []

        # Detect and set any given custom separator.
        numbers = self.__handleCustomSeparators(numbers)

        # Detect any negative numbers in the input and create an error message if any are found.
        self.__handleNegativeNumbers(numbers, errorMessages)

        # Detect any unregistered or unsupported separators and create an error message if any are found.
        self.__handleUnregisteresSeparators(numbers, errorMessages)

        # Calculate the sum of the given numbers and detect and errors in the input.
        sum = self.__processNumbers(numbers, errorMessages)

        # Throw an exception if any errors were detected.
        if len(errorMessages) > 0:
            raise Exception('\n'.join(errorMessages))

        return sum

    """
    Initialialize variables.
    """
    def __initialize(self):
        self.__numberSeparators = [";", "\n"]
        self.__substitutionCharacters = \
            [
                ";",
                "'",
                "\"",
                "+",
                "!",
                "-",
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
            ]

    """
    Detects any provided definition for custom number separators and sets them to be used.
    """
    def __handleCustomSeparators(self, numbers):
        # If any custom separators are given in the start of the input.
        if numbers.startswith('//'):
            # Clear the default number separators.
            self.__numberSeparators = []

            # Get the custom separator definition.
            customSeparator = self.__getTheCustomSeparatorDefinitionFromTheInput(numbers)

            # Remove the custom separator definition from the input.
            numbers = numbers.replace("//{separators}\n".format(separators=customSeparator), "")

            # Process the custom separator definition.
            self.__processCustomSeparatorDefinition(customSeparator)

        return numbers

    """
    Detects any provided negative numbers in the input.
    """
    def __handleNegativeNumbers(self, numbers, errorMessages):
        numbers = self.__replaceSeparatorsInInput(numbers)
        negativesFound = self.__collectNegativeNumbersFromInput(numbers)

        # If any negative numbers were found, create an error message.
        if len(negativesFound) > 0:
            errorMessages.append("Negatives not allowed : {negatives}".format(negatives=", ".join(negativesFound)))

    """
    Detects any unsupported number separators in the input.
    """
    def __handleUnregisteresSeparators(self, numbers, errorMessages):
        originalNumbers = numbers
        substitutionCharacter = self.__getSubstitutionString(numbers)
        numbers = self.__substituteSeparatorsInInput(numbers, substitutionCharacter)
        numbers = self.__substituteNumbersInInput(numbers, substitutionCharacter)
        numbers = self.__truncateTextSubstitutionInInput(numbers, substitutionCharacter)

        if numbers is None or numbers == "" or numbers.strip() == "":
            return

        numberParts = numbers.split(substitutionCharacter)

        # If there's anything still remaining in the input, that's unsupported and an error should be added about it.
        for numberPart in numberParts:
            if numberPart is None or numberPart == "" or numberPart.strip() == "":
                continue

            indexOfUnsupportedSeparator = originalNumbers.index(numberPart)
            errorMessages\
                .append("'{supported}' expected but '{unexpected}' found at position {position}."
                    .format(
                        supported="' or '".join(self.__numberSeparators),
                        unexpected=numberPart,
                        position=indexOfUnsupportedSeparator))

    """
    Processes the input string's numbers and returns the sum of them.
    """
    def __processNumbers(self, numbers, errorMessages):
        # Return zero if the input is null, empty string or whitespace.
        if numbers is None or numbers == "" or numbers.strip() == "":
            return 0

        originalNumbers = numbers
        substitutedNumbers = self.__substituteSeparatorsInInput(numbers, ";")
        numbers = self.__replaceSeparatorsInInput(numbers)
        numberParts = numbers.split(';')
        sum = 0

        # Process the numbers from the input.
        for index in range(0, len(numberParts), 1):
            numberPart = numberParts[index]

            # If the current number is empty an error should be added.
            if numberPart is None or numberPart == "" or numberPart.strip() == "":
                # If the number is at the end of the input.
                if index == len(numberParts) - 1:
                    errorMessages.append("Number expected but EOF found.")
                else:
                    indexOfUnexpected = 0

                    if index > 0:
                        previousNumber = numberParts[index - 1]
                        indexOfUnexpected = substitutedNumbers.index(previousNumber) + len(previousNumber)

                        for numberSeparator in self.__numberSeparators:
                            currentVersion = "{prev}{next}".format(prev=previousNumber, next=numberSeparator)

                            if currentVersion in originalNumbers and \
                                originalNumbers.index(currentVersion) == indexOfUnexpected - len(previousNumber):
                                indexOfUnexpected += len(numberSeparator)
                                break

                    nextNumberIndex = substitutedNumbers.index(numberParts[index + 1])
                    unexpectedSeparator = originalNumbers[indexOfUnexpected:nextNumberIndex]
                    errorMessages\
                        .append("Number expected but '{unexpected}' found at position {position}."
                            .format(unexpected=unexpectedSeparator, position=indexOfUnexpected))
            # If the number can be parsed and are up to 1000, add it to the sum.
            elif numberPart.isdigit() and int(numberPart) <= 1000:
                sum += int(numberPart)

        return sum

    """
    Gets the custom delimiter definition from the input.
    """
    def __getTheCustomSeparatorDefinitionFromTheInput(self, numbers):
        customSeparator = numbers[2:]

        if numbers.startswith("//["):
            customSeparator = customSeparator[0: customSeparator.index("]\n") + 1]
        elif numbers.startswith("//\n\n"):
            customSeparator = "\n"
        else:
            customSeparator = customSeparator[0:customSeparator.index("\n")]

        return customSeparator

    """
    Processes the custom delimiter definition from the input and adds them to the used separators.
    """
    def __processCustomSeparatorDefinition(self, customSeparator):
        # If there are multiple custom separators given.
        if "][" in customSeparator:
            while "][" in customSeparator:
                currentPart = customSeparator[0:customSeparator.index("][") + 1]
                customSeparator = customSeparator.replace(currentPart, "")
                currentPart = self.__removeSquareBracketsFromStartAndEnd(currentPart)
                self.__numberSeparators.append(currentPart)

        customSeparator = self.__removeSquareBracketsFromStartAndEnd(customSeparator)
        self.__numberSeparators.append(customSeparator);
        self.__numberSeparators.sort(key=len, reverse=True)

    """
    Removes the square brackets from the given custom delimiter.
    """
    def __removeSquareBracketsFromStartAndEnd(self, customSeparator):
        # If the custom separator is defined in squarely braces, remove them.
        if customSeparator.startswith("[") and customSeparator.endswith("]"):
            customSeparator = customSeparator[1:]
            customSeparator = customSeparator[0:len(customSeparator) - 1]

        return customSeparator

    """
    Replaces the number separators with a single type in the input. This may shorten the length of the input.
    """
    def __replaceSeparatorsInInput(self, numbers):
        # Process the supported number separators.
        for numberSeparator in self.__numberSeparators:
            numbers = numbers.replace(numberSeparator, ";")

        return numbers

    """
    Replaces the number separators with the given character in the input, but keeps the length of the input.
    """
    def __substituteSeparatorsInInput(self, numbers, substitutionCharacter):
        # Process the supported number separators.
        for numberSeparator in self.__numberSeparators:
            separatorSubstitution = ""

            for i in range(0, len(numberSeparator), 1):
                separatorSubstitution += substitutionCharacter

            numbers = numbers.replace(numberSeparator, separatorSubstitution)

        return numbers

    """
    Replaces the numbers with the given character in the input, but keeps the length of the input.
    """
    def __substituteNumbersInInput(self, numbers, substitutionCharacter):
        regularExpressionPattern = r"([0-9.,-]+)+"
        regexMatches = re.findall(regularExpressionPattern, numbers)
        regexMatches.sort(key=len, reverse=True)

        # Cut out each number from the input.
        for regexMatch in regexMatches:
            separatorSubstitution = ""

            for i in range(0, len(regexMatch), 1):
                separatorSubstitution += substitutionCharacter

            numbers = numbers.replace(regexMatch, separatorSubstitution)

        return numbers

    """
    Truncates the given character in the input if it contains multiple occurrences in one place.
    """
    def __truncateTextSubstitutionInInput(self, numbers, substitutionCharacter):
        while substitutionCharacter + substitutionCharacter in numbers:
            numbers = numbers.replace(substitutionCharacter + substitutionCharacter, substitutionCharacter)

        return numbers

    """
    Gets a character that is not used in the input and can be used to substitute all number delimiters.
    """
    def __getSubstitutionString(self, numbers):
        substitutionCharacter = ""

        for currentCharacter in self.__substitutionCharacters:
            if currentCharacter not in numbers:
                substitutionCharacter = currentCharacter
                break

        return substitutionCharacter

    """
    Collects the negative numbers from the input.
    """
    def __collectNegativeNumbersFromInput(self, numbers):
        negativesFound = []
        regularExpressionPattern = r"([0-9.,-]+)+"
        regexMatches = re.findall(regularExpressionPattern, numbers)

        # Check each number if it's negative and gather them up.
        for regexMatch in regexMatches:
            if regexMatch.lstrip('-').isdigit() and int(regexMatch) < 0:
                negativesFound.append(regexMatch)

        return negativesFound
