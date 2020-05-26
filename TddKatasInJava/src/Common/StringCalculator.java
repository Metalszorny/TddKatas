package Common;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * A calculator that accepts a string input and does an operation on the provided numbers.
 */
public class StringCalculator {
    // Contains the supported number separators.
    protected List<String> numberSeparators;

    // Contains the characters that can be used for content substitution.
    protected List<Character> substitutionCharacters;

    /**
     * Initializes a new instance on the StringCalculator class.
     */
    public StringCalculator() {
        this.initialize();
    }

    /**
     * Terminates an instance on the StringCalculator class.
     */
    protected void finalize() throws Throwable {
        this.numberSeparators = null;
        this.substitutionCharacters = null;
        super.finalize();
    }

    /**
     * Adds the provided numbers together.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return The sum of the provided numbers.
     */
    public int add(String numbers) throws Exception {
        // Return zero if the input is null, empty string or whitespace.
        if (numbers == null || numbers.isEmpty() || numbers.trim().isEmpty()) {
            return 0;
        }

        List<String> errorMessages = new ArrayList();

        // Detect and set any given custom separator.
        numbers = this.handleCustomSeparators(numbers);

        // Detect any negative numbers in the input and create an error message if any are found.
        this.handleNegativeNumbers(numbers, errorMessages);

        // Detect any unregistered or unsupported separators and create an error message if any are found.
        this.handleUnregisteredSeparators(numbers, errorMessages);

        // Calculate the sum of the given numbers and detect and errors in the input.
        int sum = this.processNumbers(numbers, errorMessages);

        // Throw an exception if any errors were detected.
        if (!errorMessages.isEmpty()) {
            throw new Exception(String.join("\n", errorMessages));
        }

        return sum;
    }

    /**
     * Initialise variables.
     */
    protected void initialize() {
        // Initialize the default number separators.
        this.numberSeparators = new ArrayList();
        this.numberSeparators.add(";");
        this.numberSeparators.add("\n");
        this.substitutionCharacters = new ArrayList();
        this.substitutionCharacters.add(';');
        this.substitutionCharacters.add('\'');
        this.substitutionCharacters.add('"');
        this.substitutionCharacters.add('+');
        this.substitutionCharacters.add('!');
        this.substitutionCharacters.add('-');
        this.substitutionCharacters.add('%');
        this.substitutionCharacters.add('/');
        this.substitutionCharacters.add('=');
        this.substitutionCharacters.add('~');
        this.substitutionCharacters.add('(');
        this.substitutionCharacters.add(')');
        this.substitutionCharacters.add('*');
        this.substitutionCharacters.add('_');
        this.substitutionCharacters.add(':');
        this.substitutionCharacters.add(',');
        this.substitutionCharacters.add('?');
        this.substitutionCharacters.add('.');
        this.substitutionCharacters.add('{');
        this.substitutionCharacters.add('}');
        this.substitutionCharacters.add('@');
        this.substitutionCharacters.add('&');
        this.substitutionCharacters.add('#');
        this.substitutionCharacters.add('>');
        this.substitutionCharacters.add('<');
        this.substitutionCharacters.add('[');
        this.substitutionCharacters.add(']');
        this.substitutionCharacters.add('$');
        this.substitutionCharacters.add('\\');
        this.substitutionCharacters.add('|');
        this.substitutionCharacters.add('€');
        this.substitutionCharacters.add('÷');
        this.substitutionCharacters.add('¤');
        this.substitutionCharacters.add('^');
        this.substitutionCharacters.add('§');
    }

    /**
     * Detects any provided definition for custom number separators and sets them to be used.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return The string input that contains the numbers to be added together without the definition of custom number separators.
     */
    protected String handleCustomSeparators(String numbers) {
        // If any custom separators are given in the start of the input.
        if (numbers.startsWith("//")) {
            // Clear the default number separators.
            this.numberSeparators.clear();

            // Get the custom separator definition.
            String customSeparator = this.getTheCustomSeparatorDefinitionFromTheInput(numbers);

            // Remove the custom separator definition from the input.
            numbers = numbers.replace(String.format("//%s\n", customSeparator), "");

            // Process the custom separator definition.
            this.processCustomSeparatorDefinition(customSeparator);
        }

        return numbers;
    }

    /**
     * Detects any provided negative numbers in the input.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param errorMessages Error messages detected when checking the input.
     */
    protected void handleNegativeNumbers(String numbers, List<String> errorMessages) {
        numbers = this.replaceSeparatorsInInput(numbers);
        List<String> negativesFound = this.collectNegativeNumbersFromInput(numbers);

        // If any negative numbers were found, create an error message.
        if (!negativesFound.isEmpty()) {
            errorMessages.add(String.format("Negatives not allowed : %s", String.join(", ", negativesFound)));
        }
    }

    /**
     * Detects any unsupported number separators in the input.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param errorMessages Error messages detected when checking the input.
     */
    protected void handleUnregisteredSeparators(String numbers, List<String> errorMessages) {
        String originalNumbers = numbers;
        String substitutionCharacter = this.getSubstitutionString(numbers);
        numbers = this.substituteSeparatorsInInput(numbers, substitutionCharacter);
        numbers = this.substituteNumbersInInput(numbers, substitutionCharacter);
        numbers = this.truncateTextSubstitutionInInput(numbers, substitutionCharacter);

        if (numbers == null || numbers.isEmpty() || numbers.trim().isEmpty()) {
            return;
        }

        String[] numberParts = numbers.split(substitutionCharacter, -1);

        // If there's anything still remaining in the input, that's unsupported and an error should be added about it.
        for (String numberPart : numberParts) {
            if (numberPart == null || numberPart.isEmpty() || numberPart.trim().isEmpty()) {
                continue;
            }

            int indexOfUnsupportedSeparator = originalNumbers.indexOf(numberPart);
            errorMessages.add(String.format(
                    "'%s' expected but '%s' found at position %d.",
                    String.join("' or '", this.numberSeparators),
                    numberPart,
                    indexOfUnsupportedSeparator));
        }
    }

    /**
     * Processes the input string's numbers and returns the sum of them.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param errorMessages Error messages detected when checking the input.
     * @return The sum of the provided numbers.
     */
    protected int processNumbers(String numbers, List<String> errorMessages) {
        // Return zero if the numbers part is null, empty string or whitespace.
        if (numbers == null || numbers.isEmpty() || numbers.trim().isEmpty()) {
            return 0;
        }

        String originalNumbers = numbers;
        String substitutedNumbers = this.substituteSeparatorsInInput(numbers, ";");
        numbers = this.replaceSeparatorsInInput(numbers);
        String[] numberParts = numbers.split(";", -1);
        int sum = 0;

        // Process the numbers from the input.
        for (int index = 0; index < numberParts.length; index++) {
            String numberPart = numberParts[index];

            // If the current number is empty an error should be added.
            if (numberPart == null || numberPart.isEmpty() || numberPart.trim().isEmpty()) {
                // If the number is at the end of the input.
                if (index == numberParts.length - 1) {
                    errorMessages.add("Number expected but EOF found.");
                }
                else {
                    int indexOfUnexpected = 0;

                    if (index > 0) {
                        String previousNumber = numberParts[index - 1];
                        indexOfUnexpected = substitutedNumbers.indexOf(previousNumber) + previousNumber.length();

                        for (String numberSeparator : this.numberSeparators) {
                            String currentVersion = String.format("%s%s", previousNumber, numberSeparator);

                            if (originalNumbers.contains(currentVersion) &&
                                originalNumbers.indexOf(currentVersion) == indexOfUnexpected - previousNumber.length()) {
                                indexOfUnexpected += numberSeparator.length();
                                break;
                            }
                        }
                    }

                    int nextNumberIndex = substitutedNumbers.indexOf(numberParts[index + 1]);
                    String unexpectedSeparator = originalNumbers.substring(indexOfUnexpected, nextNumberIndex);
                    errorMessages.add(String.format("Number expected but '%s' found at position %d.", unexpectedSeparator, indexOfUnexpected));
                }
            }
            // If the number can be parsed and are up to 1000, add it to the sum.
            else if (this.integerTryParse(numberPart) && Integer.parseInt(numberPart) <= 1000) {
                sum += Integer.parseInt(numberPart);
            }
        }

        return sum;
    }

    /**
     * Gets the custom delimiter definition from the input.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return The custom delimeter definition from the input.
     */
    protected String getTheCustomSeparatorDefinitionFromTheInput(String numbers) {
        String customSeparator = numbers.substring(2);

        if (numbers.startsWith("//[")) {
            customSeparator = customSeparator.substring(0, customSeparator.indexOf("]\n") + 1);
        }
        else if (numbers.startsWith("//\n\n")) {
            customSeparator = "\n";
        }
        else {
            customSeparator = customSeparator.substring(0, customSeparator.indexOf("\n"));
        }

        return customSeparator;
    }

    /**
     * Processes the custom delimiter definition from the input and adds them to the used separators.
     * @param customSeparator The custom delimeter definition from the input.
     */
    protected void processCustomSeparatorDefinition(String customSeparator) {
        // If there are multiple custom separators given.
        if (customSeparator.contains("][")) {
            do {
                String currentPart = customSeparator.substring(0, customSeparator.indexOf("][") + 1);
                customSeparator = customSeparator.replace(currentPart, "");
                currentPart = this.removeSquareBracketsFromStartAndEnd(currentPart);
                this.numberSeparators.add(currentPart);
            } while (customSeparator.contains("]["));
        }

        customSeparator = this.removeSquareBracketsFromStartAndEnd(customSeparator);
        this.numberSeparators.add(customSeparator);
        this.numberSeparators.sort(Comparator.comparingInt(String::length).reversed());
    }

    /**
     * Removes the square brackets from the given custom delimiter.
     * @param customSeparator The custom delimeter definition from the input.
     * @return The given custom delimiter without square brackets around it.
     */
    protected String removeSquareBracketsFromStartAndEnd(String customSeparator) {
        // If the custom separator is defined in squarely braces, remove them.
        if (customSeparator.startsWith("[") && customSeparator.endsWith("]")) {
            customSeparator = customSeparator.substring(1);
            customSeparator = customSeparator.substring(0, customSeparator.length() - 1);
        }

        return customSeparator;
    }

    /**
     * Replaces the number separators with a single type in the input. This may shorten the length of the input.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return The input with replaced number separators.
     */
    protected String replaceSeparatorsInInput(String numbers) {
        // Process the supported number separators.
        for (String numberSeparator : this.numberSeparators) {
            numbers = numbers.replace(numberSeparator, ";");
        }

        return numbers;
    }

    /**
     * Replaces the number separators with the given character in the input, but keeps the length of the input.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param substitutionCharacter The character used for substituting a part of the input.
     * @return The input with replaced number separators.
     */
    protected String substituteSeparatorsInInput(String numbers, String substitutionCharacter) {
        // Process the supported number separators.
        for (String numberSeparator : this.numberSeparators) {
            String separatorSubstitution = "";

            for (int i = 0; i < numberSeparator.length(); i++) {
                separatorSubstitution += substitutionCharacter;
            }

            numbers = numbers.replace(numberSeparator, separatorSubstitution);
        }

        return numbers;
    }

    /**
     * Replaces the numbers with the given character in the input, but keeps the length of the input.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param substitutionCharacter The character used for substituting a part of the input.
     * @return The input with replaced numbers.
     */
    protected String substituteNumbersInInput(String numbers, String substitutionCharacter) {
        Pattern regularExpressionPattern = Pattern.compile("([0-9.,-]+)+");
        Matcher regexMatches = regularExpressionPattern.matcher(numbers);
        List<String> regexMatches2 = new ArrayList();

        while (regexMatches.find()) {
            regexMatches2.add(regexMatches.group());
        }

        regexMatches2.sort(Comparator.comparingInt(String::length).reversed());

        // Cut out each number from the input.
        for (String regexMatch : regexMatches2) {
            String separatorSubstitution = "";

            for (int i = 0; i < regexMatch.length(); i++) {
                separatorSubstitution += substitutionCharacter;
            }

            numbers = numbers.replace(regexMatch, separatorSubstitution);
        }

        return numbers;
    }

    /**
     * Truncates the given character in the input if it contains multiple occurrences in one place.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param substitutionCharacter The character used for substituting a part of the input.
     * @return The input with truncated occurrences of the given character.
     */
    protected String truncateTextSubstitutionInInput(String numbers, String substitutionCharacter) {
        while (numbers.contains(substitutionCharacter + substitutionCharacter)) {
            numbers = numbers.replace(substitutionCharacter + substitutionCharacter, substitutionCharacter);
        }

        return numbers;
    }

    /**
     * Gets a character that is not used in the input and can be used to substitute all number delimiters.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return A character that is not used in the input and can be used to substitute all number delimiters.
     */
    protected String getSubstitutionString(String numbers) {
        String substitutionCharacter = "";

        for (char currentCharacter : this.substitutionCharacters) {
            if (!numbers.contains(String.valueOf(currentCharacter))) {
                substitutionCharacter = String.valueOf(currentCharacter);
                break;
            }
        }

        return substitutionCharacter;
    }

    /**
     * Collects the negative numbers from the input.
     * @param numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return The negative numbers from the input.
     */
    protected List<String> collectNegativeNumbersFromInput(String numbers) {
        List<String> negativesFound = new ArrayList();
        Pattern regularExpressionPattern = Pattern.compile("([0-9.,-]+)+");
        Matcher regexMatches = regularExpressionPattern.matcher(numbers);
        List<String> regexMatches2 = new ArrayList();

        while (regexMatches.find()) {
            regexMatches2.add(regexMatches.group());
        }

        // Check each number if it's negative and gather them up.
        for (String regexMatch : regexMatches2) {
            if (this.integerTryParse(regexMatch) && Integer.parseInt(regexMatch) < 0) {
                negativesFound.add(regexMatch);
            }
        }

        return negativesFound;
    }

    /**
     * Checks if the given string can be converted into an integer number.
     * @param number The string to be checked for integer conversion.
     * @return True if the string can be converted to an integer, false if not.
     */
    protected boolean integerTryParse(String number) {
        try {
            Integer.parseInt(number);
            return true;
        }
        catch (Exception ex) {
            return false;
        }
    }
}
