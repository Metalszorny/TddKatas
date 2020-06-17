require_relative "../app/common/StringCalculator"
require "test/unit"

##
# Unit tests for the string calculator class.
##
class StringCalculatorTests < Test::Unit::TestCase
	##
	# Sets up test dependencies.
	##
	def setup
		
	end
	
	##
	# Tears down test dependencies.
	##
	def teardown
		
	end
	
    ##
    # The Add method should return 0 when called with nil.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithNil
        # Arrange.
        @inputValue = nil;
        @expectedResult = 0
        
        # Act.
        @actualResult = self.act_Add(@inputValue)
        
        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return 0 when called with empty string.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithEmptyString
        # Arrange.
        @inputValue = ''
        @expectedResult = 0
        
        # Act.
        @actualResult = self.act_Add(@inputValue)
        
        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with whitespace.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithWhitespace
        # Arrange.
        @inputValue = ' '
        @expectedResult = 0
        
        # Act.
        @actualResult = self.act_Add(@inputValue)
        
        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration1
        # Arrange.
        @inputValue = '//$\n'
        @expectedResult = 0
        
        # Act.
        @actualResult = self.act_Add(@inputValue)
        
        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration2
        # Arrange.
        @inputValue = '//$$\n'
        @expectedResult = 0
        
        # Act.
        @actualResult = self.act_Add(@inputValue)
        
        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration3
        # Arrange.
        @inputValue = '//sep\n'
        @expectedResult = 0
        
        # Act.
        @actualResult = self.act_Add(@inputValue)
        
        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration4
        # Arrange.
        @inputValue = '//\n\n'
        @expectedResult = 0
        
        # Act.
        @actualResult = self.act_Add(@inputValue)
        
        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration5
        # Arrange.
        @inputValue = '//-\n'
        @expectedResult = 0
        
        # Act.
        @actualResult = self.act_Add(@inputValue)
        
        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration6
        # Arrange.
        @inputValue = '//-1\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration7
        # Arrange.
        @inputValue = '//[$]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration8
        # Arrange.
        @inputValue = '//[$$]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration9
        # Arrange.
        @inputValue = '//[sep]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration10
        # Arrange.
        @inputValue = '//[\n]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration11
        # Arrange.
        @inputValue = '//[-]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration12
        # Arrange.
        @inputValue = '//[-1]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration13
        # Arrange.
        @inputValue = '//[-1][-2]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration14
        # Arrange.
        @inputValue = '//[*][%]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration15
        # Arrange.
        @inputValue = '//[**][%%]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration16
        # Arrange.
        @inputValue = '//[sep1][sep2]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration17
        # Arrange.
        @inputValue = '//[[][]]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration18
        # Arrange.
        @inputValue = '//[+][!][#]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration19
        # Arrange.
        @inputValue = '//[++][!!][##]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration20
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration21
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return 0 when called with custom separator declaration.
    ##
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration22
        # Arrange.
        @inputValue = '//[?][??][???]\n'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleInteger1
        # Arrange.
        @inputValue = '0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleInteger2
        # Arrange.
        @inputValue = '1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleInteger3
        # Arrange.
        @inputValue = '1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleInteger4
        # Arrange.
        @inputValue = '1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration1
        # Arrange.
        @inputValue = '//$\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration2
        # Arrange.
        @inputValue = '//$\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration3
        # Arrange.
        @inputValue = '//$\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration4
        # Arrange.
        @inputValue = '//$\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration5
        # Arrange.
        @inputValue = '//$$\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration6
        # Arrange.
        @inputValue = '//$$\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration7
        # Arrange.
        @inputValue = '//$$\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration8
        # Arrange.
        @inputValue = '//$$\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration9
        # Arrange.
        @inputValue = '//sep\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration10
        # Arrange.
        @inputValue = '//sep\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration11
        # Arrange.
        @inputValue = '//sep\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration12
        # Arrange.
        @inputValue = '//sep\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration13
        # Arrange.
        @inputValue = '//\n\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration14
        # Arrange.
        @inputValue = '//\n\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration15
        # Arrange.
        @inputValue = '//\n\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration16
        # Arrange.
        @inputValue = '//\n\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration17
        # Arrange.
        @inputValue = '//-\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration18
        # Arrange.
        @inputValue = '//-\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration19
        # Arrange.
        @inputValue = '//-\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration20
        # Arrange.
        @inputValue = '//-\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration21
        # Arrange.
        @inputValue = '//-1\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration22
        # Arrange.
        @inputValue = '//-1\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration23
        # Arrange.
        @inputValue = '//-1\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration24
        # Arrange.
        @inputValue = '//-1\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration25
        # Arrange.
        @inputValue = '//[$]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration26
        # Arrange.
        @inputValue = '//[$]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration27
        # Arrange.
        @inputValue = '//[$]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration28
        # Arrange.
        @inputValue = '//[$]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration29
        # Arrange.
        @inputValue = '//[$$]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration30
        # Arrange.
        @inputValue = '//[$$]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration31
        # Arrange.
        @inputValue = '//[$$]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration32
        # Arrange.
        @inputValue = '//[$$]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration33
        # Arrange.
        @inputValue = '//[sep]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration34
        # Arrange.
        @inputValue = '//[sep]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration35
        # Arrange.
        @inputValue = '//[sep]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration36
        # Arrange.
        @inputValue = '//[sep]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration37
        # Arrange.
        @inputValue = '//[\n]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration38
        # Arrange.
        @inputValue = '//[\n]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration39
        # Arrange.
        @inputValue = '//[\n]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration40
        # Arrange.
        @inputValue = '//[\n]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration41
        # Arrange.
        @inputValue = '//[-]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration42
        # Arrange.
        @inputValue = '//[-]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration43
        # Arrange.
        @inputValue = '//[-]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration44
        # Arrange.
        @inputValue = '//[-]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration45
        # Arrange.
        @inputValue = '//[-1]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration46
        # Arrange.
        @inputValue = '//[-1]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration47
        # Arrange.
        @inputValue = '//[-1]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration48
        # Arrange.
        @inputValue = '//[-1]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration49
        # Arrange.
        @inputValue = '//[-1][-2]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration50
        # Arrange.
        @inputValue = '//[-1][-2]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration51
        # Arrange.
        @inputValue = '//[-1][-2]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration52
        # Arrange.
        @inputValue = '//[-1][-2]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration53
        # Arrange.
        @inputValue = '//[*][%]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration54
        # Arrange.
        @inputValue = '//[*][%]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration55
        # Arrange.
        @inputValue = '//[*][%]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration56
        # Arrange.
        @inputValue = '//[*][%]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration57
        # Arrange.
        @inputValue = '//[**][%%]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration58
        # Arrange.
        @inputValue = '//[**][%%]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration59
        # Arrange.
        @inputValue = '//[**][%%]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration60
        # Arrange.
        @inputValue = '//[**][%%]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration61
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration62
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration63
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration64
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration65
        # Arrange.
        @inputValue = '//[[][]]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration66
        # Arrange.
        @inputValue = '//[[][]]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration67
        # Arrange.
        @inputValue = '//[[][]]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration68
        # Arrange.
        @inputValue = '//[[][]]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration69
        # Arrange.
        @inputValue = '//[+][!][#]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration70
        # Arrange.
        @inputValue = '//[+][!][#]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration71
        # Arrange.
        @inputValue = '//[+][!][#]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration72
        # Arrange.
        @inputValue = '//[+][!][#]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration73
        # Arrange.
        @inputValue = '//[++][!!][##]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration74
        # Arrange.
        @inputValue = '//[++][!!][##]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration75
        # Arrange.
        @inputValue = '//[++][!!][##]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration76
        # Arrange.
        @inputValue = '//[++][!!][##]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration77
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration78
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration79
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration80
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration81
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration82
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration83
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration84
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration85
        # Arrange.
        @inputValue = '//[?][??][???]\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration86
        # Arrange.
        @inputValue = '//[?][??][???]\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration87
        # Arrange.
        @inputValue = '//[?][??][???]\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the input when called with a single integer number.
    ##
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration88
        # Arrange.
        @inputValue = '//[?][??][???]\n1001'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers1
        # Arrange.
        @inputValue = '0;0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers2
        # Arrange.
        @inputValue = '1;0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers3
        # Arrange.
        @inputValue = '0;1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers4
        # Arrange.
        @inputValue = '0;1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers5
        # Arrange.
        @inputValue = '1;1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers6
        # Arrange.
        @inputValue = '1;1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers7
        # Arrange.
        @inputValue = '1000;1001'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers8
        # Arrange.
        @inputValue = '1;2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers9
        # Arrange.
        @inputValue = '0\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers10
        # Arrange.
        @inputValue = '1\n0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers11
        # Arrange.
        @inputValue = '0\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers12
        # Arrange.
        @inputValue = '0\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers13
        # Arrange.
        @inputValue = '1\n1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers14
        # Arrange.
        @inputValue = '1\n1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers15
        # Arrange.
        @inputValue = '1000\n1001'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers16
        # Arrange.
        @inputValue = '1\n2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers17
        # Arrange.
        @inputValue = '0\n0;0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers18
        # Arrange.
        @inputValue = '1\n0;0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers19
        # Arrange.
        @inputValue = '0\n1;0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers20
        # Arrange.
        @inputValue = '0\n0;1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers21
        # Arrange.
        @inputValue = '0\n0;1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers22
        # Arrange.
        @inputValue = '1\n0;1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers23
        # Arrange.
        @inputValue = '0\n1;1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers24
        # Arrange.
        @inputValue = '1\n1001;1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers25
        # Arrange.
        @inputValue = '1;2\n3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers26
        # Arrange.
        @inputValue = '1;2\n3;4\n5;6\n7;8\n9;10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration1
        # Arrange.
        @inputValue = '//$\n0$0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration2
        # Arrange.
        @inputValue = '//$\n1$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration3
        # Arrange.
        @inputValue = '//$\n0$1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration4
        # Arrange.
        @inputValue = '//$\n0$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration5
        # Arrange.
        @inputValue = '//$\n1$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration6
        # Arrange.
        @inputValue = '//$\n1$1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration7
        # Arrange.
        @inputValue = '//$\n1001$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration8
        # Arrange.
        @inputValue = '//$\n1$2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration9
        # Arrange.
        @inputValue = '//$\n0$0$0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration10
        # Arrange.
        @inputValue = '//$\n1$0$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration11
        # Arrange.
        @inputValue = '//$\n0$1$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration12
        # Arrange.
        @inputValue = '//$\n0$0$1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration13
        # Arrange.
        @inputValue = '//$\n0$0$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration14
        # Arrange.
        @inputValue = '//$\n1$0$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration15
        # Arrange.
        @inputValue = '//$\n0$1$1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration16
        # Arrange.
        @inputValue = '//$\n1$1001$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration17
        # Arrange.
        @inputValue = '//$\n1$2$3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration18
        # Arrange.
        @inputValue = '//$\n1$2$3$4$5$6$7$8$9$10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration19
        # Arrange.
        @inputValue = '//$$\n0$$0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration20
        # Arrange.
        @inputValue = '//$$\n1$$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration21
        # Arrange.
        @inputValue = '//$$\n0$$1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration22
        # Arrange.
        @inputValue = '//$$\n0$$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration23
        # Arrange.
        @inputValue = '//$$\n1$$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration24
        # Arrange.
        @inputValue = '//$$\n1$$1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration25
        # Arrange.
        @inputValue = '//$$\n1001$$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration26
        # Arrange.
        @inputValue = '//$$\n1$$2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration27
        # Arrange.
        @inputValue = '//$$\n0$$0$$0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration28
        # Arrange.
        @inputValue = '//$$\n1$$0$$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration29
        # Arrange.
        @inputValue = '//$$\n0$$1$$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration30
        # Arrange.
        @inputValue = '//$$\n0$$0$$1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration31
        # Arrange.
        @inputValue = '//$$\n0$$0$$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration32
        # Arrange.
        @inputValue = '//$$\n1$$0$$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration33
        # Arrange.
        @inputValue = '//$$\n0$$1$$1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration34
        # Arrange.
        @inputValue = '//$$\n1$$1001$$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration35
        # Arrange.
        @inputValue = '//$$\n1$$2$$3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration36
        # Arrange.
        @inputValue = '//$$\n1$$2$$3$$4$$5$$6$$7$$8$$9$$10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration37
        # Arrange.
        @inputValue = '//sep\n0sep0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration38
        # Arrange.
        @inputValue = '//sep\n1sep0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration39
        # Arrange.
        @inputValue = '//sep\n0sep1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration40
        # Arrange.
        @inputValue = '//sep\n0sep1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration41
        # Arrange.
        @inputValue = '//sep\n1sep1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration42
        # Arrange.
        @inputValue = '//sep\n1sep1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration43
        # Arrange.
        @inputValue = '//sep\n1001sep1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration44
        # Arrange.
        @inputValue = '//sep\n1sep2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration45
        # Arrange.
        @inputValue = '//sep\n0sep0sep0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration46
        # Arrange.
        @inputValue = '//sep\n1sep0sep0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration47
        # Arrange.
        @inputValue = '//sep\n0sep1sep0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration48
        # Arrange.
        @inputValue = '//sep\n0sep0sep1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration49
        # Arrange.
        @inputValue = '//sep\n0sep0sep1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration50
        # Arrange.
        @inputValue = '//sep\n1sep0sep1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration51
        # Arrange.
        @inputValue = '//sep\n0sep1sep1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration52
        # Arrange.
        @inputValue = '//sep\n1sep1001sep1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration53
        # Arrange.
        @inputValue = '//sep\n1sep2sep3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration54
        # Arrange.
        @inputValue = '//sep\n1sep2sep3sep4sep5sep6sep7sep8sep9sep10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration55
        # Arrange.
        @inputValue = '//\n\n0\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration56
        # Arrange.
        @inputValue = '//\n\n1\n0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration57
        # Arrange.
        @inputValue = '//\n\n0\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration58
        # Arrange.
        @inputValue = '//\n\n0\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration59
        # Arrange.
        @inputValue = '//\n\n1\n1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration60
        # Arrange.
        @inputValue = '//\n\n1\n1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration61
        # Arrange.
        @inputValue = '//\n\n1001\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration62
        # Arrange.
        @inputValue = '//\n\n1\n2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration63
        # Arrange.
        @inputValue = '//\n\n0\n0\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration64
        # Arrange.
        @inputValue = '//\n\n1\n0\n0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration65
        # Arrange.
        @inputValue = '//\n\n0\n1\n0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration66
        # Arrange.
        @inputValue = '//\n\n0\n0\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration67
        # Arrange.
        @inputValue = '//\n\n0\n0\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration68
        # Arrange.
        @inputValue = '//\n\n1\n0\n1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration69
        # Arrange.
        @inputValue = '//\n\n0\n1\n1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration70
        # Arrange.
        @inputValue = '//\n\n1\n1001\n1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration71
        # Arrange.
        @inputValue = '//\n\n1\n2\n3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration72
        # Arrange.
        @inputValue = '//\n\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration73
        # Arrange.
        @inputValue = '//-\n0-0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration74
        # Arrange.
        @inputValue = '//-\n1-0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration75
        # Arrange.
        @inputValue = '//-\n0-1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration76
        # Arrange.
        @inputValue = '//-\n0-1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration77
        # Arrange.
        @inputValue = '//-\n1-1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration78
        # Arrange.
        @inputValue = '//-\n1-1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration79
        # Arrange.
        @inputValue = '//-\n1001-1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration80
        # Arrange.
        @inputValue = '//-\n1-2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration81
        # Arrange.
        @inputValue = '//-\n0-0-0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration82
        # Arrange.
        @inputValue = '//-\n1-0-0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration83
        # Arrange.
        @inputValue = '//-\n0-1-0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration84
        # Arrange.
        @inputValue = '//-\n0-0-1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration85
        # Arrange.
        @inputValue = '//-\n0-0-1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration86
        # Arrange.
        @inputValue = '//-\n1-0-1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration87
        # Arrange.
        @inputValue = '//-\n0-1-1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration88
        # Arrange.
        @inputValue = '//-\n1-1001-1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration89
        # Arrange.
        @inputValue = '//-\n1-2-3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration90
        # Arrange.
        @inputValue = '//-\n1-2-3-4-5-6-7-8-9-10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration91
        # Arrange.
        @inputValue = '//-1\n0-10'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration92
        # Arrange.
        @inputValue = '//-1\n1-10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration93
        # Arrange.
        @inputValue = '//-1\n0-11'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration94
        # Arrange.
        @inputValue = '//-1\n0-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration95
        # Arrange.
        @inputValue = '//-1\n1-11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration96
        # Arrange.
        @inputValue = '//-1\n1-11001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration97
        # Arrange.
        @inputValue = '//-1\n1001-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration98
        # Arrange.
        @inputValue = '//-1\n1-12'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration99
        # Arrange.
        @inputValue = '//-1\n0-10-10'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration100
        # Arrange.
        @inputValue = '//-1\n1-10-10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration101
        # Arrange.
        @inputValue = '//-1\n0-11-10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration102
        # Arrange.
        @inputValue = '//-1\n0-10-11'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration103
        # Arrange.
        @inputValue = '//-1\n0-10-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration104
        # Arrange.
        @inputValue = '//-1\n1-10-11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration105
        # Arrange.
        @inputValue = '//-1\n0-11-11001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration106
        # Arrange.
        @inputValue = '//-1\n1-11001-11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration107
        # Arrange.
        @inputValue = '//-1\n1-12-13'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration108
        # Arrange.
        @inputValue = '//-1\n1-12-13-14-15-16-17-18-19-110'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration109
        # Arrange.
        @inputValue = '//[$]\n0$0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration110
        # Arrange.
        @inputValue = '//[$]\n1$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration111
        # Arrange.
        @inputValue = '//[$]\n0$1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration112
        # Arrange.
        @inputValue = '//[$]\n0$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration113
        # Arrange.
        @inputValue = '//[$]\n1$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration114
        # Arrange.
        @inputValue = '//[$]\n1$1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration115
        # Arrange.
        @inputValue = '//[$]\n1001$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration116
        # Arrange.
        @inputValue = '//[$]\n1$2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration117
        # Arrange.
        @inputValue = '//[$]\n0$0$0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration118
        # Arrange.
        @inputValue = '//[$]\n1$0$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration119
        # Arrange.
        @inputValue = '//[$]\n0$1$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration120
        # Arrange.
        @inputValue = '//[$]\n0$0$1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration121
        # Arrange.
        @inputValue = '//[$]\n0$0$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration122
        # Arrange.
        @inputValue = '//[$]\n1$0$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration123
        # Arrange.
        @inputValue = '//[$]\n0$1$1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration124
        # Arrange.
        @inputValue = '//[$]\n1$1001$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration125
        # Arrange.
        @inputValue = '//[$]\n1$2$3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration126
        # Arrange.
        @inputValue = '//[$]\n1$2$3$4$5$6$7$8$9$10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration127
        # Arrange.
        @inputValue = '//[$$]\n0$$0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration128
        # Arrange.
        @inputValue = '//[$$]\n1$$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration129
        # Arrange.
        @inputValue = '//[$$]\n0$$1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration130
        # Arrange.
        @inputValue = '//[$$]\n0$$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration131
        # Arrange.
        @inputValue = '//[$$]\n1$$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration132
        # Arrange.
        @inputValue = '//[$$]\n1$$1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration133
        # Arrange.
        @inputValue = '//[$$]\n1001$$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration134
        # Arrange.
        @inputValue = '//[$$]\n1$$2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration135
        # Arrange.
        @inputValue = '//[$$]\n0$$0$$0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration136
        # Arrange.
        @inputValue = '//[$$]\n1$$0$$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration137
        # Arrange.
        @inputValue = '//[$$]\n0$$1$$0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration138
        # Arrange.
        @inputValue = '//[$$]\n0$$0$$1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration139
        # Arrange.
        @inputValue = '//[$$]\n0$$0$$1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration140
        # Arrange.
        @inputValue = '//[$$]\n1$$0$$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration141
        # Arrange.
        @inputValue = '//[$$]\n0$$1$$1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration142
        # Arrange.
        @inputValue = '//[$$]\n1$$1001$$1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration143
        # Arrange.
        @inputValue = '//[$$]\n1$$2$$3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration144
        # Arrange.
        @inputValue = '//[$$]\n1$$2$$3$$4$$5$$6$$7$$8$$9$$10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration145
        # Arrange.
        @inputValue = '//[sep]\n0sep0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration146
        # Arrange.
        @inputValue = '//[sep]\n1sep0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration147
        # Arrange.
        @inputValue = '//[sep]\n0sep1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration148
        # Arrange.
        @inputValue = '//[sep]\n0sep1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration149
        # Arrange.
        @inputValue = '//[sep]\n1sep1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration150
        # Arrange.
        @inputValue = '//[sep]\n1sep1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration151
        # Arrange.
        @inputValue = '//[sep]\n1001sep1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration152
        # Arrange.
        @inputValue = '//[sep]\n1sep2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration153
        # Arrange.
        @inputValue = '//[sep]\n0sep0sep0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration154
        # Arrange.
        @inputValue = '//[sep]\n1sep0sep0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration155
        # Arrange.
        @inputValue = '//[sep]\n0sep1sep0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration156
        # Arrange.
        @inputValue = '//[sep]\n0sep0sep1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration157
        # Arrange.
        @inputValue = '//[sep]\n0sep0sep1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration158
        # Arrange.
        @inputValue = '//[sep]\n1sep0sep1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration159
        # Arrange.
        @inputValue = '//[sep]\n0sep1sep1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration160
        # Arrange.
        @inputValue = '//[sep]\n1sep1001sep1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration161
        # Arrange.
        @inputValue = '//[sep]\n1sep2sep3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration162
        # Arrange.
        @inputValue = '//[sep]\n1sep2sep3sep4sep5sep6sep7sep8sep9sep10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration163
        # Arrange.
        @inputValue = '//[\n]\n0\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration164
        # Arrange.
        @inputValue = '//[\n]\n1\n0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration165
        # Arrange.
        @inputValue = '//[\n]\n0\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration166
        # Arrange.
        @inputValue = '//[\n]\n0\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration167
        # Arrange.
        @inputValue = '//[\n]\n1\n1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration168
        # Arrange.
        @inputValue = '//[\n]\n1\n1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration169
        # Arrange.
        @inputValue = '//[\n]\n1001\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration170
        # Arrange.
        @inputValue = '//[\n]\n1\n2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration171
        # Arrange.
        @inputValue = '//[\n]\n0\n0\n0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration172
        # Arrange.
        @inputValue = '//[\n]\n1\n0\n0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration173
        # Arrange.
        @inputValue = '//[\n]\n0\n1\n0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration174
        # Arrange.
        @inputValue = '//[\n]\n0\n0\n1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration175
        # Arrange.
        @inputValue = '//[\n]\n0\n0\n1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration176
        # Arrange.
        @inputValue = '//[\n]\n1\n0\n1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration177
        # Arrange.
        @inputValue = '//[\n]\n0\n1\n1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration178
        # Arrange.
        @inputValue = '//[\n]\n1\n1001\n1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration179
        # Arrange.
        @inputValue = '//[\n]\n1\n2\n3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration180
        # Arrange.
        @inputValue = '//[\n]\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration181
        # Arrange.
        @inputValue = '//[-]\n0-0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration182
        # Arrange.
        @inputValue = '//[-]\n1-0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration183
        # Arrange.
        @inputValue = '//[-]\n0-1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration184
        # Arrange.
        @inputValue = '//[-]\n0-1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration185
        # Arrange.
        @inputValue = '//[-]\n1-1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration186
        # Arrange.
        @inputValue = '//[-]\n1-1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration187
        # Arrange.
        @inputValue = '//[-]\n1001-1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration188
        # Arrange.
        @inputValue = '//[-]\n1-2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration189
        # Arrange.
        @inputValue = '//[-]\n0-0-0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration190
        # Arrange.
        @inputValue = '//[-]\n1-0-0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration191
        # Arrange.
        @inputValue = '//[-]\n0-1-0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration192
        # Arrange.
        @inputValue = '//[-]\n0-0-1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration193
        # Arrange.
        @inputValue = '//[-]\n0-0-1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration194
        # Arrange.
        @inputValue = '//[-]\n1-0-1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration195
        # Arrange.
        @inputValue = '//[-]\n0-1-1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration196
        # Arrange.
        @inputValue = '//[-]\n1-1001-1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration197
        # Arrange.
        @inputValue = '//[-]\n1-2-3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration198
        # Arrange.
        @inputValue = '//[-]\n1-2-3-4-5-6-7-8-9-10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration199
        # Arrange.
        @inputValue = '//[-1]\n0-10'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration200
        # Arrange.
        @inputValue = '//[-1]\n1-10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration201
        # Arrange.
        @inputValue = '//[-1]\n0-11'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration202
        # Arrange.
        @inputValue = '//[-1]\n0-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration203
        # Arrange.
        @inputValue = '//[-1]\n1-11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration204
        # Arrange.
        @inputValue = '//[-1]\n1-11001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration205
        # Arrange.
        @inputValue = '//[-1]\n1001-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration206
        # Arrange.
        @inputValue = '//[-1]\n1-12'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration207
        # Arrange.
        @inputValue = '//[-1]\n0-10-10'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration208
        # Arrange.
        @inputValue = '//[-1]\n1-10-10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration209
        # Arrange.
        @inputValue = '//[-1]\n0-11-10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration210
        # Arrange.
        @inputValue = '//[-1]\n0-10-11'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration211
        # Arrange.
        @inputValue = '//[-1]\n0-10-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration212
        # Arrange.
        @inputValue = '//[-1]\n1-10-11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration213
        # Arrange.
        @inputValue = '//[-1]\n0-11-11001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration214
        # Arrange.
        @inputValue = '//[-1]\n1-11001-11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration215
        # Arrange.
        @inputValue = '//[-1]\n1-12-13'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration216
        # Arrange.
        @inputValue = '//[-1]\n1-12-13-14-15-16-17-18-19-110'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration217
        # Arrange.
        @inputValue = '//[-1][-2]\n0-10'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration218
        # Arrange.
        @inputValue = '//[-1][-2]\n1-10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration219
        # Arrange.
        @inputValue = '//[-1][-2]\n0-11'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration220
        # Arrange.
        @inputValue = '//[-1][-2]\n0-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration221
        # Arrange.
        @inputValue = '//[-1][-2]\n1-11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration222
        # Arrange.
        @inputValue = '//[-1][-2]\n1-11001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration223
        # Arrange.
        @inputValue = '//[-1][-2]\n1001-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration224
        # Arrange.
        @inputValue = '//[-1][-2]\n1-12'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration225
        # Arrange.
        @inputValue = '//[-1][-2]\n0-20'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration226
        # Arrange.
        @inputValue = '//[-1][-2]\n1-20'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration227
        # Arrange.
        @inputValue = '//[-1][-2]\n0-21'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration228
        # Arrange.
        @inputValue = '//[-1][-2]\n0-21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration229
        # Arrange.
        @inputValue = '//[-1][-2]\n1-21000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration230
        # Arrange.
        @inputValue = '//[-1][-2]\n1-21001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration231
        # Arrange.
        @inputValue = '//[-1][-2]\n1001-21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration232
        # Arrange.
        @inputValue = '//[-1][-2]\n1-22'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration233
        # Arrange.
        @inputValue = '//[-1][-2]\n0-10-20'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration234
        # Arrange.
        @inputValue = '//[-1][-2]\n1-10-20'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration235
        # Arrange.
        @inputValue = '//[-1][-2]\n0-11-20'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration236
        # Arrange.
        @inputValue = '//[-1][-2]\n0-10-21'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration237
        # Arrange.
        @inputValue = '//[-1][-2]\n0-10-21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration238
        # Arrange.
        @inputValue = '//[-1][-2]\n1-10-21000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration239
        # Arrange.
        @inputValue = '//[-1][-2]\n0-11-21001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration240
        # Arrange.
        @inputValue = '//[-1][-2]\n1-11001-21000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration241
        # Arrange.
        @inputValue = '//[-1][-2]\n1-12-23'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration242
        # Arrange.
        @inputValue = '//[-1][-2]\n1-12-23-14-25-16-27-18-29-110'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration243
        # Arrange.
        @inputValue = '//[*][%]\n0*0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration244
        # Arrange.
        @inputValue = '//[*][%]\n1*0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration245
        # Arrange.
        @inputValue = '//[*][%]\n0*1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration246
        # Arrange.
        @inputValue = '//[*][%]\n0*1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration247
        # Arrange.
        @inputValue = '//[*][%]\n1*1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration248
        # Arrange.
        @inputValue = '//[*][%]\n1*1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration249
        # Arrange.
        @inputValue = '//[*][%]\n1001*1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration250
        # Arrange.
        @inputValue = '//[*][%]\n1*2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration251
        # Arrange.
        @inputValue = '//[*][%]\n0%0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration252
        # Arrange.
        @inputValue = '//[*][%]\n1%0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration253
        # Arrange.
        @inputValue = '//[*][%]\n0%1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration254
        # Arrange.
        @inputValue = '//[*][%]\n0%1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration255
        # Arrange.
        @inputValue = '//[*][%]\n1%1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration256
        # Arrange.
        @inputValue = '//[*][%]\n1%1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration257
        # Arrange.
        @inputValue = '//[*][%]\n1001%1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration258
        # Arrange.
        @inputValue = '//[*][%]\n1%2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration259
        # Arrange.
        @inputValue = '//[*][%]\n0*0%0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration260
        # Arrange.
        @inputValue = '//[*][%]\n1*0%0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration261
        # Arrange.
        @inputValue = '//[*][%]\n0*1%0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration262
        # Arrange.
        @inputValue = '//[*][%]\n0*0%1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration263
        # Arrange.
        @inputValue = '//[*][%]\n0*0%1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration264
        # Arrange.
        @inputValue = '//[*][%]\n1*0%1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration265
        # Arrange.
        @inputValue = '//[*][%]\n0*1%1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration266
        # Arrange.
        @inputValue = '//[*][%]\n1*1001%1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration267
        # Arrange.
        @inputValue = '//[*][%]\n1*2%3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration268
        # Arrange.
        @inputValue = '//[*][%]\n1*2%3*4%5*6%7*8%9*10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration269
        # Arrange.
        @inputValue = '//[**][%%]\n0**0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration270
        # Arrange.
        @inputValue = '//[**][%%]\n1**0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration271
        # Arrange.
        @inputValue = '//[**][%%]\n0**1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration272
        # Arrange.
        @inputValue = '//[**][%%]\n0**1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration273
        # Arrange.
        @inputValue = '//[**][%%]\n1**1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration274
        # Arrange.
        @inputValue = '//[**][%%]\n1**1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration275
        # Arrange.
        @inputValue = '//[**][%%]\n1001**1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration276
        # Arrange.
        @inputValue = '//[**][%%]\n1**2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration277
        # Arrange.
        @inputValue = '//[**][%%]\n0%%0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration278
        # Arrange.
        @inputValue = '//[**][%%]\n1%%0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration279
        # Arrange.
        @inputValue = '//[**][%%]\n0%%1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration280
        # Arrange.
        @inputValue = '//[**][%%]\n0%%1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration281
        # Arrange.
        @inputValue = '//[**][%%]\n1%%1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration282
        # Arrange.
        @inputValue = '//[**][%%]\n1%%1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration283
        # Arrange.
        @inputValue = '//[**][%%]\n1001%%1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration284
        # Arrange.
        @inputValue = '//[**][%%]\n1%%2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration285
        # Arrange.
        @inputValue = '//[**][%%]\n0**0%%0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration286
        # Arrange.
        @inputValue = '//[**][%%]\n1**0%%0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration287
        # Arrange.
        @inputValue = '//[**][%%]\n0**1%%0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration288
        # Arrange.
        @inputValue = '//[**][%%]\n0**0%%1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration289
        # Arrange.
        @inputValue = '//[**][%%]\n0**0%%1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration290
        # Arrange.
        @inputValue = '//[**][%%]\n1**0%%1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration291
        # Arrange.
        @inputValue = '//[**][%%]\n0**1%%1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration292
        # Arrange.
        @inputValue = '//[**][%%]\n1**1001%%1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration293
        # Arrange.
        @inputValue = '//[**][%%]\n1**2%%3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration294
        # Arrange.
        @inputValue = '//[**][%%]\n1**2%%3**4%%5**6%%7**8%%9**10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration295
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep10'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration296
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration297
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep11'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration298
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration299
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration300
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep11001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration301
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1001sep11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration302
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep12'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration303
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep20'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration304
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep20'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration305
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep21'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration306
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration307
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep21000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration308
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep21001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration309
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1001sep21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration310
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep22'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration311
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep10sep20'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration312
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep10sep20'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration313
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep11sep20'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration314
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep10sep21'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration315
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep10sep21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration316
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep10sep21000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration317
        # Arrange.
        @inputValue = '//[sep1][sep2]\n0sep11sep21001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration318
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep11001sep21000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration319
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep12sep23'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration320
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep12sep23sep14sep25sep16sep27sep18sep29sep110'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration321
        # Arrange.
        @inputValue = '//[[][]]\n0[0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration322
        # Arrange.
        @inputValue = '//[[][]]\n1[0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration323
        # Arrange.
        @inputValue = '//[[][]]\n0[1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration324
        # Arrange.
        @inputValue = '//[[][]]\n0[1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration325
        # Arrange.
        @inputValue = '//[[][]]\n1[1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration326
        # Arrange.
        @inputValue = '//[[][]]\n1[1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration327
        # Arrange.
        @inputValue = '//[[][]]\n1001[1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration328
        # Arrange.
        @inputValue = '//[[][]]\n1[2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration329
        # Arrange.
        @inputValue = '//[[][]]\n0]0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration330
        # Arrange.
        @inputValue = '//[[][]]\n1]0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration331
        # Arrange.
        @inputValue = '//[[][]]\n0]1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration332
        # Arrange.
        @inputValue = '//[[][]]\n0]1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration333
        # Arrange.
        @inputValue = '//[[][]]\n1]1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration334
        # Arrange.
        @inputValue = '//[[][]]\n1]1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration335
        # Arrange.
        @inputValue = '//[[][]]\n1001]1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration336
        # Arrange.
        @inputValue = '//[[][]]\n1]2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration337
        # Arrange.
        @inputValue = '//[[][]]\n0[0]0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration338
        # Arrange.
        @inputValue = '//[[][]]\n1[0]0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration339
        # Arrange.
        @inputValue = '//[[][]]\n0[1]0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration340
        # Arrange.
        @inputValue = '//[[][]]\n0[0]1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration341
        # Arrange.
        @inputValue = '//[[][]]\n0[0]1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration342
        # Arrange.
        @inputValue = '//[[][]]\n1[0]1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration343
        # Arrange.
        @inputValue = '//[[][]]\n0[1]1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration344
        # Arrange.
        @inputValue = '//[[][]]\n1[1001]1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration345
        # Arrange.
        @inputValue = '//[[][]]\n1[2]3'
        @expectedResult = 6

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration346
        # Arrange.
        @inputValue = '//[[][]]\n1[2]3[4]5[6]7[8]9[10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration347
        # Arrange.
        @inputValue = '//[+][!][#]\n0+0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration348
        # Arrange.
        @inputValue = '//[+][!][#]\n1+0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration349
        # Arrange.
        @inputValue = '//[+][!][#]\n0+1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration350
        # Arrange.
        @inputValue = '//[+][!][#]\n0+1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration351
        # Arrange.
        @inputValue = '//[+][!][#]\n1+1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration352
        # Arrange.
        @inputValue = '//[+][!][#]\n1+1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration353
        # Arrange.
        @inputValue = '//[+][!][#]\n1001+1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration354
        # Arrange.
        @inputValue = '//[+][!][#]\n1+2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration355
        # Arrange.
        @inputValue = '//[+][!][#]\n0!0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration356
        # Arrange.
        @inputValue = '//[+][!][#]\n1!0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration357
        # Arrange.
        @inputValue = '//[+][!][#]\n0!1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration358
        # Arrange.
        @inputValue = '//[+][!][#]\n0!1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration359
        # Arrange.
        @inputValue = '//[+][!][#]\n1!1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration360
        # Arrange.
        @inputValue = '//[+][!][#]\n1!1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration361
        # Arrange.
        @inputValue = '//[+][!][#]\n1001!1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration362
        # Arrange.
        @inputValue = '//[+][!][#]\n1!2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration363
        # Arrange.
        @inputValue = '//[+][!][#]\n0#0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration364
        # Arrange.
        @inputValue = '//[+][!][#]\n1#0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration365
        # Arrange.
        @inputValue = '//[+][!][#]\n0#1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration366
        # Arrange.
        @inputValue = '//[+][!][#]\n0#1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration367
        # Arrange.
        @inputValue = '//[+][!][#]\n1#1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration368
        # Arrange.
        @inputValue = '//[+][!][#]\n1#1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration369
        # Arrange.
        @inputValue = '//[+][!][#]\n1001#1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration370
        # Arrange.
        @inputValue = '//[+][!][#]\n1#2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration371
        # Arrange.
        @inputValue = '//[+][!][#]\n0+0!0#0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration372
        # Arrange.
        @inputValue = '//[+][!][#]\n1+0!0#0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration373
        # Arrange.
        @inputValue = '//[+][!][#]\n0+1!0#0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration374
        # Arrange.
        @inputValue = '//[+][!][#]\n0+0!1#0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration375
        # Arrange.
        @inputValue = '//[+][!][#]\n0+0!0#1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration376
        # Arrange.
        @inputValue = '//[+][!][#]\n0+0!1000#0'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration377
        # Arrange.
        @inputValue = '//[+][!][#]\n1+0!1000#0'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration378
        # Arrange.
        @inputValue = '//[+][!][#]\n0+1!1001#0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration379
        # Arrange.
        @inputValue = '//[+][!][#]\n1+1001!1000#0'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration380
        # Arrange.
        @inputValue = '//[+][!][#]\n1+2!3#4'
        @expectedResult = 10

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration381
        # Arrange.
        @inputValue = '//[+][!][#]\n1+2!3#4+5!6#7+8!9#10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration382
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration383
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration384
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration385
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration386
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration387
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration388
        # Arrange.
        @inputValue = '//[++][!!][##]\n1001++1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration389
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration390
        # Arrange.
        @inputValue = '//[++][!!][##]\n0!!0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration391
        # Arrange.
        @inputValue = '//[++][!!][##]\n1!!0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration392
        # Arrange.
        @inputValue = '//[++][!!][##]\n0!!1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration393
        # Arrange.
        @inputValue = '//[++][!!][##]\n0!!1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration394
        # Arrange.
        @inputValue = '//[++][!!][##]\n1!!1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration395
        # Arrange.
        @inputValue = '//[++][!!][##]\n1!!1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration396
        # Arrange.
        @inputValue = '//[++][!!][##]\n1001!!1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration397
        # Arrange.
        @inputValue = '//[++][!!][##]\n1!!2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration398
        # Arrange.
        @inputValue = '//[++][!!][##]\n0##0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration399
        # Arrange.
        @inputValue = '//[++][!!][##]\n1##0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration400
        # Arrange.
        @inputValue = '//[++][!!][##]\n0##1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration401
        # Arrange.
        @inputValue = '//[++][!!][##]\n0##1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration402
        # Arrange.
        @inputValue = '//[++][!!][##]\n1##1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration403
        # Arrange.
        @inputValue = '//[++][!!][##]\n1##1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration404
        # Arrange.
        @inputValue = '//[++][!!][##]\n1001##1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration405
        # Arrange.
        @inputValue = '//[++][!!][##]\n1##2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration406
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++0!!0##0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration407
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++0!!0##0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration408
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++1!!0##0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration409
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++0!!1##0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration410
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++0!!0##1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration411
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++0!!1000##0'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration412
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++0!!1000##0'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration413
        # Arrange.
        @inputValue = '//[++][!!][##]\n0++1!!1001##0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration414
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++1001!!1000##0'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration415
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++2!!3##4'
        @expectedResult = 10

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration416
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++2!!3##4++5!!6##7++8!!9##10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration417
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-10'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration418
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration419
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-11'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration420
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration421
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration422
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-11001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration423
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1001-11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration424
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-12'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration425
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-20'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration426
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-20'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration427
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-21'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration428
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration429
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-21000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration430
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-21001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration431
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1001-21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration432
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-22'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration433
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-30'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration434
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration435
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-31'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration436
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-31000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration437
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-31000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration438
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-31001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration439
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1001-31000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration440
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-32'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration441
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-10-20-30'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration442
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-10-20-30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration443
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-11-20-30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration444
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-10-21-30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration445
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-10-20-31'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration446
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-10-21000-30'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration447
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-10-21000-30'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration448
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n0-11-21001-30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration449
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-11001-21000-30'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration450
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-12-23-34'
        @expectedResult = 10

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration451
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-12-23-34-15-26-37-18-29-310'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration452
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep10'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration453
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep10'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration454
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep11'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration455
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration456
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep11000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration457
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep11001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration458
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1001sep11000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration459
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep12'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration460
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep20'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration461
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep20'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration462
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep21'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration463
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration464
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep21000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration465
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep21001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration466
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1001sep21000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration467
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep22'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration468
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep30'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration469
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration470
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep31'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration471
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep31000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration472
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep31000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration473
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep31001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration474
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1001sep31000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration475
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep32'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration476
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep10sep20sep30'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration477
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep10sep20sep30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration478
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep11sep20sep30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration479
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep10sep21sep30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration480
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep10sep20sep31'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration481
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep10sep21000sep30'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration482
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep10sep21000sep30'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration483
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n0sep11sep21001sep30'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration484
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep11001sep21000sep30'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration485
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep34'
        @expectedResult = 10

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration486
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep34sep15sep26sep37sep18sep29sep310'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration487
        # Arrange.
        @inputValue = '//[?][??][???]\n0?0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration488
        # Arrange.
        @inputValue = '//[?][??][???]\n1?0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration489
        # Arrange.
        @inputValue = '//[?][??][???]\n0?1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration490
        # Arrange.
        @inputValue = '//[?][??][???]\n0?1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration491
        # Arrange.
        @inputValue = '//[?][??][???]\n1?1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration492
        # Arrange.
        @inputValue = '//[?][??][???]\n1?1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration493
        # Arrange.
        @inputValue = '//[?][??][???]\n1001?1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration494
        # Arrange.
        @inputValue = '//[?][??][???]\n1?2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration495
        # Arrange.
        @inputValue = '//[?][??][???]\n0??0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration496
        # Arrange.
        @inputValue = '//[?][??][???]\n1??0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration497
        # Arrange.
        @inputValue = '//[?][??][???]\n0??1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration498
        # Arrange.
        @inputValue = '//[?][??][???]\n0??1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration499
        # Arrange.
        @inputValue = '//[?][??][???]\n1??1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration500
        # Arrange.
        @inputValue = '//[?][??][???]\n1??1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration501
        # Arrange.
        @inputValue = '//[?][??][???]\n1001??1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration502
        # Arrange.
        @inputValue = '//[?][??][???]\n1??2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration503
        # Arrange.
        @inputValue = '//[?][??][???]\n0???0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration504
        # Arrange.
        @inputValue = '//[?][??][???]\n1???0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration505
        # Arrange.
        @inputValue = '//[?][??][???]\n0???1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration506
        # Arrange.
        @inputValue = '//[?][??][???]\n0???1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration507
        # Arrange.
        @inputValue = '//[?][??][???]\n1???1000'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration508
        # Arrange.
        @inputValue = '//[?][??][???]\n1???1001'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration509
        # Arrange.
        @inputValue = '//[?][??][???]\n1001???1000'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration510
        # Arrange.
        @inputValue = '//[?][??][???]\n1???2'
        @expectedResult = 3

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration511
        # Arrange.
        @inputValue = '//[?][??][???]\n0?0??0???0'
        @expectedResult = 0

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration512
        # Arrange.
        @inputValue = '//[?][??][???]\n1?0??0???0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration513
        # Arrange.
        @inputValue = '//[?][??][???]\n0?1??0???0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration514
        # Arrange.
        @inputValue = '//[?][??][???]\n0?0??1???0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration515
        # Arrange.
        @inputValue = '//[?][??][???]\n0?0??0???1'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration516
        # Arrange.
        @inputValue = '//[?][??][???]\n0?0??1000???0'
        @expectedResult = 1000

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration517
        # Arrange.
        @inputValue = '//[?][??][???]\n1?0??1000???0'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration518
        # Arrange.
        @inputValue = '//[?][??][???]\n0?1??1001???0'
        @expectedResult = 1

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration519
        # Arrange.
        @inputValue = '//[?][??][???]\n1?1001??1000???0'
        @expectedResult = 1001

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration520
        # Arrange.
        @inputValue = '//[?][??][???]\n1?2??3???4'
        @expectedResult = 10

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end

    ##
    # The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
    ##
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration521
        # Arrange.
        @inputValue = '//[?][??][???]\n1?2??3???4?5??6???7?8??9???10'
        @expectedResult = 55

        # Act.
        @actualResult = self.act_Add(@inputValue)

        # Assert.
        assert_equal(@expectedResult, @actualResult)
    end
	
    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator1
        # Arrange.
        @inputValue = '1;'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator2
        # Arrange.
        @inputValue = '1;2;'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator3
        # Arrange.
        @inputValue = '1\n'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator4
        # Arrange.
        @inputValue = '1\n2\n'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator5
        # Arrange.
        @inputValue = '12\n'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator6
        # Arrange.
        @inputValue = '1\n2;'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration1
        # Arrange.
        @inputValue = '//$\n1$'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration2
        # Arrange.
        @inputValue = '//$\n1$2$'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration3
        # Arrange.
        @inputValue = '//$$\n1$$'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration4
        # Arrange.
        @inputValue = '//$$\n1$$2$$'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration5
        # Arrange.
        @inputValue = '//sep\n1sep'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration6
        # Arrange.
        @inputValue = '//sep\n1sep2sep'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration7
        # Arrange.
        @inputValue = '//\n\n1\n'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration8
        # Arrange.
        @inputValue = '//\n\n1\n2\n'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration9
        # Arrange.
        @inputValue = '//-\n1-'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration10
        # Arrange.
        @inputValue = '//-\n1-2-'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration11
        # Arrange.
        @inputValue = '//-1\n1-1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration12
        # Arrange.
        @inputValue = '//-1\n1-12-1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration13
        # Arrange.
        @inputValue = '//[$]\n1$'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration14
        # Arrange.
        @inputValue = '//[$]\n1$2$'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration15
        # Arrange.
        @inputValue = '//[$$]\n1$$'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration16
        # Arrange.
        @inputValue = '//[$$]\n1$$2$$'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration17
        # Arrange.
        @inputValue = '//[sep]\n1sep'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration18
        # Arrange.
        @inputValue = '//[sep]\n1sep2sep'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration19
        # Arrange.
        @inputValue = '//[\n]\n1\n'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration20
        # Arrange.
        @inputValue = '//[\n]\n1\n2\n'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration21
        # Arrange.
        @inputValue = '//[-]\n1-'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration22
        # Arrange.
        @inputValue = '//[-]\n1-2-'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration23
        # Arrange.
        @inputValue = '//[-1]\n1-1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration24
        # Arrange.
        @inputValue = '//[-1]\n1-12-1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration25
        # Arrange.
        @inputValue = '//[-1][-2]\n1-1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration26
        # Arrange.
        @inputValue = '//[-1][-2]\n1-2'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration27
        # Arrange.
        @inputValue = '//[-1][-2]\n1-12-2'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration28
        # Arrange.
        @inputValue = '//[-1][-2]\n1-22-1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration29
        # Arrange.
        @inputValue = '//[*][%]\n1*'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration30
        # Arrange.
        @inputValue = '//[*][%]\n1%'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration31
        # Arrange.
        @inputValue = '//[*][%]\n1*2%'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration32
        # Arrange.
        @inputValue = '//[*][%]\n1%2*'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration33
        # Arrange.
        @inputValue = '//[**][%%]\n1**'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration34
        # Arrange.
        @inputValue = '//[**][%%]\n1%%'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration35
        # Arrange.
        @inputValue = '//[**][%%]\n1**2%%'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration36
        # Arrange.
        @inputValue = '//[**][%%]\n1%%2**'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration37
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration38
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep2'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration39
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep12sep2'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration40
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep22sep1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration41
        # Arrange.
        @inputValue = '//[[][]]\n1['
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration42
        # Arrange.
        @inputValue = '//[[][]]\n1]'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration43
        # Arrange.
        @inputValue = '//[[][]]\n1[2]'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration44
        # Arrange.
        @inputValue = '//[[][]]\n1]2['
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration45
        # Arrange.
        @inputValue = '//[+][!][#]\n1+'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration46
        # Arrange.
        @inputValue = '//[+][!][#]\n1!'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration47
        # Arrange.
        @inputValue = '//[+][!][#]\n1#'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration48
        # Arrange.
        @inputValue = '//[+][!][#]\n1+2!3#'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration49
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration50
        # Arrange.
        @inputValue = '//[++][!!][##]\n1!!'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration51
        # Arrange.
        @inputValue = '//[++][!!][##]\n1##'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration52
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++2!!3##'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration53
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration54
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-2'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration55
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-3'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration56
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-12-23-3'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration57
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep1'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration58
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep2'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration59
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep3'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration60
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep3'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration61
        # Arrange.
        @inputValue = '//[?][??][???]\n1?'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration62
        # Arrange.
        @inputValue = '//[?][??][???]\n1??'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration63
        # Arrange.
        @inputValue = '//[?][??][???]\n1???'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input ending with a separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration64
        # Arrange.
        @inputValue = '//[?][??][???]\n1?2??3???'
        @errorMessage = 'Number expected but EOF found.'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber1
        # Arrange.
        @inputValue = '-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber2
        # Arrange.
        @inputValue = '-1;2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber3
        # Arrange.
        @inputValue = '1;-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber4
        # Arrange.
        @inputValue = '-1;-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber5
        # Arrange.
        @inputValue = '-1\n2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber6
        # Arrange.
        @inputValue = '1\n-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber7
        # Arrange.
        @inputValue = '-1\n-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber8
        # Arrange.
        @inputValue = '-1\n-2;-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration1
        # Arrange.
        @inputValue = '//$\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration2
        # Arrange.
        @inputValue = '//$\n-1$2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration3
        # Arrange.
        @inputValue = '//$\n1$-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration4
        # Arrange.
        @inputValue = '//$\n-1$-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration5
        # Arrange.
        @inputValue = '//$$\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration6
        # Arrange.
        @inputValue = '//$$\n-1$$2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration7
        # Arrange.
        @inputValue = '//$$\n1$$-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration8
        # Arrange.
        @inputValue = '//$$\n-1$$-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration9
        # Arrange.
        @inputValue = '//sep\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration10
        # Arrange.
        @inputValue = '//sep\n-1sep2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration11
        # Arrange.
        @inputValue = '//sep\n1sep-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration12
        # Arrange.
        @inputValue = '//sep\n-1sep-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration13
        # Arrange.
        @inputValue = '//\n\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration14
        # Arrange.
        @inputValue = '//\n\n-1\n2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration15
        # Arrange.
        @inputValue = '//\n\n1\n-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration16
        # Arrange.
        @inputValue = '//\n\n-1\n-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration17
        # Arrange.
        @inputValue = '//-1\n-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration18
        # Arrange.
        @inputValue = '//-1\n-2-13'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration19
        # Arrange.
        @inputValue = '//-1\n2-1-3'
        @errorMessage = 'Negatives not allowed : -3'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration20
        # Arrange.
        @inputValue = '//-1\n-2-1-2'
        @errorMessage = 'Negatives not allowed : -2, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration21
        # Arrange.
        @inputValue = '//[$]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration22
        # Arrange.
        @inputValue = '//[$]\n-1$2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration23
        # Arrange.
        @inputValue = '//[$]\n1$-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration24
        # Arrange.
        @inputValue = '//[$]\n-1$-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration25
        # Arrange.
        @inputValue = '//[$$]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration26
        # Arrange.
        @inputValue = '//[$$]\n-1$$2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration27
        # Arrange.
        @inputValue = '//[$$]\n1$$-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration28
        # Arrange.
        @inputValue = '//[$$]\n-1$$-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration29
        # Arrange.
        @inputValue = '//[sep]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration30
        # Arrange.
        @inputValue = '//[sep]\n-1sep2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration31
        # Arrange.
        @inputValue = '//[sep]\n1sep-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration32
        # Arrange.
        @inputValue = '//[sep]\n-1sep-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration33
        # Arrange.
        @inputValue = '//[\n]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration34
        # Arrange.
        @inputValue = '//[\n]\n-1\n2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration35
        # Arrange.
        @inputValue = '//[\n]\n1\n-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration36
        # Arrange.
        @inputValue = '//[\n]\n-1\n-1'
        @errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration37
        # Arrange.
        @inputValue = '//[-1]\n-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration38
        # Arrange.
        @inputValue = '//[-1]\n-2-13'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration39
        # Arrange.
        @inputValue = '//[-1]\n2-1-3'
        @errorMessage = 'Negatives not allowed : -3'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration40
        # Arrange.
        @inputValue = '//[-1]\n-2-1-2'
        @errorMessage = 'Negatives not allowed : -2, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration41
        # Arrange.
        @inputValue = '//[-1][-2]\n-3'
        @errorMessage = 'Negatives not allowed : -3'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration42
        # Arrange.
        @inputValue = '//[-1][-2]\n-3-14'
        @errorMessage = 'Negatives not allowed : -3'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration43
        # Arrange.
        @inputValue = '//[-1][-2]\n-3-24'
        @errorMessage = 'Negatives not allowed : -3'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration44
        # Arrange.
        @inputValue = '//[-1][-2]\n3-1-4'
        @errorMessage = 'Negatives not allowed : -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration45
        # Arrange.
        @inputValue = '//[-1][-2]\n3-2-4'
        @errorMessage = 'Negatives not allowed : -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration46
        # Arrange.
        @inputValue = '//[-1][-2]\n-3-1-4'
        @errorMessage = 'Negatives not allowed : -3, -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration47
        # Arrange.
        @inputValue = '//[-1][-2]\n-3-2-4'
        @errorMessage = 'Negatives not allowed : -3, -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration48
        # Arrange.
        @inputValue = '//[-1][-2]\n-3-1-4-2-3'
        @errorMessage = 'Negatives not allowed : -3, -4, -3'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration49
        # Arrange.
        @inputValue = '//[*][%]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration50
        # Arrange.
        @inputValue = '//[*][%]\n-1*2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration51
        # Arrange.
        @inputValue = '//[*][%]\n-1%2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration52
        # Arrange.
        @inputValue = '//[*][%]\n1*-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration53
        # Arrange.
        @inputValue = '//[*][%]\n1%-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration54
        # Arrange.
        @inputValue = '//[*][%]\n-1*-2'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration55
        # Arrange.
        @inputValue = '//[*][%]\n-1%-2'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration56
        # Arrange.
        @inputValue = '//[*][%]\n-1*-2%-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration57
        # Arrange.
        @inputValue = '//[**][%%]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration58
        # Arrange.
        @inputValue = '//[**][%%]\n-1**2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration59
        # Arrange.
        @inputValue = '//[**][%%]\n-1%%2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration60
        # Arrange.
        @inputValue = '//[**][%%]\n1**-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration61
        # Arrange.
        @inputValue = '//[**][%%]\n1%%-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration62
        # Arrange.
        @inputValue = '//[**][%%]\n-1**-2'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration63
        # Arrange.
        @inputValue = '//[**][%%]\n-1%%-2'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration64
        # Arrange.
        @inputValue = '//[**][%%]\n-1**-2%%-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration65
        # Arrange.
        @inputValue = '//[sep1][sep2]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration66
        # Arrange.
        @inputValue = '//[sep1][sep2]\n-1sep12'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration67
        # Arrange.
        @inputValue = '//[sep1][sep2]\n-1sep22'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration68
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep1-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration69
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep2-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration70
        # Arrange.
        @inputValue = '//[sep1][sep2]\n-1sep1-2'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration71
        # Arrange.
        @inputValue = '//[sep1][sep2]\n-1sep2-2'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration72
        # Arrange.
        @inputValue = '//[sep1][sep2]\n-1sep1-2sep2-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration73
        # Arrange.
        @inputValue = '//[[][]]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration74
        # Arrange.
        @inputValue = '//[[][]]\n-1[2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration75
        # Arrange.
        @inputValue = '//[[][]]\n-1]2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration76
        # Arrange.
        @inputValue = '//[[][]]\n1[-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration77
        # Arrange.
        @inputValue = '//[[][]]\n1]-2'
        @errorMessage = 'Negatives not allowed : -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration78
        # Arrange.
        @inputValue = '//[[][]]\n-1[-2'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration79
        # Arrange.
        @inputValue = '//[[][]]\n-1]-2'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration80
        # Arrange.
        @inputValue = '//[[][]]\n-1[-2]-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration81
        # Arrange.
        @inputValue = '//[+][!][#]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration82
        # Arrange.
        @inputValue = '//[+][!][#]\n-1+2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration83
        # Arrange.
        @inputValue = '//[+][!][#]\n-1!2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration84
        # Arrange.
        @inputValue = '//[+][!][#]\n-1#2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration85
        # Arrange.
        @inputValue = '//[+][!][#]\n-1+-2!3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration86
        # Arrange.
        @inputValue = '//[+][!][#]\n-1!-2#3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration87
        # Arrange.
        @inputValue = '//[+][!][#]\n-1#-2+3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration88
        # Arrange.
        @inputValue = '//[+][!][#]\n-1+-2!-3#-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -3, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration89
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration90
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1++2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration91
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1!!2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration92
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1##2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration93
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1++-2!!3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration94
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1!!-2##3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration95
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1##-2++3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration96
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1++-2!!-3##-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -3, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration97
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4'
        @errorMessage = 'Negatives not allowed : -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration98
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4-15'
        @errorMessage = 'Negatives not allowed : -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration99
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4-25'
        @errorMessage = 'Negatives not allowed : -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration100
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4-35'
        @errorMessage = 'Negatives not allowed : -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration101
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4-1-5-26'
        @errorMessage = 'Negatives not allowed : -4, -5'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration102
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4-2-5-36'
        @errorMessage = 'Negatives not allowed : -4, -5'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration103
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4-3-5-16'
        @errorMessage = 'Negatives not allowed : -4, -5'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration104
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4-1-5-2-6-3-4'
        @errorMessage = 'Negatives not allowed : -4, -5, -6, -4'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration105
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration106
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1sep12'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration107
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1sep22'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration108
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1sep32'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration109
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1sep1-2sep23'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration110
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1sep2-2sep33'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration111
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1sep3-2sep13'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration112
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1sep1-2sep2-3sep3-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -3, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration113
        # Arrange.
        @inputValue = '//[?][??][???]\n-1'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration114
        # Arrange.
        @inputValue = '//[?][??][???]\n-1?2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration115
        # Arrange.
        @inputValue = '//[?][??][???]\n-1??2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration116
        # Arrange.
        @inputValue = '//[?][??][???]\n-1???2'
        @errorMessage = 'Negatives not allowed : -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration117
        # Arrange.
        @inputValue = '//[?][??][???]\n-1?-2??3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration118
        # Arrange.
        @inputValue = '//[?][??][???]\n-1??-2???3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration119
        # Arrange.
        @inputValue = '//[?][??][???]\n-1???-2?3'
        @errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing at least one negative number.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration120
        # Arrange.
        @inputValue = '//[?][??][???]\n-1?-2??-3???-1'
        @errorMessage = 'Negatives not allowed : -1, -2, -3, -1'

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparator
        # Arrange.
        @inputValue = '1$2'
        @errorMessage = "';' or '\\n' expected but '$' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end
	
    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration1
        # Arrange.
        @inputValue = '//$\n1;2'
        @errorMessage = "'$' expected but ';' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration2
        # Arrange.
        @inputValue = '//$$\n1;2'
        @errorMessage = "'$$' expected but ';' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration3
        # Arrange.
        @inputValue = '//sep\n1|2'
        @errorMessage = "'sep' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration4
        # Arrange.
        @inputValue = '//\n\n1|2'
        @errorMessage = "'\\n' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration5
        # Arrange.
        @inputValue = '//-\n1|2'
        @errorMessage = "'-' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration6
        # Arrange.
        @inputValue = '//-1\n1|2'
        @errorMessage = "'-1' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration7
        # Arrange.
        @inputValue = '//[$]\n1;2'
        @errorMessage = "'$' expected but ';' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration8
        # Arrange.
        @inputValue = '//[$$]\n1;2'
        @errorMessage = "'$$' expected but ';' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration9
        # Arrange.
        @inputValue = '//[sep]\n1|2'
        @errorMessage = "'sep' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration10
        # Arrange.
        @inputValue = '//[\n]\n1|2'
        @errorMessage = "'\\n' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration11
        # Arrange.
        @inputValue = '//[-]\n1|2'
        @errorMessage = "'-' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration12
        # Arrange.
        @inputValue = '//[-1]\n1|2'
        @errorMessage = "'-1' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration13
        # Arrange.
        @inputValue = '//[-1][-2]\n1|2'
        @errorMessage = "'-1' or '-2' expected but '|' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration14
        # Arrange.
        @inputValue = '//[*][%]\n1=2'
        @errorMessage = "'*' or '%' expected but '=' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration15
        # Arrange.
        @inputValue = '//[**][%%]\n1=2'
        @errorMessage = "'**' or '%%' expected but '=' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration16
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1del2'
        @errorMessage = "'sep1' or 'sep2' expected but 'del' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration17
        # Arrange.
        @inputValue = '//[[][]]\n1{2'
        @errorMessage = "'[' or ']' expected but '{' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration18
        # Arrange.
        @inputValue = '//[+][!][#]\n1=2'
        @errorMessage = "'+' or '!' or '#' expected but '=' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration19
        # Arrange.
        @inputValue = '//[++][!!][##]\n1=2'
        @errorMessage = "'++' or '!!' or '##' expected but '=' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration20
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1=2'
        @errorMessage = "'-1' or '-2' or '-3' expected but '=' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration21
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1=2'
        @errorMessage = "'sep1' or 'sep2' or 'sep3' expected but '=' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing an unspecified separator.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration22
        # Arrange.
        @inputValue = '//[?][??][???]\n1=2'
        @errorMessage = "'???' or '??' or '?' expected but '=' found at position 1."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end
	
    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext1
        # Arrange.
        @inputValue = ';1;2'
        @errorMessage = "Number expected but ';' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext2
        # Arrange.
        @inputValue = '1;;2'
        @errorMessage = "Number expected but ';' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext3
        # Arrange.
        @inputValue = '\n1\n2'
        @errorMessage = "Number expected but '\\n' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext4
        # Arrange.
        @inputValue = '1\n\n2'
        @errorMessage = "Number expected but '\\n' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext5
        # Arrange.
        @inputValue = ';1\n2'
        @errorMessage = "Number expected but ';' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext6
        # Arrange.
        @inputValue = '\n1;2'
        @errorMessage = "Number expected but '\\n' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext7
        # Arrange.
        @inputValue = '1\n;2'
        @errorMessage = "Number expected but ';' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext8
        # Arrange.
        @inputValue = '1;\n2'
        @errorMessage = "Number expected but '\\n' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration1
        # Arrange.
        @inputValue = '//$\n$1$2'
        @errorMessage = "Number expected but '$' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration2
        # Arrange.
        @inputValue = '//$\n1$$2'
        @errorMessage = "Number expected but '$' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration3
        # Arrange.
        @inputValue = '//$$\n$$1$$2'
        @errorMessage = "Number expected but '$$' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration4
        # Arrange.
        @inputValue = '//$$\n1$$$$2'
        @errorMessage = "Number expected but '$$' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration5
        # Arrange.
        @inputValue = '//sep\nsep1sep2'
        @errorMessage = "Number expected but 'sep' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration6
        # Arrange.
        @inputValue = '//sep\n1sepsep2'
        @errorMessage = "Number expected but 'sep' found at position 4."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration7
        # Arrange.
        @inputValue = '//\n\n\n1\n2'
        @errorMessage = "Number expected but '\\n' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration8
        # Arrange.
        @inputValue = '//\n\n1\n\n2'
        @errorMessage = "Number expected but '\\n' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration9
        # Arrange.
        @inputValue = '//-\n-1-2'
        @errorMessage = "Number expected but '-' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration10
        # Arrange.
        @inputValue = '//-\n1--2'
        @errorMessage = "Number expected but '-' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration11
        # Arrange.
        @inputValue = '//-1\n-11-12'
        @errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration12
        # Arrange.
        @inputValue = '//-1\n1-1-12'
        @errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration13
        # Arrange.
        @inputValue = '//[$]\n$1$2'
        @errorMessage = "Number expected but '$' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration14
        # Arrange.
        @inputValue = '//[$]\n1$$2'
        @errorMessage = "Number expected but '$' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration15
        # Arrange.
        @inputValue = '//[$$]\n$$1$$2'
        @errorMessage = "Number expected but '$$' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration16
        # Arrange.
        @inputValue = '//[$$]\n1$$$$2'
        @errorMessage = "Number expected but '$$' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration17
        # Arrange.
        @inputValue = '//[sep]\nsep1sep2'
        @errorMessage = "Number expected but 'sep' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration18
        # Arrange.
        @inputValue = '//[sep]\n1sepsep2'
        @errorMessage = "Number expected but 'sep' found at position 4."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration19
        # Arrange.
        @inputValue = '//[\n]\n\n1\n2'
        @errorMessage = "Number expected but '\\n' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration20
        # Arrange.
        @inputValue = '//[\n]\n1\n\n2'
        @errorMessage = "Number expected but '\\n' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration21
        # Arrange.
        @inputValue = '//[-]\n-1-2'
        @errorMessage = "Number expected but '-' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration22
        # Arrange.
        @inputValue = '//[-]\n1--2'
        @errorMessage = "Number expected but '-' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration23
        # Arrange.
        @inputValue = '//[-1]\n-11-12'
        @errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration24
        # Arrange.
        @inputValue = '//[-1]\n1-1-12'
        @errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration25
        # Arrange.
        @inputValue = '//[-1][-2]\n-11-12'
        @errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration26
        # Arrange.
        @inputValue = '//[-1][-2]\n1-1-12'
        @errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration27
        # Arrange.
        @inputValue = '//[-1][-2]\n-21-22'
        @errorMessage = "Number expected but '-2' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration28
        # Arrange.
        @inputValue = '//[-1][-2]\n1-2-22'
        @errorMessage = "Number expected but '-2' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration29
        # Arrange.
        @inputValue = '//[-1][-2]\n-11-22'
        @errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration30
        # Arrange.
        @inputValue = '//[-1][-2]\n-21-12'
        @errorMessage = "Number expected but '-2' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration31
        # Arrange.
        @inputValue = '//[-1][-2]\n1-2-12'
        @errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration32
        # Arrange.
        @inputValue = '//[-1][-2]\n1-1-22'
        @errorMessage = "Number expected but '-2' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration33
        # Arrange.
        @inputValue = '//[*][%]\n*1*2'
        @errorMessage = "Number expected but '*' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration34
        # Arrange.
        @inputValue = '//[*][%]\n1**2'
        @errorMessage = "Number expected but '*' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration35
        # Arrange.
        @inputValue = '//[*][%]\n%1%2'
        @errorMessage = "Number expected but '%' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration36
        # Arrange.
        @inputValue = '//[*][%]\n1%%2'
        @errorMessage = "Number expected but '%' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration37
        # Arrange.
        @inputValue = '//[*][%]\n*1%2'
        @errorMessage = "Number expected but '*' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration38
        # Arrange.
        @inputValue = '//[*][%]\n%1*2'
        @errorMessage = "Number expected but '%' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration39
        # Arrange.
        @inputValue = '//[*][%]\n1%*2'
        @errorMessage = "Number expected but '*' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration40
        # Arrange.
        @inputValue = '//[*][%]\n1*%2'
        @errorMessage = "Number expected but '%' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration41
        # Arrange.
        @inputValue = '//[**][%%]\n**1**2'
        @errorMessage = "Number expected but '**' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration42
        # Arrange.
        @inputValue = '//[**][%%]\n1****2'
        @errorMessage = "Number expected but '**' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration43
        # Arrange.
        @inputValue = '//[**][%%]\n%%1%%2'
        @errorMessage = "Number expected but '%%' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration44
        # Arrange.
        @inputValue = '//[**][%%]\n1%%%%2'
        @errorMessage = "Number expected but '%%' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration45
        # Arrange.
        @inputValue = '//[**][%%]\n**1%%2'
        @errorMessage = "Number expected but '**' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration46
        # Arrange.
        @inputValue = '//[**][%%]\n%%1**2'
        @errorMessage = "Number expected but '%%' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration47
        # Arrange.
        @inputValue = '//[**][%%]\n1%%**2'
        @errorMessage = "Number expected but '**' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration48
        # Arrange.
        @inputValue = '//[**][%%]\n1**%%2'
        @errorMessage = "Number expected but '%%' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration49
        # Arrange.
        @inputValue = '//[sep1][sep2]\nsep11sep12'
        @errorMessage = "Number expected but 'sep1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration50
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep1sep12'
        @errorMessage = "Number expected but 'sep1' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration51
        # Arrange.
        @inputValue = '//[sep1][sep2]\nsep21sep22'
        @errorMessage = "Number expected but 'sep2' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration52
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep2sep22'
        @errorMessage = "Number expected but 'sep2' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration53
        # Arrange.
        @inputValue = '//[sep1][sep2]\nsep11sep22'
        @errorMessage = "Number expected but 'sep1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration54
        # Arrange.
        @inputValue = '//[sep1][sep2]\nsep21sep12'
        @errorMessage = "Number expected but 'sep2' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration55
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep2sep12'
        @errorMessage = "Number expected but 'sep1' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration56
        # Arrange.
        @inputValue = '//[sep1][sep2]\n1sep1sep22'
        @errorMessage = "Number expected but 'sep2' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration57
        # Arrange.
        @inputValue = '//[[][]]\n[1[2'
        @errorMessage = "Number expected but '[' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration58
        # Arrange.
        @inputValue = '//[[][]]\n1[[2'
        @errorMessage = "Number expected but '[' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration59
        # Arrange.
        @inputValue = '//[[][]]\n]1]2'
        @errorMessage = "Number expected but ']' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration60
        # Arrange.
        @inputValue = '//[[][]]\n1]]2'
        @errorMessage = "Number expected but ']' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration61
        # Arrange.
        @inputValue = '//[[][]]\n[1]2'
        @errorMessage = "Number expected but '[' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration62
        # Arrange.
        @inputValue = '//[[][]]\n]1[2'
        @errorMessage = "Number expected but ']' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration63
        # Arrange.
        @inputValue = '//[[][]]\n1][2'
        @errorMessage = "Number expected but '[' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration64
        # Arrange.
        @inputValue = '//[[][]]\n1[]2'
        @errorMessage = "Number expected but ']' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration65
        # Arrange.
        @inputValue = '//[+][!][#]\n+1+2'
        @errorMessage = "Number expected but '+' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration66
        # Arrange.
        @inputValue = '//[+][!][#]\n1++2'
        @errorMessage = "Number expected but '+' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration67
        # Arrange.
        @inputValue = '//[+][!][#]\n!1!2'
        @errorMessage = "Number expected but '!' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration68
        # Arrange.
        @inputValue = '//[+][!][#]\n1!!2'
        @errorMessage = "Number expected but '!' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration69
        # Arrange.
        @inputValue = '//[+][!][#]\n#1#2'
        @errorMessage = "Number expected but '#' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration70
        # Arrange.
        @inputValue = '//[+][!][#]\n1##2'
        @errorMessage = "Number expected but '#' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration71
        # Arrange.
        @inputValue = '//[+][!][#]\n+1!2'
        @errorMessage = "Number expected but '+' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration72
        # Arrange.
        @inputValue = '//[+][!][#]\n!1#2'
        @errorMessage = "Number expected but '!' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration73
        # Arrange.
        @inputValue = '//[+][!][#]\n#1+2'
        @errorMessage = "Number expected but '#' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration74
        # Arrange.
        @inputValue = '//[+][!][#]\n1+!2'
        @errorMessage = "Number expected but '!' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration75
        # Arrange.
        @inputValue = '//[+][!][#]\n1!#2'
        @errorMessage = "Number expected but '#' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration76
        # Arrange.
        @inputValue = '//[+][!][#]\n1#+2'
        @errorMessage = "Number expected but '+' found at position 2."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration77
        # Arrange.
        @inputValue = '//[++][!!][##]\n++1++2'
        @errorMessage = "Number expected but '++' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration78
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++++2'
        @errorMessage = "Number expected but '++' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration79
        # Arrange.
        @inputValue = '//[++][!!][##]\n!!1!!2'
        @errorMessage = "Number expected but '!!' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration80
        # Arrange.
        @inputValue = '//[++][!!][##]\n1!!!!2'
        @errorMessage = "Number expected but '!!' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration81
        # Arrange.
        @inputValue = '//[++][!!][##]\n##1##2'
        @errorMessage = "Number expected but '##' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration82
        # Arrange.
        @inputValue = '//[++][!!][##]\n1####2'
        @errorMessage = "Number expected but '##' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration83
        # Arrange.
        @inputValue = '//[++][!!][##]\n++1!!2'
        @errorMessage = "Number expected but '++' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration84
        # Arrange.
        @inputValue = '//[++][!!][##]\n!!1##2'
        @errorMessage = "Number expected but '!!' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration85
        # Arrange.
        @inputValue = '//[++][!!][##]\n##1++2'
        @errorMessage = "Number expected but '##' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration86
        # Arrange.
        @inputValue = '//[++][!!][##]\n1++!!2'
        @errorMessage = "Number expected but '!!' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration87
        # Arrange.
        @inputValue = '//[++][!!][##]\n1!!##2'
        @errorMessage = "Number expected but '##' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration88
        # Arrange.
        @inputValue = '//[++][!!][##]\n1##++2'
        @errorMessage = "Number expected but '++' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration89
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-11-12'
        @errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration90
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-1-12'
        @errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration91
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-21-22'
        @errorMessage = "Number expected but '-2' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration92
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-2-22'
        @errorMessage = "Number expected but '-2' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration93
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-31-32'
        @errorMessage = "Number expected but '-3' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration94
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-3-32'
        @errorMessage = "Number expected but '-3' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration95
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-11-22'
        @errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration96
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-21-32'
        @errorMessage = "Number expected but '-2' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration97
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-31-12'
        @errorMessage = "Number expected but '-3' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration98
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-1-22'
        @errorMessage = "Number expected but '-2' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration99
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-2-32'
        @errorMessage = "Number expected but '-3' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration100
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n1-3-12'
        @errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration101
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\nsep11sep12'
        @errorMessage = "Number expected but 'sep1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration102
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep1sep12'
        @errorMessage = "Number expected but 'sep1' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration103
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\nsep21sep22'
        @errorMessage = "Number expected but 'sep2' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration104
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep2sep22'
        @errorMessage = "Number expected but 'sep2' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration105
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\nsep31sep32'
        @errorMessage = "Number expected but 'sep3' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration106
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep3sep32'
        @errorMessage = "Number expected but 'sep3' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration107
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\nsep11sep22'
        @errorMessage = "Number expected but 'sep1' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration108
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\nsep21sep32'
        @errorMessage = "Number expected but 'sep2' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration109
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\nsep31sep12'
        @errorMessage = "Number expected but 'sep3' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration110
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep1sep22'
        @errorMessage = "Number expected but 'sep2' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration111
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep2sep32'
        @errorMessage = "Number expected but 'sep3' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration112
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n1sep3sep12'
        @errorMessage = "Number expected but 'sep1' found at position 5."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration113
        # Arrange.
        @inputValue = '//[?][??][???]\n?1?2'
        @errorMessage = "Number expected but '?' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration114
        # Arrange.
        @inputValue = '//[?][??][???]\n??1??2'
        @errorMessage = "Number expected but '??' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration115
        # Arrange.
        @inputValue = '//[?][??][???]\n1????2'
        @errorMessage = "Number expected but '?' found at position 4."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration116
        # Arrange.
        @inputValue = '//[?][??][???]\n???1???2'
        @errorMessage = "Number expected but '???' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration117
        # Arrange.
        @inputValue = '//[?][??][???]\n1??????2'
        @errorMessage = "Number expected but '???' found at position 4."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration118
        # Arrange.
        @inputValue = '//[?][??][???]\n?1??2'
        @errorMessage = "Number expected but '?' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration119
        # Arrange.
        @inputValue = '//[?][??][???]\n??1???2'
        @errorMessage = "Number expected but '??' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration120
        # Arrange.
        @inputValue = '//[?][??][???]\n???1?2'
        @errorMessage = "Number expected but '???' found at position 0."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration121
        # Arrange.
        @inputValue = '//[?][??][???]\n1?????2'
        @errorMessage = "Number expected but '??' found at position 4."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration122
        # Arrange.
        @inputValue = '//[?][??][???]\n1????2'
        @errorMessage = "Number expected but '?' found at position 4."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrors
        # Arrange.
        @inputValue = '-1\n;|2;'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "';' or '\\n' expected but '|' found at position 5.\\n"
        @errorMessage += "Number expected but ';' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration1
        # Arrange.
        @inputValue = '//$\n-1$$|2$'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'$' expected but '|' found at position 4.\\n"
        @errorMessage += "Number expected but '$' found at position 3.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration2
        # Arrange.
        @inputValue = '//$$\n-1$$$$|2$$'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'$$' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '$$' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration3
        # Arrange.
        @inputValue = '//sep\n-1sepsep|2sep'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'sep' expected but '|' found at position 8.\\n"
        @errorMessage += "Number expected but 'sep' found at position 5.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration4
        # Arrange.
        @inputValue = '//\n\n-1\n\n|2\n'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'\\n' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '\\n' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."
		
        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration5
        # Arrange.
        @inputValue = '//-1\n-2-1-1|2-1'
        @errorMessage = "Negatives not allowed : -2\\n"
        @errorMessage += "'-1' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '-1' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration6
        # Arrange.
        @inputValue = '//[$]\n-1$$|2$'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'$' expected but '|' found at position 4.\\n"
        @errorMessage += "Number expected but '$' found at position 3.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration7
        # Arrange.
        @inputValue = '//[$$]\n-1$$$$|2$$'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'$$' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '$$' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration8
        # Arrange.
        @inputValue = '//[sep]\n-1sepsep|2sep'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'sep' expected but '|' found at position 8.\\n"
        @errorMessage += "Number expected but 'sep' found at position 5.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration9
        # Arrange.
        @inputValue = '//[\n]\n-1\n\n|2\n'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'\\n' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '\\n' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration10
        # Arrange.
        @inputValue = '//[-1]\n-2-1-1|2-1'
        @errorMessage = "Negatives not allowed : -2\\n"
        @errorMessage += "'-1' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '-1' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration11
        # Arrange.
        @inputValue = '//[-1][-2]\n-3-2-1|2-2'
        @errorMessage = "Negatives not allowed : -3\\n"
        @errorMessage += "'-1' or '-2' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '-1' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration12
        # Arrange.
        @inputValue = '//[*][%]\n-1%*|2%'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'*' or '%' expected but '|' found at position 4.\\n"
        @errorMessage += "Number expected but '*' found at position 3.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration13
        # Arrange.
        @inputValue = '//[**][%%]\n-1%%**|2%%'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'**' or '%%' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '**' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration14
        # Arrange.
        @inputValue = '//[sep1][sep2]\n-1sep2sep1|2sep2'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'sep1' or 'sep2' expected but '|' found at position 10.\\n"
        @errorMessage += "Number expected but 'sep1' found at position 6.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration15
        # Arrange.
        @inputValue = '//[[][]]\n-1][|2]'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'[' or ']' expected but '|' found at position 4.\\n"
        @errorMessage += "Number expected but '[' found at position 3.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration16
        # Arrange.
        @inputValue = '//[+][!][#]\n-1#!|2+'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'+' or '!' or '#' expected but '|' found at position 4.\\n"
        @errorMessage += "Number expected but '!' found at position 3.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration17
        # Arrange.
        @inputValue = '//[++][!!][##]\n-1##!!|2++'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'++' or '!!' or '##' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '!!' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration18
        # Arrange.
        @inputValue = '//[-1][-2][-3]\n-4-3-2|2-1'
        @errorMessage = "Negatives not allowed : -4\\n"
        @errorMessage += "'-1' or '-2' or '-3' expected but '|' found at position 6.\\n"
        @errorMessage += "Number expected but '-2' found at position 4.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration19
        # Arrange.
        @inputValue = '//[sep1][sep2][sep3]\n-1sep3sep2|2sep1'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'sep1' or 'sep2' or 'sep3' expected but '|' found at position 10.\\n"
        @errorMessage += "Number expected but 'sep2' found at position 6.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # The Add method should throw an exception when called with an input containing multiple errors.
    ##
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration20
        # Arrange.
        @inputValue = '//[?][??][???]\n-1?????|2?'
        @errorMessage = "Negatives not allowed : -1\\n"
        @errorMessage += "'???' or '??' or '?' expected but '|' found at position 7.\\n"
        @errorMessage += "Number expected but '??' found at position 5.\\n"
        @errorMessage += "Number expected but EOF found."

        # Act.
        @error = assert_raises Exception do
            self.act_Add(@inputValue)
        end

        # Assert.
        assert_equal(@errorMessage, @error.message)
    end

    ##
    # Invokes the Add method with the provided test input.
    ##
    def act_Add(input)
        @stringCalculator = StringCalculator.new()
        
        return @stringCalculator.add(input)
    end
end
