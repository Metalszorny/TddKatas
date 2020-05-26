<?php

namespace Common;

/**
 * A calculator that accepts a string input and does an operation on the provided numbers.
 */
class StringCalculator
{
    // Contains the supported number separators.
    protected $numberSeparators;
    
    // Containns the characters that can be used for content substitution.
    protected $substitutionCharacters;
    
    /**
     * Initialises a new instance on the StringCalculator class.
     */
    public function __construct()
    {
        $this->initialize();
    }
    
    /**
     * Terminates an instance on the StringCalculator class.
     */
    public function __destruct()
    {
        unset($this->numberSeparators);
        unset($this->substitutionCharacters);
    }
    
    /**
     * Adds the provided numbers together.
     * @param String $numbers The string input that contains the numbers to be added together with number separators.
     * @return Int The sum of the provided numbers.
     */
    public function add($numbers)
    {
        // Return zero if the input is null, empty string or whitespace.
        if ($numbers == NULL || $numbers === '' || trim($numbers) === '')
        {
            return 0;
        }
        
        $errorMessages = array();
        
        // Detect and set any given custom separator.
        $numbers = $this->handleCustomSeparators($numbers);
        
        // Detect any negative numbers in the input and create an error message if any are found.
        $this->handleNegativeNumbers($numbers, $errorMessages);
        
        // Detect any unregistered or unsupported separators and create an error message if any are found.
        $this->handleUnregisteresSeparators($numbers, $errorMessages);
        
        // Calculate the sum of the given numbers and detect and errors in the input.
        $sum = $this->processNumbers($numbers, $errorMessages);
        
        // Throw an exception if any errors were detected.
        if (count($errorMessages) > 0)
        {
            throw new Exception(join('\n', $errorMessages));
        }
        
        return $sum;
    }
    
    /**
     * Initialise variables.
     */
    protected function initialize()
    {
        // Initialize the default number separators.
        $this->numberSeparators = array(';', '\n');
        $this->substitutionCharacters = array
        (
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
        );
    }
    
    /**
     * Detects any provided definition for custom number separators and sets them to be used.
     * @param String $numbers The string input that contains the numbers to be added together with number separators.
     * @return String The string input that contains the numbers to be added together without the definition of custom number separators.
     */
    protected function handleCustomSeparators($numbers)
    {
        // If any cutom separators are given in the start of the input.
        if (strpos($numbers, '//') === 0)
        {
            // Clear the default number separators.
            $this->numberSeparators = array();
            
            // Get the custom separator definition.
            $customSeparator = $this->getTheCustomSeparatorDefinitionFromTheInput($numbers);
            
            // Remove the custom separator definition from the input.
            $numbers = str_replace(sprintf('//%s\n', $customSeparator), '', $numbers);
            
            // Process the custon separator definition.
            $this->processCustomSeparatorDefinition($customSeparator);
        }
        
        return $numbers;
    }
    
    /**
     * Detects any provided negative numbers in the input.
     * @param String $numbers The string input that contains the numbers to be added together with number separators.
     * @param array $errorMessages Error messages detected when checking the input.
     */
    protected function handleNegativeNumbers($numbers, $errorMessages)
    {
        $numbers = $this->replaceSeparatorsInInput($numbers);
        $negativesFound = $this->collectNegativeNumbersFromInput($numbers);
        
        // If any negative numbers were found, create an error message.
        if (count($negativesFound) > 0)
        {
            array_push($errorMessages, sprintf('Negatives not allowed :  %s', join(', ', $negativesFound)));
        }
    }
    
    /**
     * Detects any unsupported number separators in the input.
     * @param String $numbers The string input that contains the numbers to be added together with number separators.
     * @param array $errorMessages Error messages detected when checking the input.
     */
    protected function handleUnregisteresSeparators($numbers, $errorMessages)
    {
        $originalNumbers = $numbers;
        $substitutionCharacter = $this->getSubstitutionString($numbers);
        $numbers = $this->substituteSeparatorsInInput($numbers, $substitutionCharacter);
        $numbers = $this->substituteNumbersInInput($numbers, $substitutionCharacter);
        $numbers = $this->truncateTextSubstitutionInInput($numbers, $substitutionCharacter);
        
        if ($numbers == NULL || $numbers === '' || trim($numbers) === '')
        {
            return;
        }
        
        $numberParts = explode($substitutionCharacter, $numbers);
        
        // If there's anything still remaining in the input, that's unsupported and an error should be added about it.
        foreach ($numberParts as $numberPart)
        {
            if ($numberPart == NULL || $numberPart === '' || trim($numberPart) === '')
            {
                continue;
            }
            
            $indexOfUnsupportedSeparator = strpos($originalNumbers, $numberPart);
            array_push($errorMessages, sprintf("'%s' expected but '%s' found at position %d.", join("' or '", $this->numberSeparators), $numberPart, $indexOfUnsupportedSeparator));
        }
    }
    
    /**
     * Processes the input string's numbers and returns the sum of them.
     * @param String $numbers The string input that contains the numbers to be added together with number separators.
     * @param array $errorMessages Error messages detected when checking the input.
     * @return Int The sum of the provided numbers.
     */
    protected function processNumbers($numbers, $errorMessages)
    {
        // Return zero if the input is null, empty string or whitespace.
        if ($numbers == NULL || $numbers === '' || trim($numbers) === '')
        {
            return 0;
        }
        
        $originalNumbers = $numbers;
        $substitutedNumbers = $this->substituteSeparatorsInInput($numbers, ';');
        $numbers = $this->replaceSeparatorsInInput($numbers);
        $numberParts = explode(';', $numbers);
        $sum = 0;

        // Process the numbers from the input.
        for ($index = 0; $index < count($numberParts); $index++)
        {
            $numberPart = $numberParts[$index];
            
            // If the current number is empty an error should be added.
            if ($numberPart == NULL || $numberPart === '' || trim($numberPart) === '')
            {
                // If the number is at the end of the input.
                if ($index === count($numberParts) - 1)
                {
                    array_push($errorMessages, 'Number expected but EOF found.');
                }
                else
                {
                    $indexOfUnexpected = 0;
                    
                    if ($index > 0)
                    {
                        $previousNumber = $numberParts[$index - 1];
                        $indexOfUnexpected = strpos($substitutedNumbers, $previousNumber) + strlen($previousNumber);
                        
                        foreach ($this->numberSeparators as $numberSeparator)
                        {
                            $currentVersion = sprintf("%s%s", $previousNumber, $numberSeparator);
                            
                            if (strpos($originalNumbers, $currentVersion) === true &&
                                strpos($originalNumbers, $currentVersion) === $indexOfUnexpected - strlen($previousNumber))
                            {
                                $indexOfUnexpected += strlen($numberSeparator);
                                break;
                            }
                        }
                    }
                    
                    $nextNumberIndex = strpos($substitutedNumbers, $numberParts[$index + 1]);
                    $unexpectedSeparator = substr($originalNumbers, $indexOfUnexpected, $nextNumberIndex - $indexOfUnexpected);
                    array_push($errorMessages, sprintf("Number expected but '%s' found at position %d.", $unexpectedSeparator, $indexOfUnexpected));
                }
            }
            // If the number can be parsed and are up to 1000, add it to the sum.
            else if (ctype_digit($numberPart) && intval($numberPart) <= 1000)
            {
                $sum += intval($numberPart);
            }
        }
        
        return $sum;
    }
    
    /**
     * Gets the custom delimiter definition from the input.
     * @param String $numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return String The custom delimiter definition from the input.
     */
    protected function getTheCustomSeparatorDefinitionFromTheInput($numbers)
    {
        $customSeparator = substr($numbers, 2);

        if (strpos($numbers, '//[') === 0)
        {
            $customSeparator = substr($customSeparator, 0, strpos($customSeparator, ']\n') + 1);
        }
        else if (strpos($numbers, '//\n\n') === 0)
        {
            $customSeparator = '\n';
        }
        else
        {
            $customSeparator = substr($customSeparator, 0, strpos($customSeparator, '\n'));
        }
        
        return $customSeparator;
    }
    
    /**
     * Processes the custom delimiter definition from the input and adds them to the used separators.
     * @param String $customSeparator The custom delimiter definition from the input.
     */
    protected function processCustomSeparatorDefinition($customSeparator)
    {
        // If there are multiple custom separators given.
        if (strpos($customSeparator, '][') > 0)
        {
            do
            {
                $currentPart = substr($customSeparator, 0, strpos($customSeparator, '][') + 1);
                $customSeparator = str_replace($currentPart, '', $customSeparator);
                $currentPart = $this->removeSquareBracketsFromStartAndEnd($currentPart);
                array_push($this->numberSeparators, $currentPart);
            } while (strpos($customSeparator, '][') > 0);
        }

        $customSeparator = $this->removeSquareBracketsFromStartAndEnd($customSeparator);
        array_push($this->numberSeparators, $customSeparator);
        array_multisort($this->numberSeparators, SORT_STRING, SORT_DESC);
    }
    
    /**
     * Removes the square brackets from the given custom delimiter.
     * @param String $customSeparator The custom delimiter definition from the input.
     * @return String The given custom delimiter without square brackets around it.
     */
    protected function removeSquareBracketsFromStartAndEnd($customSeparator)
    {
        // If the custom separator is defined in squarely braces, remove them.
        if (strpos($customSeparator, '[') === 0 && 
            strpos($customSeparator, ']', -1) === strlen($customSeparator) - 1)
        {
            $customSeparator = substr($customSeparator, 1);
            $customSeparator = substr($customSeparator, 0, strlen($customSeparator) - 1);
        }
        
        return $customSeparator;
    }
    
    /**
     * Replaces the number separators with a single type in the input. This may shorten the length of the input.
     * @param String $numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return String The input with replaced number separators.
     */
    protected function replaceSeparatorsInInput($numbers)
    {
        // Process the supported number separators.
        foreach ($this->numberSeparators as $numberSeparator)
        {
            $numbers = str_replace($numberSeparator, ';', $numbers);
        }
        
        return $numbers;
    }
    
    /**
     * Replaces the number separators with the given character in the input, but keeps the length of the input.
     * @param String $numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param String $substitutionCharacter The character used for substituting a part of the input.
     * @return String The input with replaced number separators.
     */
    protected function substituteSeparatorsInInput($numbers, $substitutionCharacter)
    {
        // Process the supported number separators.
        foreach ($this->numberSeparators as $numberSeparator)
        {
            $separatorSubstitution = '';
            
            for ($i = 0; $i < strlen($numberSeparator); $i++)
            {
                $separatorSubstitution .= $substitutionCharacter;
            }
            
            $numbers = str_replace($numberSeparator, $separatorSubstitution, $numbers);
        }
        
        return $numbers;
    }
    
    /**
     * Replaces the numbers with the given character in the input, but keeps the length of the input.
     * @param String $numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param String $substitutionCharacter The character used for substituting a part of the input.
     * @return String The input with replaced numbers.
     */
    protected function substituteNumbersInInput($numbers, $substitutionCharacter)
    {
        $regularExpressionPattern = "([0-9.,-]+)";
        $regexMatches = array();
        preg_match_all($regularExpressionPattern, $numbers, $regexMatches, PREG_PATTERN_ORDER);
        array_multisort($regexMatches, SORT_STRING, SORT_DESC);
        
        // Cut out each number from the input.
        foreach ($regexMatches as $regexMatch)
        {
            $separatorSubstitution = '';
            
            for ($i = 0; $i < count($regexMatch); $i++)
            {
                $separatorSubstitution .= $substitutionCharacter;
            }
            
            $numbers = str_replace($regexMatch, $separatorSubstitution, $numbers);
        }
        
        return $numbers;
    }
    
    /**
     * Truncates the given character in the input if it contains multiple occurrences in one place.
     * @param String $numbers The string input that contains the numbers to be added together separated by delimiters.
     * @param String $substitutionCharacter The character used for substituting a part of the input.
     * @return String The input with truncated occurrences of the given character.
     */
    protected function truncateTextSubstitutionInInput($numbers, $substitutionCharacter)
    {
        while (strpos($numbers, $substitutionCharacter . $substitutionCharacter) === true)
        {
            $numbers = str_replace($substitutionCharacter . $substitutionCharacter, $substitutionCharacter, $numbers);
        }
        
        return $numbers;
    }
    
    /**
     * Gets a character that is not used in the input and can be used to substitute all number delimiters.
     * @param String $numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return String A character that is not used in the input and can be used to substitute all number delimiters.
     */
    protected function getSubstitutionString($numbers)
    {
        $substitutionCharacter = '';
        
        foreach ($this->substitutionCharacters as $currentCharacter)
        {
            if (strpos($numbers, $currentCharacter) === false)
            {
                $substitutionCharacter = $currentCharacter;
                break;
            }
        }
        
        return $substitutionCharacter;
    }
    
    /**
     * Collects the negative numbers from the input.
     * @param String $numbers The string input that contains the numbers to be added together separated by delimiters.
     * @return array The negative numbers from the input.
     */
    protected function collectNegativeNumbersFromInput($numbers)
    {
        $negativesFound = array();
        $regularExpressionPattern = "([0-9.,-]+)";
        $regexMatches = array();
        preg_match_all($regularExpressionPattern, $numbers, $regexMatches, PREG_PATTERN_ORDER);

        // Check each number if it's negative and gather them up.
        foreach ($regexMatches as $regexMatch)
        {
            if (ctype_digit($regexMatch) && intval($regexMatch) < 0)
            {
                array_push($negativesFound, $regexMatch);
            }
        }
        
        return $negativesFound;
    }
}
