##
# A calculator that accepts a string input and does an operation on the provided numbers.
##
class StringCalculator
	# Contains the supported number separators.
	@numberSeparators = []
	
	# Contains the characters that can be used for content substitution.
	@substitutionCharacters = []

	##
	# Initializes a new instance on the StringCalculator class.
	##
	def initialize
		self.initializeObject
	end
	
	##
	# Adds the provided numbers together.
	##
	def add(numbers)
		# Return zero if the input is null, empty string or whitespace.
        if numbers.nil? or numbers.to_s.empty? or numbers.to_s.strip.empty?
            return 0
        end

        @errorMessages = []

        # Detect and set any given custom separator.
        numbers = self.handleCustomSeparators(numbers)

        # Detect any negative numbers in the input and create an error message if any are found.
        self.handleNegativeNumbers(numbers, @errorMessages)

        # Detect any unregistered or unsupported separators and create an error message if any are found.
        self.handleUnregisteredSeparators(numbers, @errorMessages)

        # Calculate the sum of the given numbers and detect and errors in the input.
        @sum = self.processNumbers(numbers, @errorMessages)
		
        # Throw an exception if any errors were detected.
        if @errorMessages.length > 0
            raise Exception.new(@errorMessages.join('\n'))
        end

        return @sum
	end
	
	##
	# Initialise variables.
	##
	def initializeObject
		@numberSeparators = [';', '\n']
        @substitutionCharacters = 
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
	end
	
	##
	# Detects any provided definition for custom number separators and sets them to be used.
	##
	def handleCustomSeparators(numbers)
		# If any custom separators are given in the start of the input.
        if numbers.to_s.start_with?('//')
            # Clear the default number separators.
            @numberSeparators = []

            # Get the custom separator definition.
            @customSeparator = self.getTheCustomSeparatorDefinitionFromTheInput(numbers)

            # Remove the custom separator definition from the input.
            numbers = numbers.to_s.gsub("//#{@customSeparator.to_s}\\n", '')

            # Process the custom separator definition.
            self.processCustomSeparatorDefinition(@customSeparator)
        end

        return numbers
	end
	
	##
    # Detects any provided negative numbers in the input.
    ##
    def handleNegativeNumbers(numbers, errorMessages)
        numbers = self.replaceSeparatorsInInput(numbers)
        @negativesFound = self.collectNegativeNumbersFromInput(numbers)

        # If any negative numbers were found, create an error message.
        if @negativesFound.length > 0
            errorMessages.push("Negatives not allowed : #{@negativesFound.join(', ')}")
        end
    end

    ##
    # Detects any unsupported number separators in the input.
    ##
    def handleUnregisteredSeparators(numbers, errorMessages)
        @originalNumbers = numbers
        @substitutionCharacter = self.getSubstitutionString(numbers)
        numbers = self.substituteSeparatorsInInput(numbers, @substitutionCharacter)
        numbers = self.substituteNumbersInInput(numbers, @substitutionCharacter)
        numbers = self.truncateTextSubstitutionInInput(numbers, @substitutionCharacter)

        if numbers.nil? or numbers.to_s.empty? or numbers.to_s.strip.empty?
            return
        end

        @numberParts = numbers.to_s.split(@substitutionCharacter)

        # If there's anything still remaining in the input, that's unsupported and an error should be added about it.
        for i in 0..(@numberParts.length - 1) do
            @numberPart = @numberParts[i]

            if @numberPart.nil? or @numberPart.to_s.empty? or @numberPart.to_s.strip.empty?
                next
            end

            @indexOfUnsupportedSeparator = @originalNumbers.to_s.index(@numberPart)
            errorMessages.push("'#{@numberSeparators.join('\' or \'')}' expected but '#{@numberPart}' found at position #{@indexOfUnsupportedSeparator}.")
        end
    end

    ##
    # Processes the input string's numbers and returns the sum of them.
    ##
    def processNumbers(numbers, errorMessages)
        # Return zero if the numbers part is null, empty string or whitespace.
        if numbers.nil? or numbers.to_s.empty? or numbers.to_s.strip.empty?
            return 0
        end

        @originalNumbers = numbers
        @substitutedNumbers = self.substituteSeparatorsInInput(numbers, ';')
        numbers = self.replaceSeparatorsInInput(numbers)
        @numberParts = numbers.to_s.split(';', -1)
        @sum = 0

        # Process the numbers from the input.
        for index in 0..(@numberParts.length - 1) do
            @numberPart = @numberParts[index]

            # If the current number is empty an error should be added.
            if @numberPart.nil? or @numberPart.to_s.empty? or @numberPart.to_s.strip.empty?
                # If the number is at the end of the input.
                if index == (@numberParts.length - 1)
                    errorMessages.push('Number expected but EOF found.')
                else
                    @indexOfUnexpected = 0

                    if index > 0
                        @previousNumber = @numberParts[index - 1]
                        @indexOfUnexpected = @substitutedNumbers.to_s.index(@previousNumber) + @previousNumber.to_s.length

                        for i in 0..@numberSeparators.length do
                            @numberSeparator = @numberSeparators[i]
                            @currentVersion = "#{@previousNumber}#{@numberSeparator}"

                            if @originalNumbers.to_s.index(@currentVersion) != nil and
                                @originalNumbers.to_s.index(@currentVersion) == @indexOfUnexpected - @previousNumber.to_s.length
                                @indexOfUnexpected += @numberSeparator.to_s.length
                                break
                            end
                        end
                    end

                    @nextNumberIndex = @substitutedNumbers.to_s.index(@numberParts[index.to_i + 1])
                    @unexpectedSeparator = @originalNumbers.to_s[@indexOfUnexpected..@nextNumberIndex - 1]
                    errorMessages.push("Number expected but '#{@unexpectedSeparator}' found at position #{@indexOfUnexpected}.")
                end
            # If the number can be parsed and are up to 1000, add it to the sum.
            elsif self.integerTryParse(@numberPart) and @numberPart.to_i <= 1000
                @sum += @numberPart.to_i
            end
        end

        return @sum
    end

    ##
    # Gets the custom delimiter definition from the input.
    ##
    def getTheCustomSeparatorDefinitionFromTheInput(numbers)
        @customSeparator = numbers.to_s[2..-1]

        if numbers.to_s.start_with?('//[')
            @customSeparator = @customSeparator.to_s[0..@customSeparator.to_s.index(']\n')]
        elsif numbers.to_s.start_with?('//\n\n')
            @customSeparator = '\n'
        else
            @customSeparator = @customSeparator.to_s[0..(@customSeparator.to_s.index('\n') - 1)]
        end

        return @customSeparator
    end

    ##
    # Processes the custom delimiter definition from the input and adds them to the used separators.
    ##
    def processCustomSeparatorDefinition(customSeparator)
        # If there are multiple custom separators given.
        if customSeparator.to_s.index('][') != nil
            begin
                @currentPart = customSeparator[0..customSeparator.to_s.index('][')]
                customSeparator = customSeparator.to_s.gsub(@currentPart, '')
                @currentPart = self.removeSquareBracketsFromStartAndEnd(@currentPart)
                @numberSeparators.push(@currentPart)
            end while customSeparator.to_s.index('][') != nil
        end

        customSeparator = self.removeSquareBracketsFromStartAndEnd(customSeparator)
        @numberSeparators.push(customSeparator)
        @numberSeparators = @numberSeparators.sort_by do |str| 
			[-str.length, @numberSeparators.index(str)] 
		end
    end

    ##
    # Removes the square brackets from the given custom delimiter.
    ##
    def removeSquareBracketsFromStartAndEnd(customSeparator)
        # If the custom separator is defined in squarely braces, remove them.
        if customSeparator.to_s.start_with?('[') and customSeparator.to_s.end_with?(']')
            customSeparator = customSeparator.to_s[1..-1]
            customSeparator = customSeparator[0..customSeparator.to_s.length - 2]
        end

        return customSeparator
    end

    ##
    # Replaces the number separators with a single type in the input. This may shorten the length of the input.
    ##
    def replaceSeparatorsInInput(numbers)
        # Process the supported number separators.
        for numberSeparator in @numberSeparators
            @previousNumbers = ''

            while numbers.to_s.index(numberSeparator) != nil do
                @previousNumbers = numbers
                numbers = numbers.to_s.gsub(numberSeparator, ';')
                
                # If no change was made, exit the loop.
                if @previousNumbers == numbers
                    break
                end
            end
        end

        return numbers
    end

    ##
    # gsubs the number separators with the given character in the input, but keeps the length of the input.
    ##
    def substituteSeparatorsInInput(numbers, substitutionCharacter)
        # Process the supported number separators.
        for @numberSeparator in @numberSeparators
            @separatorSubstitution = ''
            @previousNumbers = ''

            for i in 0..(@numberSeparator.to_s.length - 1)
                @separatorSubstitution += substitutionCharacter
            end
            
            while numbers.to_s.index(@numberSeparator) != nil do
                @previousNumbers = numbers
                numbers = numbers.to_s.gsub(@numberSeparator, @separatorSubstitution)
                
                # If no change was made, exit the loop.
                if @previousNumbers == numbers
                    break
                end
            end
        end
		
        return numbers
    end

    ##
    # gsubs the numbers with the given character in the input, but keeps the length of the input.
    ##
    def substituteNumbersInInput(numbers, substitutionCharacter)
        @regularExpressionPattern = /[0-9.,-]+/
        @regexMatches = numbers.to_s.scan(@regularExpressionPattern)
        @previousNumbers = ''
        @regexMatches = @regexMatches.sort_by do |str| 
			[-str.length]
		end

        # Cut out each number from the input.
        for regexMatch in @regexMatches
            @separatorSubstitution = ''

            for i in 0..(regexMatch.to_s.length - 1)
                @separatorSubstitution += substitutionCharacter
            end
            
            while numbers.to_s.index(regexMatch) != nil do
                @previousNumbers = numbers
                numbers = numbers.to_s.gsub(regexMatch, @separatorSubstitution)
                
                # If no change was made, exit the loop.
                if @previousNumbers == numbers
                    break
                end
            end
        end
		
        return numbers
    end

    ##
    # Truncates the given character in the input if it contains multiple occurrences in one place.
    ##
    def truncateTextSubstitutionInInput(numbers, substitutionCharacter)
        while numbers.to_s.index(substitutionCharacter + substitutionCharacter) != nil do
            numbers = numbers.to_s.gsub(substitutionCharacter + substitutionCharacter, substitutionCharacter)
        end

        return numbers
    end

    ##
    # Gets a character that is not used in the input and can be used to substitute all number delimiters.
    ##
    def getSubstitutionString(numbers)
        @substitutionCharacter = ''

        for i in 0..(@substitutionCharacters.length - 1)
            @currentCharacter = @substitutionCharacters[i]

            if numbers.to_s.index(@currentCharacter) == nil
                @substitutionCharacter = @currentCharacter
                break
            end
        end

        return @substitutionCharacter
    end

    ##
    # Collects the negative numbers from the input.
    ##
    def collectNegativeNumbersFromInput(numbers)
        @negativesFound = []
        @regularExpressionPattern = /[0-9.,-]+/
        @regexMatches = numbers.to_s.scan(@regularExpressionPattern)

        # Check each number if it's negative and gather them up.
        for regexMatch in @regexMatches
            if self.integerTryParse(regexMatch) and regexMatch.to_i < 0
                @negativesFound.push(regexMatch)
			end
        end

        return @negativesFound
    end
	
	##
    # Checks if the given string can be converted into an integer number.
    ##
   def integerTryParse(number)
        !!Integer(number)
        rescue ArgumentError, TypeError
			false
    end
end
