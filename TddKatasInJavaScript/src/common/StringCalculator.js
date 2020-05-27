/**
 * A calculator that accepts a string input and does an operation on the provided numbers.
 */
class StringCalculator {
    /**
     * Initializes a new instance on the StringCalculator class.
     */
    constructor() {
        this.initialize();
    }

    /**
     * Adds the provided numbers together.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     */
    add(numbers) {
        // Return zero if the input is null, empty string or whitespace.
        if (numbers == null || numbers === '' || numbers.trim() === '') {
            return 0;
        }

        let errorMessages = [];

        // Detect and set any given custom separator.
        numbers = this.handleCustomSeparators(numbers);

        // Detect any negative numbers in the input and create an error message if any are found.
        this.handleNegativeNumbers(numbers, errorMessages);

        // Detect any unregistered or unsupported separators and create an error message if any are found.
        this.handleUnregisteredSeparators(numbers, errorMessages);

        // Calculate the sum of the given numbers and detect and errors in the input.
        const sum = this.processNumbers(numbers, errorMessages);

        // Throw an exception if any errors were detected.
        if (errorMessages.length > 0) {
            throw new Error(errorMessages.join('\n'));
        }

        return sum;
    }

    /**
     * Initialise variables.
     */
    initialize() {
        this.numberSeparators = [';', '\n'];
        this.substitutionCharacters = 
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
        ];
    }

    /**
     * Detects any provided definition for custom number separators and sets them to be used.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     */
    handleCustomSeparators(numbers) {
        // If any custom separators are given in the start of the input.
        if (numbers.startsWith('//')) {
            // Clear the default number separators.
            this.numberSeparators = [];

            // Get the custom separator definition.
            const customSeparator = this.getTheCustomSeparatorDefinitionFromTheInput(numbers);

            // Remove the custom separator definition from the input.
            numbers = numbers.replace(`//${customSeparator}\n`, '');

            // Process the custom separator definition.
            this.processCustomSeparatorDefinition(customSeparator);
        }

        return numbers;
    }

    /**
     * Detects any provided negative numbers in the input.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param {any} errorMessages Error messages detected when checking the input.
     */
    handleNegativeNumbers(numbers, errorMessages) {
        numbers = this.replaceSeparatorsInInput(numbers);
        const negativesFound = this.collectNegativeNumbersFromInput(numbers);

        // If any negative numbers were found, create an error message.
        if (negativesFound.length > 0) {
            errorMessages.push(`Negatives not allowed : ${negativesFound.join(', ')}`);
        }
    }

    /**
     * Detects any unsupported number separators in the input.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param {any} errorMessages Error messages detected when checking the input.
     */
    handleUnregisteredSeparators(numbers, errorMessages) {
        const originalNumbers = numbers;
        const substitutionCharacter = this.getSubstitutionString(numbers);
        numbers = this.substituteSeparatorsInInput(numbers, substitutionCharacter);
        numbers = this.substituteNumbersInInput(numbers, substitutionCharacter);
        numbers = this.truncateTextSubstitutionInInput(numbers, substitutionCharacter);

        if (numbers == null || numbers === '' || numbers.trim() === '') {
            return;
        }

        const numberParts = numbers.split(substitutionCharacter);

        // If there's anything still remaining in the input, that's unsupported and an error should be added about it.
        for (let i = 0; i < numberParts.length; i++) {
            const numberPart = numberParts[i];

            if (numberPart == null || numberPart === '' || numberPart.trim() === '') {
                continue;
            }

            const indexOfUnsupportedSeparator = originalNumbers.indexOf(numberPart);
            errorMessages.push(`'${this.numberSeparators.join('\' or \'')}' expected but '${numberPart}' found at position ${indexOfUnsupportedSeparator}.`);
        }
    }

    /**
     * Processes the input string's numbers and returns the sum of them.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param {any} errorMessages Error messages detected when checking the input.
     */
    processNumbers(numbers, errorMessages) {
        // Return zero if the numbers part is null, empty string or whitespace.
        if (numbers == null || numbers === '' || numbers.trim() === '') {
            return 0;
        }

        const originalNumbers = numbers;
        const substitutedNumbers = this.substituteSeparatorsInInput(numbers, ';');
        numbers = this.replaceSeparatorsInInput(numbers);
        const numberParts = numbers.split(';');
        let sum = 0;

        // Process the numbers from the input.
        for (let index = 0; index < numberParts.length; index++) {
            const numberPart = numberParts[index];

            // If the current number is empty an error should be added.
            if (numberPart == null || numberPart === '' || numberPart.trim() === '') {
                // If the number is at the end of the input.
                if (index == numberParts.length - 1) {
                    errorMessages.push('Number expected but EOF found.');
                }
                else {
                    let indexOfUnexpected = 0;

                    if (index > 0) {
                        const previousNumber = numberParts[index - 1];
                        indexOfUnexpected = substitutedNumbers.indexOf(previousNumber) + previousNumber.length;

                        for (let i = 0; i < this.numberSeparators.length; i++) {
                            const numberSeparator = this.numberSeparators[i];
                            const currentVersion = `${previousNumber}${numberSeparator}`;

                            if (originalNumbers.indexOf(currentVersion) >= 0 &&
                                originalNumbers.indexOf(currentVersion) == indexOfUnexpected - previousNumber.length) {
                                indexOfUnexpected += numberSeparator.length;
                                break;
                            }
                        }
                    }

                    const nextNumberIndex = substitutedNumbers.indexOf(numberParts[index + 1]);
                    const unexpectedSeparator = originalNumbers.substring(indexOfUnexpected, nextNumberIndex);
                    errorMessages.push(`Number expected but '${unexpectedSeparator}' found at position ${indexOfUnexpected}.`);
                }
            }
            // If the number can be parsed and are up to 1000, add it to the sum.
            else if (!isNaN(numberPart) && parseInt(numberPart) <= 1000) {
                sum += parseInt(numberPart);
            }
        }

        return sum;
    }

    /**
     * Gets the custom delimiter definition from the input.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     */
    getTheCustomSeparatorDefinitionFromTheInput(numbers) {
        let customSeparator = numbers.substring(2);

        if (numbers.startsWith('//[')) {
            customSeparator = customSeparator.substring(0, customSeparator.indexOf(']\n') + 1);
        }
        else if (numbers.startsWith('//\n\n')) {
            customSeparator = '\n';
        }
        else {
            customSeparator = customSeparator.substring(0, customSeparator.indexOf('\n'));
        }

        return customSeparator;
    }

    /**
     * Processes the custom delimiter definition from the input and adds them to the used separators.
     * @param {any} customSeparator The custom delimeter definition from the input.
     */
    processCustomSeparatorDefinition(customSeparator) {
        // If there are multiple custom separators given.
        if (customSeparator.indexOf('][') >= 0) {
            do {
                let currentPart = customSeparator.substring(0, customSeparator.indexOf('][') + 1);
                customSeparator = customSeparator.replace(currentPart, '');
                currentPart = this.removeSquareBracketsFromStartAndEnd(currentPart);
                this.numberSeparators.push(currentPart);
            } while (customSeparator.indexOf('][') >= 0);
        }

        customSeparator = this.removeSquareBracketsFromStartAndEnd(customSeparator);
        this.numberSeparators.push(customSeparator);
        this.numberSeparators.sort((a, b) => {
            return b.length - a.length
        });
    }

    /**
     * Removes the square brackets from the given custom delimiter.
     * @param {any} customSeparator The custom delimeter definition from the input.
     */
    removeSquareBracketsFromStartAndEnd(customSeparator) {
        // If the custom separator is defined in squarely braces, remove them.
        if (customSeparator.startsWith('[') && customSeparator.endsWith(']')) {
            customSeparator = customSeparator.substring(1);
            customSeparator = customSeparator.substring(0, customSeparator.length - 1);
        }

        return customSeparator;
    }

    /**
     * Replaces the number separators with a single type in the input. This may shorten the length of the input.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     */
    replaceSeparatorsInInput(numbers) {
        // Process the supported number separators.
        this.numberSeparators.forEach((numberSeparator) => {
            let previousNumbers = '';

            while (numbers.indexOf(numberSeparator) >= 0) {
                previousNumbers = numbers;
                numbers = numbers.replace(numberSeparator, ';');
                
                // If no change was made, exit the loop.
                if (previousNumbers === numbers) {
                    break;
                }
            }
        });

        return numbers;
    }

    /**
     * Replaces the number separators with the given character in the input, but keeps the length of the input.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param {any} substitutionCharacter The character used for substituting a part of the input.
     */
    substituteSeparatorsInInput(numbers, substitutionCharacter) {
        // Process the supported number separators.
        this.numberSeparators.forEach((numberSeparator) => {
            let separatorSubstitution = '';
            let previousNumbers = '';

            for (let i = 0; i < numberSeparator.length; i++) {
                separatorSubstitution += substitutionCharacter;
            }
            
            while (numbers.indexOf(numberSeparator) >= 0) {
                previousNumbers = numbers;
                numbers = numbers.replace(numberSeparator, separatorSubstitution);
                
                // If no change was made, exit the loop.
                if (previousNumbers === numbers) {
                    break;
                }
            }
        });

        return numbers;
    }

    /**
     * Replaces the numbers with the given character in the input, but keeps the length of the input.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param {any} substitutionCharacter The character used for substituting a part of the input.
     */
    substituteNumbersInInput(numbers, substitutionCharacter) {
        const regularExpressionPattern = new RegExp('[0-9.,-]+', 'g');
        let regexMatches = [...numbers.matchAll(regularExpressionPattern)];
        let previousNumbers = '';

        regexMatches.sort((a, b) => {
            return b.toString().length - a.toString().length;
        });

        // Cut out each number from the input.
        regexMatches.forEach((regexMatch) => {
            let separatorSubstitution = '';

            for (let i = 0; i < regexMatch.length; i++) {
                separatorSubstitution += substitutionCharacter;
            }
            
            while (numbers.indexOf(regexMatch) >= 0) {
                previousNumbers = numbers;
                numbers = numbers.replace(regexMatch, separatorSubstitution);
                
                // If no change was made, exit the loop.
                if (previousNumbers === numbers) {
                    break;
                }
            }
        });

        return numbers;
    }

    /**
     * Truncates the given character in the input if it contains multiple occurrences in one place.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param {any} substitutionCharacter The character used for substituting a part of the input.
     */
    truncateTextSubstitutionInInput(numbers, substitutionCharacter) {
        while (numbers.indexOf(substitutionCharacter + substitutionCharacter) >= 0) {
            numbers = numbers.replace(substitutionCharacter + substitutionCharacter, substitutionCharacter);
        }

        return numbers;
    }

    /**
     * Gets a character that is not used in the input and can be used to substitute all number delimiters.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     */
    getSubstitutionString(numbers) {
        let substitutionCharacter = '';

        for (let i = 0; i < this.substitutionCharacters.length; i++) {
            const currentCharacter = this.substitutionCharacters[i];

            if (numbers.indexOf(currentCharacter) < 0) {
                substitutionCharacter = currentCharacter;
                break;
            }
        }

        return substitutionCharacter;
    }

    /**
     * Collects the negative numbers from the input.
     * @param {any} numbers The string input that contains the numbers to be added together separated by delimiters.
     */
    collectNegativeNumbersFromInput(numbers) {
        let negativesFound = [];
        const regularExpressionPattern = new RegExp('[0-9.,-]+', 'g');
        const regexMatches = [...numbers.matchAll(regularExpressionPattern)];

        // Check each number if it's negative and gather them up.
        regexMatches.forEach((regexMatch) => {
            if (!isNaN(regexMatch) && parseInt(regexMatch) < 0) {
                negativesFound.push(regexMatch);
            }
        });

        return negativesFound;
    }
}

module.exports = StringCalculator;
