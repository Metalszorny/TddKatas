import unittest
from src.Common.StringCalculator import StringCalculator


"""
Unit tests for the string calculator class.
"""
class StringCalculatorTests(unittest.TestCase):
    """
    Sets up test dependencies.
    """
    def setUp(self):
        pass

    """
    Tears down test dependencies.
    """
    def tearDown(self):
        pass

    """
    The Add method should return 0 when called with none.
    """
    def test_Add_Should_ReturnZero_When_CalledWithNone(self):
        # Arrange.
        inputValue = None
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with empty string.
    """
    def test_Add_Should_ReturnZero_When_CalledWithEmptyString(self):
        # Arrange.
        inputValue = ''
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with whitespace.
    """
    def test_Add_Should_ReturnZero_When_CalledWithWhitespace(self):
        # Arrange.
        inputValue = ' '
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration1(self):
        # Arrange.
        inputValue = '//$\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration2(self):
        # Arrange.
        inputValue = '//$$\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration3(self):
        # Arrange.
        inputValue = '//sep\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration4(self):
        # Arrange.
        inputValue = '//\n\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration5(self):
        # Arrange.
        inputValue = '//-\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration6(self):
        # Arrange.
        inputValue = '//-1\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration7(self):
        # Arrange.
        inputValue = '//[$]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration8(self):
        # Arrange.
        inputValue = '//[$$]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration9(self):
        # Arrange.
        inputValue = '//[sep]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration10(self):
        # Arrange.
        inputValue = '//[\n]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration11(self):
        # Arrange.
        inputValue = '//[-]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration12(self):
        # Arrange.
        inputValue = '//[-1]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration13(self):
        # Arrange.
        inputValue = '//[-1][-2]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration14(self):
        # Arrange.
        inputValue = '//[*][%]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration15(self):
        # Arrange.
        inputValue = '//[**][%%]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration16(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration17(self):
        # Arrange.
        inputValue = '//[[][]]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration18(self):
        # Arrange.
        inputValue = '//[+][!][#]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration19(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration20(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration21(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return 0 when called with custom separator declaration.
    """
    def test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration22(self):
        # Arrange.
        inputValue = '//[?][??][???]\n'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleInteger1(self):
        # Arrange.
        inputValue = '0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleInteger2(self):
        # Arrange.
        inputValue = '1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleInteger3(self):
        # Arrange.
        inputValue = '1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleInteger4(self):
        # Arrange.
        inputValue = '1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration1(self):
        # Arrange.
        inputValue = '//$\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration2(self):
        # Arrange.
        inputValue = '//$\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration3(self):
        # Arrange.
        inputValue = '//$\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration4(self):
        # Arrange.
        inputValue = '//$\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration5(self):
        # Arrange.
        inputValue = '//$$\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration6(self):
        # Arrange.
        inputValue = '//$$\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration7(self):
        # Arrange.
        inputValue = '//$$\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration8(self):
        # Arrange.
        inputValue = '//$$\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration9(self):
        # Arrange.
        inputValue = '//sep\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration10(self):
        # Arrange.
        inputValue = '//sep\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration11(self):
        # Arrange.
        inputValue = '//sep\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration12(self):
        # Arrange.
        inputValue = '//sep\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration13(self):
        # Arrange.
        inputValue = '//\n\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration14(self):
        # Arrange.
        inputValue = '//\n\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
    The Add method should return the input when called with a single integer number.
    """
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration15(self):
        # Arrange.
        inputValue = '//\n\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration16(self):
        # Arrange.
        inputValue = '//\n\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration17(self):
        # Arrange.
        inputValue = '//-\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration18(self):
        # Arrange.
        inputValue = '//-\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration19(self):
        # Arrange.
        inputValue = '//-\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration20(self):
        # Arrange.
        inputValue = '//-\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration21(self):
        # Arrange.
        inputValue = '//-1\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration22(self):
        # Arrange.
        inputValue = '//-1\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration23(self):
        # Arrange.
        inputValue = '//-1\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration24(self):
        # Arrange.
        inputValue = '//-1\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration25(self):
        # Arrange.
        inputValue = '//[$]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration26(self):
        # Arrange.
        inputValue = '//[$]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration27(self):
        # Arrange.
        inputValue = '//[$]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration28(self):
        # Arrange.
        inputValue = '//[$]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration29(self):
        # Arrange.
        inputValue = '//[$$]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration30(self):
        # Arrange.
        inputValue = '//[$$]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration31(self):
        # Arrange.
        inputValue = '//[$$]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration32(self):
        # Arrange.
        inputValue = '//[$$]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration33(self):
        # Arrange.
        inputValue = '//[sep]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration34(self):
        # Arrange.
        inputValue = '//[sep]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration35(self):
        # Arrange.
        inputValue = '//[sep]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration36(self):
        # Arrange.
        inputValue = '//[sep]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration37(self):
        # Arrange.
        inputValue = '//[\n]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration38(self):
        # Arrange.
        inputValue = '//[\n]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration39(self):
        # Arrange.
        inputValue = '//[\n]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration40(self):
        # Arrange.
        inputValue = '//[\n]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration41(self):
        # Arrange.
        inputValue = '//[-]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration42(self):
        # Arrange.
        inputValue = '//[-]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration43(self):
        # Arrange.
        inputValue = '//[-]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration44(self):
        # Arrange.
        inputValue = '//[-]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration45(self):
        # Arrange.
        inputValue = '//[-1]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration46(self):
        # Arrange.
        inputValue = '//[-1]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration47(self):
        # Arrange.
        inputValue = '//[-1]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration48(self):
        # Arrange.
        inputValue = '//[-1]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration49(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration50(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration51(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration52(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration53(self):
        # Arrange.
        inputValue = '//[*][%]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration54(self):
        # Arrange.
        inputValue = '//[*][%]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration55(self):
        # Arrange.
        inputValue = '//[*][%]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration56(self):
        # Arrange.
        inputValue = '//[*][%]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration57(self):
        # Arrange.
        inputValue = '//[**][%%]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration58(self):
        # Arrange.
        inputValue = '//[**][%%]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration59(self):
        # Arrange.
        inputValue = '//[**][%%]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration60(self):
        # Arrange.
        inputValue = '//[**][%%]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration61(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration62(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration63(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration64(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration65(self):
        # Arrange.
        inputValue = '//[[][]]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration66(self):
        # Arrange.
        inputValue = '//[[][]]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration67(self):
        # Arrange.
        inputValue = '//[[][]]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration68(self):
        # Arrange.
        inputValue = '//[[][]]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration69(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration70(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration71(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration72(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration73(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration74(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration75(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration76(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration77(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration78(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration79(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration80(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration81(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration82(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration83(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration84(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration85(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration86(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration87(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the input when called with a single integer number.
	"""
    def test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration88(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1001'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers1(self):
        # Arrange.
        inputValue = '0;0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers2(self):
        # Arrange.
        inputValue = '1;0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers3(self):
        # Arrange.
        inputValue = '0;1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers4(self):
        # Arrange.
        inputValue = '0;1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers5(self):
        # Arrange.
        inputValue = '1;1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers6(self):
        # Arrange.
        inputValue = '1;1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers7(self):
        # Arrange.
        inputValue = '1000;1001'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers8(self):
        # Arrange.
        inputValue = '1;2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers9(self):
        # Arrange.
        inputValue = '0\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers10(self):
        # Arrange.
        inputValue = '1\n0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers11(self):
        # Arrange.
        inputValue = '0\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers12(self):
        # Arrange.
        inputValue = '0\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers13(self):
        # Arrange.
        inputValue = '1\n1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers14(self):
        # Arrange.
        inputValue = '1\n1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers15(self):
        # Arrange.
        inputValue = '1000\n1001'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers16(self):
        # Arrange.
        inputValue = '1\n2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers17(self):
        # Arrange.
        inputValue = '0\n0;0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers18(self):
        # Arrange.
        inputValue = '1\n0;0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers19(self):
        # Arrange.
        inputValue = '0\n1;0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers20(self):
        # Arrange.
        inputValue = '0\n0;1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers21(self):
        # Arrange.
        inputValue = '0\n0;1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers22(self):
        # Arrange.
        inputValue = '1\n0;1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers23(self):
        # Arrange.
        inputValue = '0\n1;1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers24(self):
        # Arrange.
        inputValue = '1\n1001;1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers25(self):
        # Arrange.
        inputValue = '1;2\n3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers26(self):
        # Arrange.
        inputValue = '1;2\n3;4\n5;6\n7;8\n9;10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration1(self):
        # Arrange.
        inputValue = '//$\n0$0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration2(self):
        # Arrange.
        inputValue = '//$\n1$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration3(self):
        # Arrange.
        inputValue = '//$\n0$1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration4(self):
        # Arrange.
        inputValue = '//$\n0$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration5(self):
        # Arrange.
        inputValue = '//$\n1$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration6(self):
        # Arrange.
        inputValue = '//$\n1$1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration7(self):
        # Arrange.
        inputValue = '//$\n1001$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration8(self):
        # Arrange.
        inputValue = '//$\n1$2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration9(self):
        # Arrange.
        inputValue = '//$\n0$0$0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration10(self):
        # Arrange.
        inputValue = '//$\n1$0$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration11(self):
        # Arrange.
        inputValue = '//$\n0$1$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration12(self):
        # Arrange.
        inputValue = '//$\n0$0$1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration13(self):
        # Arrange.
        inputValue = '//$\n0$0$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration14(self):
        # Arrange.
        inputValue = '//$\n1$0$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration15(self):
        # Arrange.
        inputValue = '//$\n0$1$1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration16(self):
        # Arrange.
        inputValue = '//$\n1$1001$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration17(self):
        # Arrange.
        inputValue = '//$\n1$2$3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration18(self):
        # Arrange.
        inputValue = '//$\n1$2$3$4$5$6$7$8$9$10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration19(self):
        # Arrange.
        inputValue = '//$$\n0$$0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration20(self):
        # Arrange.
        inputValue = '//$$\n1$$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration21(self):
        # Arrange.
        inputValue = '//$$\n0$$1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration22(self):
        # Arrange.
        inputValue = '//$$\n0$$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration23(self):
        # Arrange.
        inputValue = '//$$\n1$$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration24(self):
        # Arrange.
        inputValue = '//$$\n1$$1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration25(self):
        # Arrange.
        inputValue = '//$$\n1001$$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration26(self):
        # Arrange.
        inputValue = '//$$\n1$$2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration27(self):
        # Arrange.
        inputValue = '//$$\n0$$0$$0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration28(self):
        # Arrange.
        inputValue = '//$$\n1$$0$$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration29(self):
        # Arrange.
        inputValue = '//$$\n0$$1$$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration30(self):
        # Arrange.
        inputValue = '//$$\n0$$0$$1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration31(self):
        # Arrange.
        inputValue = '//$$\n0$$0$$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration32(self):
        # Arrange.
        inputValue = '//$$\n1$$0$$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration33(self):
        # Arrange.
        inputValue = '//$$\n0$$1$$1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration34(self):
        # Arrange.
        inputValue = '//$$\n1$$1001$$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration35(self):
        # Arrange.
        inputValue = '//$$\n1$$2$$3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration36(self):
        # Arrange.
        inputValue = '//$$\n1$$2$$3$$4$$5$$6$$7$$8$$9$$10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration37(self):
        # Arrange.
        inputValue = '//sep\n0sep0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration38(self):
        # Arrange.
        inputValue = '//sep\n1sep0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration39(self):
        # Arrange.
        inputValue = '//sep\n0sep1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration40(self):
        # Arrange.
        inputValue = '//sep\n0sep1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration41(self):
        # Arrange.
        inputValue = '//sep\n1sep1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration42(self):
        # Arrange.
        inputValue = '//sep\n1sep1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration43(self):
        # Arrange.
        inputValue = '//sep\n1001sep1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration44(self):
        # Arrange.
        inputValue = '//sep\n1sep2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration45(self):
        # Arrange.
        inputValue = '//sep\n0sep0sep0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration46(self):
        # Arrange.
        inputValue = '//sep\n1sep0sep0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration47(self):
        # Arrange.
        inputValue = '//sep\n0sep1sep0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration48(self):
        # Arrange.
        inputValue = '//sep\n0sep0sep1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration49(self):
        # Arrange.
        inputValue = '//sep\n0sep0sep1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration50(self):
        # Arrange.
        inputValue = '//sep\n1sep0sep1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration51(self):
        # Arrange.
        inputValue = '//sep\n0sep1sep1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration52(self):
        # Arrange.
        inputValue = '//sep\n1sep1001sep1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration53(self):
        # Arrange.
        inputValue = '//sep\n1sep2sep3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration54(self):
        # Arrange.
        inputValue = '//sep\n1sep2sep3sep4sep5sep6sep7sep8sep9sep10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration55(self):
        # Arrange.
        inputValue = '//\n\n0\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration56(self):
        # Arrange.
        inputValue = '//\n\n1\n0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration57(self):
        # Arrange.
        inputValue = '//\n\n0\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration58(self):
        # Arrange.
        inputValue = '//\n\n0\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration59(self):
        # Arrange.
        inputValue = '//\n\n1\n1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration60(self):
        # Arrange.
        inputValue = '//\n\n1\n1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration61(self):
        # Arrange.
        inputValue = '//\n\n1001\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration62(self):
        # Arrange.
        inputValue = '//\n\n1\n2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration63(self):
        # Arrange.
        inputValue = '//\n\n0\n0\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration64(self):
        # Arrange.
        inputValue = '//\n\n1\n0\n0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration65(self):
        # Arrange.
        inputValue = '//\n\n0\n1\n0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration66(self):
        # Arrange.
        inputValue = '//\n\n0\n0\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration67(self):
        # Arrange.
        inputValue = '//\n\n0\n0\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration68(self):
        # Arrange.
        inputValue = '//\n\n1\n0\n1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration69(self):
        # Arrange.
        inputValue = '//\n\n0\n1\n1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration70(self):
        # Arrange.
        inputValue = '//\n\n1\n1001\n1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration71(self):
        # Arrange.
        inputValue = '//\n\n1\n2\n3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration72(self):
        # Arrange.
        inputValue = '//\n\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration73(self):
        # Arrange.
        inputValue = '//-\n0-0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration74(self):
        # Arrange.
        inputValue = '//-\n1-0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration75(self):
        # Arrange.
        inputValue = '//-\n0-1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration76(self):
        # Arrange.
        inputValue = '//-\n0-1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration77(self):
        # Arrange.
        inputValue = '//-\n1-1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration78(self):
        # Arrange.
        inputValue = '//-\n1-1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration79(self):
        # Arrange.
        inputValue = '//-\n1001-1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration80(self):
        # Arrange.
        inputValue = '//-\n1-2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration81(self):
        # Arrange.
        inputValue = '//-\n0-0-0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration82(self):
        # Arrange.
        inputValue = '//-\n1-0-0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration83(self):
        # Arrange.
        inputValue = '//-\n0-1-0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration84(self):
        # Arrange.
        inputValue = '//-\n0-0-1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration85(self):
        # Arrange.
        inputValue = '//-\n0-0-1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration86(self):
        # Arrange.
        inputValue = '//-\n1-0-1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration87(self):
        # Arrange.
        inputValue = '//-\n0-1-1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration88(self):
        # Arrange.
        inputValue = '//-\n1-1001-1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration89(self):
        # Arrange.
        inputValue = '//-\n1-2-3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration90(self):
        # Arrange.
        inputValue = '//-\n1-2-3-4-5-6-7-8-9-10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration91(self):
        # Arrange.
        inputValue = '//-1\n0-10'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration92(self):
        # Arrange.
        inputValue = '//-1\n1-10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration93(self):
        # Arrange.
        inputValue = '//-1\n0-11'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration94(self):
        # Arrange.
        inputValue = '//-1\n0-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration95(self):
        # Arrange.
        inputValue = '//-1\n1-11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration96(self):
        # Arrange.
        inputValue = '//-1\n1-11001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration97(self):
        # Arrange.
        inputValue = '//-1\n1001-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration98(self):
        # Arrange.
        inputValue = '//-1\n1-12'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration99(self):
        # Arrange.
        inputValue = '//-1\n0-10-10'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration100(self):
        # Arrange.
        inputValue = '//-1\n1-10-10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration101(self):
        # Arrange.
        inputValue = '//-1\n0-11-10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration102(self):
        # Arrange.
        inputValue = '//-1\n0-10-11'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration103(self):
        # Arrange.
        inputValue = '//-1\n0-10-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration104(self):
        # Arrange.
        inputValue = '//-1\n1-10-11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration105(self):
        # Arrange.
        inputValue = '//-1\n0-11-11001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration106(self):
        # Arrange.
        inputValue = '//-1\n1-11001-11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration107(self):
        # Arrange.
        inputValue = '//-1\n1-12-13'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration108(self):
        # Arrange.
        inputValue = '//-1\n1-12-13-14-15-16-17-18-19-110'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration109(self):
        # Arrange.
        inputValue = '//[$]\n0$0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration110(self):
        # Arrange.
        inputValue = '//[$]\n1$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration111(self):
        # Arrange.
        inputValue = '//[$]\n0$1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration112(self):
        # Arrange.
        inputValue = '//[$]\n0$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration113(self):
        # Arrange.
        inputValue = '//[$]\n1$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration114(self):
        # Arrange.
        inputValue = '//[$]\n1$1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration115(self):
        # Arrange.
        inputValue = '//[$]\n1001$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration116(self):
        # Arrange.
        inputValue = '//[$]\n1$2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration117(self):
        # Arrange.
        inputValue = '//[$]\n0$0$0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration118(self):
        # Arrange.
        inputValue = '//[$]\n1$0$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration119(self):
        # Arrange.
        inputValue = '//[$]\n0$1$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration120(self):
        # Arrange.
        inputValue = '//[$]\n0$0$1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration121(self):
        # Arrange.
        inputValue = '//[$]\n0$0$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration122(self):
        # Arrange.
        inputValue = '//[$]\n1$0$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration123(self):
        # Arrange.
        inputValue = '//[$]\n0$1$1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration124(self):
        # Arrange.
        inputValue = '//[$]\n1$1001$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration125(self):
        # Arrange.
        inputValue = '//[$]\n1$2$3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration126(self):
        # Arrange.
        inputValue = '//[$]\n1$2$3$4$5$6$7$8$9$10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration127(self):
        # Arrange.
        inputValue = '//[$$]\n0$$0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration128(self):
        # Arrange.
        inputValue = '//[$$]\n1$$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration129(self):
        # Arrange.
        inputValue = '//[$$]\n0$$1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration130(self):
        # Arrange.
        inputValue = '//[$$]\n0$$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration131(self):
        # Arrange.
        inputValue = '//[$$]\n1$$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration132(self):
        # Arrange.
        inputValue = '//[$$]\n1$$1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration133(self):
        # Arrange.
        inputValue = '//[$$]\n1001$$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration134(self):
        # Arrange.
        inputValue = '//[$$]\n1$$2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration135(self):
        # Arrange.
        inputValue = '//[$$]\n0$$0$$0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration136(self):
        # Arrange.
        inputValue = '//[$$]\n1$$0$$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration137(self):
        # Arrange.
        inputValue = '//[$$]\n0$$1$$0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration138(self):
        # Arrange.
        inputValue = '//[$$]\n0$$0$$1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration139(self):
        # Arrange.
        inputValue = '//[$$]\n0$$0$$1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration140(self):
        # Arrange.
        inputValue = '//[$$]\n1$$0$$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration141(self):
        # Arrange.
        inputValue = '//[$$]\n0$$1$$1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration142(self):
        # Arrange.
        inputValue = '//[$$]\n1$$1001$$1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration143(self):
        # Arrange.
        inputValue = '//[$$]\n1$$2$$3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration144(self):
        # Arrange.
        inputValue = '//[$$]\n1$$2$$3$$4$$5$$6$$7$$8$$9$$10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration145(self):
        # Arrange.
        inputValue = '//[sep]\n0sep0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration146(self):
        # Arrange.
        inputValue = '//[sep]\n1sep0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration147(self):
        # Arrange.
        inputValue = '//[sep]\n0sep1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration148(self):
        # Arrange.
        inputValue = '//[sep]\n0sep1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration149(self):
        # Arrange.
        inputValue = '//[sep]\n1sep1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration150(self):
        # Arrange.
        inputValue = '//[sep]\n1sep1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration151(self):
        # Arrange.
        inputValue = '//[sep]\n1001sep1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration152(self):
        # Arrange.
        inputValue = '//[sep]\n1sep2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration153(self):
        # Arrange.
        inputValue = '//[sep]\n0sep0sep0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration154(self):
        # Arrange.
        inputValue = '//[sep]\n1sep0sep0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration155(self):
        # Arrange.
        inputValue = '//[sep]\n0sep1sep0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration156(self):
        # Arrange.
        inputValue = '//[sep]\n0sep0sep1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration157(self):
        # Arrange.
        inputValue = '//[sep]\n0sep0sep1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration158(self):
        # Arrange.
        inputValue = '//[sep]\n1sep0sep1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration159(self):
        # Arrange.
        inputValue = '//[sep]\n0sep1sep1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration160(self):
        # Arrange.
        inputValue = '//[sep]\n1sep1001sep1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration161(self):
        # Arrange.
        inputValue = '//[sep]\n1sep2sep3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration162(self):
        # Arrange.
        inputValue = '//[sep]\n1sep2sep3sep4sep5sep6sep7sep8sep9sep10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration163(self):
        # Arrange.
        inputValue = '//[\n]\n0\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration164(self):
        # Arrange.
        inputValue = '//[\n]\n1\n0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration165(self):
        # Arrange.
        inputValue = '//[\n]\n0\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration166(self):
        # Arrange.
        inputValue = '//[\n]\n0\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration167(self):
        # Arrange.
        inputValue = '//[\n]\n1\n1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration168(self):
        # Arrange.
        inputValue = '//[\n]\n1\n1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration169(self):
        # Arrange.
        inputValue = '//[\n]\n1001\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration170(self):
        # Arrange.
        inputValue = '//[\n]\n1\n2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration171(self):
        # Arrange.
        inputValue = '//[\n]\n0\n0\n0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration172(self):
        # Arrange.
        inputValue = '//[\n]\n1\n0\n0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration173(self):
        # Arrange.
        inputValue = '//[\n]\n0\n1\n0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration174(self):
        # Arrange.
        inputValue = '//[\n]\n0\n0\n1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration175(self):
        # Arrange.
        inputValue = '//[\n]\n0\n0\n1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration176(self):
        # Arrange.
        inputValue = '//[\n]\n1\n0\n1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration177(self):
        # Arrange.
        inputValue = '//[\n]\n0\n1\n1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration178(self):
        # Arrange.
        inputValue = '//[\n]\n1\n1001\n1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration179(self):
        # Arrange.
        inputValue = '//[\n]\n1\n2\n3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration180(self):
        # Arrange.
        inputValue = '//[\n]\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration181(self):
        # Arrange.
        inputValue = '//[-]\n0-0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration182(self):
        # Arrange.
        inputValue = '//[-]\n1-0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration183(self):
        # Arrange.
        inputValue = '//[-]\n0-1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration184(self):
        # Arrange.
        inputValue = '//[-]\n0-1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration185(self):
        # Arrange.
        inputValue = '//[-]\n1-1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration186(self):
        # Arrange.
        inputValue = '//[-]\n1-1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration187(self):
        # Arrange.
        inputValue = '//[-]\n1001-1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration188(self):
        # Arrange.
        inputValue = '//[-]\n1-2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration189(self):
        # Arrange.
        inputValue = '//[-]\n0-0-0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration190(self):
        # Arrange.
        inputValue = '//[-]\n1-0-0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration191(self):
        # Arrange.
        inputValue = '//[-]\n0-1-0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration192(self):
        # Arrange.
        inputValue = '//[-]\n0-0-1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration193(self):
        # Arrange.
        inputValue = '//[-]\n0-0-1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration194(self):
        # Arrange.
        inputValue = '//[-]\n1-0-1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration195(self):
        # Arrange.
        inputValue = '//[-]\n0-1-1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration196(self):
        # Arrange.
        inputValue = '//[-]\n1-1001-1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration197(self):
        # Arrange.
        inputValue = '//[-]\n1-2-3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration198(self):
        # Arrange.
        inputValue = '//[-]\n1-2-3-4-5-6-7-8-9-10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration199(self):
        # Arrange.
        inputValue = '//[-1]\n0-10'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration200(self):
        # Arrange.
        inputValue = '//[-1]\n1-10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration201(self):
        # Arrange.
        inputValue = '//[-1]\n0-11'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration202(self):
        # Arrange.
        inputValue = '//[-1]\n0-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration203(self):
        # Arrange.
        inputValue = '//[-1]\n1-11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration204(self):
        # Arrange.
        inputValue = '//[-1]\n1-11001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration205(self):
        # Arrange.
        inputValue = '//[-1]\n1001-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration206(self):
        # Arrange.
        inputValue = '//[-1]\n1-12'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration207(self):
        # Arrange.
        inputValue = '//[-1]\n0-10-10'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration208(self):
        # Arrange.
        inputValue = '//[-1]\n1-10-10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration209(self):
        # Arrange.
        inputValue = '//[-1]\n0-11-10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration210(self):
        # Arrange.
        inputValue = '//[-1]\n0-10-11'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration211(self):
        # Arrange.
        inputValue = '//[-1]\n0-10-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration212(self):
        # Arrange.
        inputValue = '//[-1]\n1-10-11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration213(self):
        # Arrange.
        inputValue = '//[-1]\n0-11-11001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration214(self):
        # Arrange.
        inputValue = '//[-1]\n1-11001-11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration215(self):
        # Arrange.
        inputValue = '//[-1]\n1-12-13'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration216(self):
        # Arrange.
        inputValue = '//[-1]\n1-12-13-14-15-16-17-18-19-110'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration217(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-10'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration218(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration219(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-11'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration220(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration221(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration222(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-11001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration223(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1001-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration224(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-12'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration225(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-20'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration226(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-20'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration227(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-21'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration228(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration229(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-21000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration230(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-21001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration231(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1001-21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration232(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-22'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration233(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-10-20'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration234(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-10-20'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration235(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-11-20'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration236(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-10-21'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration237(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-10-21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration238(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-10-21000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration239(self):
        # Arrange.
        inputValue = '//[-1][-2]\n0-11-21001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration240(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-11001-21000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration241(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-12-23'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration242(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-12-23-14-25-16-27-18-29-110'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration243(self):
        # Arrange.
        inputValue = '//[*][%]\n0*0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration244(self):
        # Arrange.
        inputValue = '//[*][%]\n1*0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration245(self):
        # Arrange.
        inputValue = '//[*][%]\n0*1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration246(self):
        # Arrange.
        inputValue = '//[*][%]\n0*1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration247(self):
        # Arrange.
        inputValue = '//[*][%]\n1*1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration248(self):
        # Arrange.
        inputValue = '//[*][%]\n1*1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration249(self):
        # Arrange.
        inputValue = '//[*][%]\n1001*1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration250(self):
        # Arrange.
        inputValue = '//[*][%]\n1*2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration251(self):
        # Arrange.
        inputValue = '//[*][%]\n0%0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration252(self):
        # Arrange.
        inputValue = '//[*][%]\n1%0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration253(self):
        # Arrange.
        inputValue = '//[*][%]\n0%1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration254(self):
        # Arrange.
        inputValue = '//[*][%]\n0%1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration255(self):
        # Arrange.
        inputValue = '//[*][%]\n1%1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration256(self):
        # Arrange.
        inputValue = '//[*][%]\n1%1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration257(self):
        # Arrange.
        inputValue = '//[*][%]\n1001%1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration258(self):
        # Arrange.
        inputValue = '//[*][%]\n1%2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration259(self):
        # Arrange.
        inputValue = '//[*][%]\n0*0%0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration260(self):
        # Arrange.
        inputValue = '//[*][%]\n1*0%0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration261(self):
        # Arrange.
        inputValue = '//[*][%]\n0*1%0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration262(self):
        # Arrange.
        inputValue = '//[*][%]\n0*0%1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration263(self):
        # Arrange.
        inputValue = '//[*][%]\n0*0%1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration264(self):
        # Arrange.
        inputValue = '//[*][%]\n1*0%1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration265(self):
        # Arrange.
        inputValue = '//[*][%]\n0*1%1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration266(self):
        # Arrange.
        inputValue = '//[*][%]\n1*1001%1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration267(self):
        # Arrange.
        inputValue = '//[*][%]\n1*2%3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration268(self):
        # Arrange.
        inputValue = '//[*][%]\n1*2%3*4%5*6%7*8%9*10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration269(self):
        # Arrange.
        inputValue = '//[**][%%]\n0**0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration270(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration271(self):
        # Arrange.
        inputValue = '//[**][%%]\n0**1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration272(self):
        # Arrange.
        inputValue = '//[**][%%]\n0**1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration273(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration274(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration275(self):
        # Arrange.
        inputValue = '//[**][%%]\n1001**1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration276(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration277(self):
        # Arrange.
        inputValue = '//[**][%%]\n0%%0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration278(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration279(self):
        # Arrange.
        inputValue = '//[**][%%]\n0%%1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration280(self):
        # Arrange.
        inputValue = '//[**][%%]\n0%%1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration281(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration282(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration283(self):
        # Arrange.
        inputValue = '//[**][%%]\n1001%%1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration284(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration285(self):
        # Arrange.
        inputValue = '//[**][%%]\n0**0%%0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration286(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**0%%0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration287(self):
        # Arrange.
        inputValue = '//[**][%%]\n0**1%%0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration288(self):
        # Arrange.
        inputValue = '//[**][%%]\n0**0%%1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration289(self):
        # Arrange.
        inputValue = '//[**][%%]\n0**0%%1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration290(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**0%%1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration291(self):
        # Arrange.
        inputValue = '//[**][%%]\n0**1%%1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration292(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**1001%%1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration293(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**2%%3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration294(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**2%%3**4%%5**6%%7**8%%9**10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration295(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep10'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration296(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration297(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep11'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration298(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration299(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration300(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep11001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration301(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1001sep11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration302(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep12'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration303(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep20'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration304(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep20'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration305(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep21'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration306(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration307(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep21000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration308(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep21001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration309(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1001sep21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration310(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep22'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration311(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep10sep20'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration312(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep10sep20'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration313(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep11sep20'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration314(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep10sep21'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration315(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep10sep21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration316(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep10sep21000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration317(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n0sep11sep21001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration318(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep11001sep21000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration319(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep12sep23'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration320(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep12sep23sep14sep25sep16sep27sep18sep29sep110'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration321(self):
        # Arrange.
        inputValue = '//[[][]]\n0[0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration322(self):
        # Arrange.
        inputValue = '//[[][]]\n1[0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration323(self):
        # Arrange.
        inputValue = '//[[][]]\n0[1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration324(self):
        # Arrange.
        inputValue = '//[[][]]\n0[1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration325(self):
        # Arrange.
        inputValue = '//[[][]]\n1[1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration326(self):
        # Arrange.
        inputValue = '//[[][]]\n1[1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration327(self):
        # Arrange.
        inputValue = '//[[][]]\n1001[1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration328(self):
        # Arrange.
        inputValue = '//[[][]]\n1[2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration329(self):
        # Arrange.
        inputValue = '//[[][]]\n0]0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration330(self):
        # Arrange.
        inputValue = '//[[][]]\n1]0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration331(self):
        # Arrange.
        inputValue = '//[[][]]\n0]1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration332(self):
        # Arrange.
        inputValue = '//[[][]]\n0]1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration333(self):
        # Arrange.
        inputValue = '//[[][]]\n1]1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration334(self):
        # Arrange.
        inputValue = '//[[][]]\n1]1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration335(self):
        # Arrange.
        inputValue = '//[[][]]\n1001]1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration336(self):
        # Arrange.
        inputValue = '//[[][]]\n1]2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration337(self):
        # Arrange.
        inputValue = '//[[][]]\n0[0]0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration338(self):
        # Arrange.
        inputValue = '//[[][]]\n1[0]0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration339(self):
        # Arrange.
        inputValue = '//[[][]]\n0[1]0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration340(self):
        # Arrange.
        inputValue = '//[[][]]\n0[0]1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration341(self):
        # Arrange.
        inputValue = '//[[][]]\n0[0]1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration342(self):
        # Arrange.
        inputValue = '//[[][]]\n1[0]1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration343(self):
        # Arrange.
        inputValue = '//[[][]]\n0[1]1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration344(self):
        # Arrange.
        inputValue = '//[[][]]\n1[1001]1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration345(self):
        # Arrange.
        inputValue = '//[[][]]\n1[2]3'
        expectedResult = 6

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration346(self):
        # Arrange.
        inputValue = '//[[][]]\n1[2]3[4]5[6]7[8]9[10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration347(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration348(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration349(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration350(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration351(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration352(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration353(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1001+1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration354(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration355(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0!0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration356(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1!0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration357(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0!1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration358(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0!1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration359(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1!1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration360(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1!1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration361(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1001!1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration362(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1!2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration363(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0#0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration364(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1#0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration365(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0#1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration366(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0#1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration367(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1#1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration368(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1#1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration369(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1001#1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration370(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1#2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration371(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+0!0#0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration372(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+0!0#0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration373(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+1!0#0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration374(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+0!1#0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration375(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+0!0#1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration376(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+0!1000#0'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration377(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+0!1000#0'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration378(self):
        # Arrange.
        inputValue = '//[+][!][#]\n0+1!1001#0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration379(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+1001!1000#0'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration380(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+2!3#4'
        expectedResult = 10

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration381(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+2!3#4+5!6#7+8!9#10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration382(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration383(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration384(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration385(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration386(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration387(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration388(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1001++1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration389(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration390(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0!!0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration391(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1!!0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration392(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0!!1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration393(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0!!1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration394(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1!!1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration395(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1!!1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration396(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1001!!1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration397(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1!!2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration398(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0##0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration399(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1##0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration400(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0##1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration401(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0##1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration402(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1##1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration403(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1##1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration404(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1001##1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration405(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1##2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration406(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++0!!0##0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration407(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++0!!0##0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration408(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++1!!0##0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration409(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++0!!1##0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration410(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++0!!0##1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration411(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++0!!1000##0'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration412(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++0!!1000##0'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration413(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n0++1!!1001##0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration414(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++1001!!1000##0'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration415(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++2!!3##4'
        expectedResult = 10

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration416(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++2!!3##4++5!!6##7++8!!9##10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration417(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-10'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration418(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration419(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-11'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration420(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration421(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration422(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-11001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration423(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1001-11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration424(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-12'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration425(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-20'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration426(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-20'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration427(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-21'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration428(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration429(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-21000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration430(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-21001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration431(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1001-21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration432(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-22'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration433(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-30'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration434(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration435(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-31'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration436(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-31000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration437(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-31000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration438(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-31001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration439(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1001-31000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration440(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-32'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration441(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-10-20-30'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration442(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-10-20-30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration443(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-11-20-30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration444(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-10-21-30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration445(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-10-20-31'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration446(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-10-21000-30'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration447(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-10-21000-30'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration448(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n0-11-21001-30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration449(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-11001-21000-30'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration450(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-12-23-34'
        expectedResult = 10

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration451(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-12-23-34-15-26-37-18-29-310'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration452(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep10'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration453(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep10'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration454(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep11'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration455(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration456(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep11000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration457(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep11001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration458(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1001sep11000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration459(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep12'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration460(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep20'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration461(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep20'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration462(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep21'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration463(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration464(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep21000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration465(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep21001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration466(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1001sep21000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration467(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep22'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration468(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep30'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration469(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration470(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep31'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration471(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep31000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration472(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep31000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration473(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep31001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration474(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1001sep31000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration475(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep32'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration476(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep10sep20sep30'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration477(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep10sep20sep30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration478(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep11sep20sep30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration479(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep10sep21sep30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration480(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep10sep20sep31'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration481(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep10sep21000sep30'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration482(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep10sep21000sep30'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration483(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n0sep11sep21001sep30'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration484(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep11001sep21000sep30'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration485(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep34'
        expectedResult = 10

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration486(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep34sep15sep26sep37sep18sep29sep310'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration487(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration488(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration489(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration490(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration491(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration492(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration493(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1001?1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration494(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration495(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0??0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration496(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1??0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration497(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0??1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration498(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0??1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration499(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1??1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration500(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1??1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration501(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1001??1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration502(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1??2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration503(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0???0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration504(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1???0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration505(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0???1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration506(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0???1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration507(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1???1000'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration508(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1???1001'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration509(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1001???1000'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration510(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1???2'
        expectedResult = 3

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration511(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?0??0???0'
        expectedResult = 0

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration512(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?0??0???0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration513(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?1??0???0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration514(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?0??1???0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration515(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?0??0???1'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration516(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?0??1000???0'
        expectedResult = 1000

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration517(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?0??1000???0'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration518(self):
        # Arrange.
        inputValue = '//[?][??][???]\n0?1??1001???0'
        expectedResult = 1

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration519(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?1001??1000???0'
        expectedResult = 1001

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration520(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?2??3???4'
        expectedResult = 10

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
	"""
    def test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration521(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?2??3???4?5??6???7?8??9???10'
        expectedResult = 55

        # Act.
        actualResult = self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(expectedResult, actualResult)

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator1(self):
        # Arrange.
        inputValue = '1;'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator2(self):
        # Arrange.
        inputValue = '1;2;'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator3(self):
        # Arrange.
        inputValue = '1\n'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator4(self):
        # Arrange.
        inputValue = '1\n2\n'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator5(self):
        # Arrange.
        inputValue = '1;2\n'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator6(self):
        # Arrange.
        inputValue = '1\n2;'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration1(self):
        # Arrange.
        inputValue = '//$\n1$'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration2(self):
        # Arrange.
        inputValue = '//$\n1$2$'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration3(self):
        # Arrange.
        inputValue = '//$$\n1$$'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration4(self):
        # Arrange.
        inputValue = '//$$\n1$$2$$'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration5(self):
        # Arrange.
        inputValue = '//sep\n1sep'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration6(self):
        # Arrange.
        inputValue = '//sep\n1sep2sep'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration7(self):
        # Arrange.
        inputValue = '//\n\n1\n'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration8(self):
        # Arrange.
        inputValue = '//\n\n1\n2\n'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration9(self):
        # Arrange.
        inputValue = '//-\n1-'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration10(self):
        # Arrange.
        inputValue = '//-\n1-2-'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration11(self):
        # Arrange.
        inputValue = '//-1\n1-1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration12(self):
        # Arrange.
        inputValue = '//-1\n1-12-1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration13(self):
        # Arrange.
        inputValue = '//[$]\n1$'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration14(self):
        # Arrange.
        inputValue = '//[$]\n1$2$'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration15(self):
        # Arrange.
        inputValue = '//[$$]\n1$$'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration16(self):
        # Arrange.
        inputValue = '//[$$]\n1$$2$$'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration17(self):
        # Arrange.
        inputValue = '//[sep]\n1sep'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration18(self):
        # Arrange.
        inputValue = '//[sep]\n1sep2sep'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration19(self):
        # Arrange.
        inputValue = '//[\n]\n1\n'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration20(self):
        # Arrange.
        inputValue = '//[\n]\n1\n2\n'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration21(self):
        # Arrange.
        inputValue = '//[-]\n1-'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration22(self):
        # Arrange.
        inputValue = '//[-]\n1-2-'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration23(self):
        # Arrange.
        inputValue = '//[-1]\n1-1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration24(self):
        # Arrange.
        inputValue = '//[-1]\n1-12-1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration25(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration26(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-2'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration27(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-12-2'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration28(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-22-1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration29(self):
        # Arrange.
        inputValue = '//[*][%]\n1*'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration30(self):
        # Arrange.
        inputValue = '//[*][%]\n1%'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration31(self):
        # Arrange.
        inputValue = '//[*][%]\n1*2%'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration32(self):
        # Arrange.
        inputValue = '//[*][%]\n1%2*'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration33(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration34(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration35(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**2%%'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration36(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%2**'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration37(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration38(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep2'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration39(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep12sep2'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration40(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep22sep1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration41(self):
        # Arrange.
        inputValue = '//[[][]]\n1['
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration42(self):
        # Arrange.
        inputValue = '//[[][]]\n1]'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration43(self):
        # Arrange.
        inputValue = '//[[][]]\n1[2]'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration44(self):
        # Arrange.
        inputValue = '//[[][]]\n1]2['
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration45(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration46(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1!'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration47(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1#'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration48(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+2!3#'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration49(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration50(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1!!'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration51(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1##'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration52(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++2!!3##'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration53(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration54(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-2'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration55(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-3'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration56(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-12-23-3'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration57(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep1'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration58(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep2'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration59(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep3'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration60(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep3'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration61(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration62(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1??'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration63(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1???'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input ending with a separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration64(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?2??3???'
        errorMessage = 'Number expected but EOF found.'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber1(self):
        # Arrange.
        inputValue = '-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber2(self):
        # Arrange.
        inputValue = '-1;2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber3(self):
        # Arrange.
        inputValue = '1;-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber4(self):
        # Arrange.
        inputValue = '-1;-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber5(self):
        # Arrange.
        inputValue = '-1\n2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber6(self):
        # Arrange.
        inputValue = '1\n-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber7(self):
        # Arrange.
        inputValue = '-1\n-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber8(self):
        # Arrange.
        inputValue = '-1\n-2;-1'
        errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration1(self):
        # Arrange.
        inputValue = '//$\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration2(self):
        # Arrange.
        inputValue = '//$\n-1$2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration3(self):
        # Arrange.
        inputValue = '//$\n1$-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration4(self):
        # Arrange.
        inputValue = '//$\n-1$-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration5(self):
        # Arrange.
        inputValue = '//$$\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration6(self):
        # Arrange.
        inputValue = '//$$\n-1$$2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration7(self):
        # Arrange.
        inputValue = '//$$\n1$$-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration8(self):
        # Arrange.
        inputValue = '//$$\n-1$$-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration9(self):
        # Arrange.
        inputValue = '//sep\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration10(self):
        # Arrange.
        inputValue = '//sep\n-1sep2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration11(self):
        # Arrange.
        inputValue = '//sep\n1sep-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration12(self):
        # Arrange.
        inputValue = '//sep\n-1sep-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration13(self):
        # Arrange.
        inputValue = '//\n\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration14(self):
        # Arrange.
        inputValue = '//\n\n-1\n2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration15(self):
        # Arrange.
        inputValue = '//\n\n1\n-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration16(self):
        # Arrange.
        inputValue = '//\n\n-1\n-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration17(self):
        # Arrange.
        inputValue = '//-1\n-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration18(self):
        # Arrange.
        inputValue = '//-1\n-2-13'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration19(self):
        # Arrange.
        inputValue = '//-1\n2-1-3'
        errorMessage = 'Negatives not allowed : -3'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration20(self):
        # Arrange.
        inputValue = '//-1\n-2-1-2'
        errorMessage = 'Negatives not allowed : -2, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration21(self):
        # Arrange.
        inputValue = '//[$]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration22(self):
        # Arrange.
        inputValue = '//[$]\n-1$2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration23(self):
        # Arrange.
        inputValue = '//[$]\n1$-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration24(self):
        # Arrange.
        inputValue = '//[$]\n-1$-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration25(self):
        # Arrange.
        inputValue = '//[$$]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration26(self):
        # Arrange.
        inputValue = '//[$$]\n-1$$2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration27(self):
        # Arrange.
        inputValue = '//[$$]\n1$$-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration28(self):
        # Arrange.
        inputValue = '//[$$]\n-1$$-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration29(self):
        # Arrange.
        inputValue = '//[sep]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration30(self):
        # Arrange.
        inputValue = '//[sep]\n-1sep2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration31(self):
        # Arrange.
        inputValue = '//[sep]\n1sep-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration32(self):
        # Arrange.
        inputValue = '//[sep]\n-1sep-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration33(self):
        # Arrange.
        inputValue = '//[\n]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration34(self):
        # Arrange.
        inputValue = '//[\n]\n-1\n2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration35(self):
        # Arrange.
        inputValue = '//[\n]\n1\n-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration36(self):
        # Arrange.
        inputValue = '//[\n]\n-1\n-1'
        errorMessage = 'Negatives not allowed : -1, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration37(self):
        # Arrange.
        inputValue = '//[-1]\n-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration38(self):
        # Arrange.
        inputValue = '//[-1]\n-2-13'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration39(self):
        # Arrange.
        inputValue = '//[-1]\n2-1-3'
        errorMessage = 'Negatives not allowed : -3'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration40(self):
        # Arrange.
        inputValue = '//[-1]\n-2-1-2'
        errorMessage = 'Negatives not allowed : -2, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration41(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-3'
        errorMessage = 'Negatives not allowed : -3'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration42(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-3-14'
        errorMessage = 'Negatives not allowed : -3'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration43(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-3-24'
        errorMessage = 'Negatives not allowed : -3'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration44(self):
        # Arrange.
        inputValue = '//[-1][-2]\n3-1-4'
        errorMessage = 'Negatives not allowed : -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration45(self):
        # Arrange.
        inputValue = '//[-1][-2]\n3-2-4'
        errorMessage = 'Negatives not allowed : -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration46(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-3-1-4'
        errorMessage = 'Negatives not allowed : -3, -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration47(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-3-2-4'
        errorMessage = 'Negatives not allowed : -3, -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration48(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-3-1-4-2-3'
        errorMessage = 'Negatives not allowed : -3, -4, -3'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration49(self):
        # Arrange.
        inputValue = '//[*][%]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration50(self):
        # Arrange.
        inputValue = '//[*][%]\n-1*2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration51(self):
        # Arrange.
        inputValue = '//[*][%]\n-1%2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration52(self):
        # Arrange.
        inputValue = '//[*][%]\n1*-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration53(self):
        # Arrange.
        inputValue = '//[*][%]\n1%-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration54(self):
        # Arrange.
        inputValue = '//[*][%]\n-1*-2'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration55(self):
        # Arrange.
        inputValue = '//[*][%]\n-1%-2'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration56(self):
        # Arrange.
        inputValue = '//[*][%]\n-1*-2%-1'
        errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration57(self):
        # Arrange.
        inputValue = '//[**][%%]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration58(self):
        # Arrange.
        inputValue = '//[**][%%]\n-1**2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration59(self):
        # Arrange.
        inputValue = '//[**][%%]\n-1%%2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration60(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration61(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration62(self):
        # Arrange.
        inputValue = '//[**][%%]\n-1**-2'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration63(self):
        # Arrange.
        inputValue = '//[**][%%]\n-1%%-2'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration64(self):
        # Arrange.
        inputValue = '//[**][%%]\n-1**-2%%-1'
        errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration65(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration66(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n-1sep12'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration67(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n-1sep22'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration68(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep1-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration69(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep2-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration70(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n-1sep1-2'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration71(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n-1sep2-2'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration72(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n-1sep1-2sep2-1'
        errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration73(self):
        # Arrange.
        inputValue = '//[[][]]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration74(self):
        # Arrange.
        inputValue = '//[[][]]\n-1[2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration75(self):
        # Arrange.
        inputValue = '//[[][]]\n-1]2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration76(self):
        # Arrange.
        inputValue = '//[[][]]\n1[-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration77(self):
        # Arrange.
        inputValue = '//[[][]]\n1]-2'
        errorMessage = 'Negatives not allowed : -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration78(self):
        # Arrange.
        inputValue = '//[[][]]\n-1[-2'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration79(self):
        # Arrange.
        inputValue = '//[[][]]\n-1]-2'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration80(self):
        # Arrange.
        inputValue = '//[[][]]\n-1[-2]-1'
        errorMessage = 'Negatives not allowed : -1, -2, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration81(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration82(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1+2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration83(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1!2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration84(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1#2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration85(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1+-2!3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration86(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1!-2#3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration87(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1#-2+3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration88(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1+-2!-3#-1'
        errorMessage = 'Negatives not allowed : -1, -2, -3, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration89(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration90(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1++2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration91(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1!!2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration92(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1##2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration93(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1++-2!!3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration94(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1!!-2##3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration95(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1##-2++3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration96(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1++-2!!-3##-1'
        errorMessage = 'Negatives not allowed : -1, -2, -3, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration97(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4'
        errorMessage = 'Negatives not allowed : -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration98(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4-15'
        errorMessage = 'Negatives not allowed : -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration99(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4-25'
        errorMessage = 'Negatives not allowed : -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration100(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4-35'
        errorMessage = 'Negatives not allowed : -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration101(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4-1-5-26'
        errorMessage = 'Negatives not allowed : -4, -5'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration102(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4-2-5-36'
        errorMessage = 'Negatives not allowed : -4, -5'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration103(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4-3-5-16'
        errorMessage = 'Negatives not allowed : -4, -5'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration104(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4-1-5-2-6-3-4'
        errorMessage = 'Negatives not allowed : -4, -5, -6, -4'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration105(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration106(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1sep12'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration107(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1sep22'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration108(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1sep32'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration109(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1sep1-2sep23'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration110(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1sep2-2sep33'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration111(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1sep3-2sep13'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration112(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1sep1-2sep2-3sep3-1'
        errorMessage = 'Negatives not allowed : -1, -2, -3, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration113(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration114(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1?2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration115(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1??2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration116(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1???2'
        errorMessage = 'Negatives not allowed : -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration117(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1?-2??3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration118(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1??-2???3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration119(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1???-2?3'
        errorMessage = 'Negatives not allowed : -1, -2'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing at least one negative number.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration120(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1?-2??-3???-1'
        errorMessage = 'Negatives not allowed : -1, -2, -3, -1'

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparator(self):
        # Arrange.
        inputValue = '1$2'
        errorMessage = "';' or '\n' expected but '$' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration1(self):
        # Arrange.
        inputValue = '//$\n1;2'
        errorMessage = "'$' expected but ';' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration2(self):
        # Arrange.
        inputValue = '//$$\n1;2'
        errorMessage = "'$$' expected but ';' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration3(self):
        # Arrange.
        inputValue = '//sep\n1|2'
        errorMessage = "'sep' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration4(self):
        # Arrange.
        inputValue = '//\n\n1|2'
        errorMessage = "'\n' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration5(self):
        # Arrange.
        inputValue = '//-\n1|2'
        errorMessage = "'-' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration6(self):
        # Arrange.
        inputValue = '//-1\n1|2'
        errorMessage = "'-1' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration7(self):
        # Arrange.
        inputValue = '//[$]\n1;2'
        errorMessage = "'$' expected but ';' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration8(self):
        # Arrange.
        inputValue = '//[$$]\n1;2'
        errorMessage = "'$$' expected but ';' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration9(self):
        # Arrange.
        inputValue = '//[sep]\n1|2'
        errorMessage = "'sep' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration10(self):
        # Arrange.
        inputValue = '//[\n]\n1|2'
        errorMessage = "'\n' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration11(self):
        # Arrange.
        inputValue = '//[-]\n1|2'
        errorMessage = "'-' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration12(self):
        # Arrange.
        inputValue = '//[-1]\n1|2'
        errorMessage = "'-1' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration13(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1|2'
        errorMessage = "'-1' or '-2' expected but '|' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration14(self):
        # Arrange.
        inputValue = '//[*][%]\n1=2'
        errorMessage = "'*' or '%' expected but '=' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration15(self):
        # Arrange.
        inputValue = '//[**][%%]\n1=2'
        errorMessage = "'**' or '%%' expected but '=' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration16(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1del2'
        errorMessage = "'sep1' or 'sep2' expected but 'del' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration17(self):
        # Arrange.
        inputValue = '//[[][]]\n1{2'
        errorMessage = "'[' or ']' expected but '{' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration18(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1=2'
        errorMessage = "'+' or '!' or '#' expected but '=' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration19(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1=2'
        errorMessage = "'++' or '!!' or '##' expected but '=' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration20(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1=2'
        errorMessage = "'-1' or '-2' or '-3' expected but '=' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration21(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1=2'
        errorMessage = "'sep1' or 'sep2' or 'sep3' expected but '=' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input containing an unspecified separator.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration22(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1=2'
        errorMessage = "'???' or '??' or '?' expected but '=' found at position 1."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext1(self):
        # Arrange.
        inputValue = ';1;2'
        errorMessage = "Number expected but ';' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext2(self):
        # Arrange.
        inputValue = '1;;2'
        errorMessage = "Number expected but ';' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext3(self):
        # Arrange.
        inputValue = '\n1\n2'
        errorMessage = "Number expected but '\n' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext4(self):
        # Arrange.
        inputValue = '1\n\n2'
        errorMessage = "Number expected but '\n' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext5(self):
        # Arrange.
        inputValue = ';1\n2'
        errorMessage = "Number expected but ';' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext6(self):
        # Arrange.
        inputValue = '\n1;2'
        errorMessage = "Number expected but '\n' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext7(self):
        # Arrange.
        inputValue = '1\n;2'
        errorMessage = "Number expected but ';' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext8(self):
        # Arrange.
        inputValue = '1;\n2'
        errorMessage = "Number expected but '\n' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration1(self):
        # Arrange.
        inputValue = '//$\n$1$2'
        errorMessage = "Number expected but '$' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration2(self):
        # Arrange.
        inputValue = '//$\n1$$2'
        errorMessage = "Number expected but '$' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration3(self):
        # Arrange.
        inputValue = '//$$\n$$1$$2'
        errorMessage = "Number expected but '$$' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration4(self):
        # Arrange.
        inputValue = '//$$\n1$$$$2'
        errorMessage = "Number expected but '$$' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration5(self):
        # Arrange.
        inputValue = '//sep\nsep1sep2'
        errorMessage = "Number expected but 'sep' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration6(self):
        # Arrange.
        inputValue = '//sep\n1sepsep2'
        errorMessage = "Number expected but 'sep' found at position 4."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration7(self):
        # Arrange.
        inputValue = '//\n\n\n1\n2'
        errorMessage = "Number expected but '\n' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration8(self):
        # Arrange.
        inputValue = '//\n\n1\n\n2'
        errorMessage = "Number expected but '\n' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration9(self):
        # Arrange.
        inputValue = '//-\n-1-2'
        errorMessage = "Number expected but '-' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration10(self):
        # Arrange.
        inputValue = '//-\n1--2'
        errorMessage = "Number expected but '-' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration11(self):
        # Arrange.
        inputValue = '//-1\n-11-12'
        errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration12(self):
        # Arrange.
        inputValue = '//-1\n1-1-12'
        errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration13(self):
        # Arrange.
        inputValue = '//[$]\n$1$2'
        errorMessage = "Number expected but '$' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration14(self):
        # Arrange.
        inputValue = '//[$]\n1$$2'
        errorMessage = "Number expected but '$' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration15(self):
        # Arrange.
        inputValue = '//[$$]\n$$1$$2'
        errorMessage = "Number expected but '$$' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration16(self):
        # Arrange.
        inputValue = '//[$$]\n1$$$$2'
        errorMessage = "Number expected but '$$' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration17(self):
        # Arrange.
        inputValue = '//[sep]\nsep1sep2'
        errorMessage = "Number expected but 'sep' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration18(self):
        # Arrange.
        inputValue = '//[sep]\n1sepsep2'
        errorMessage = "Number expected but 'sep' found at position 4."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration19(self):
        # Arrange.
        inputValue = '//[\n]\n\n1\n2'
        errorMessage = "Number expected but '\n' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration20(self):
        # Arrange.
        inputValue = '//[\n]\n1\n\n2'
        errorMessage = "Number expected but '\n' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration21(self):
        # Arrange.
        inputValue = '//[-]\n-1-2'
        errorMessage = "Number expected but '-' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration22(self):
        # Arrange.
        inputValue = '//[-]\n1--2'
        errorMessage = "Number expected but '-' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration23(self):
        # Arrange.
        inputValue = '//[-1]\n-11-12'
        errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration24(self):
        # Arrange.
        inputValue = '//[-1]\n1-1-12'
        errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration25(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-11-12'
        errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration26(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-1-12'
        errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration27(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-21-22'
        errorMessage = "Number expected but '-2' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration28(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-2-22'
        errorMessage = "Number expected but '-2' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration29(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-11-22'
        errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration30(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-21-12'
        errorMessage = "Number expected but '-2' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration31(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-2-12'
        errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration32(self):
        # Arrange.
        inputValue = '//[-1][-2]\n1-1-22'
        errorMessage = "Number expected but '-2' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration33(self):
        # Arrange.
        inputValue = '//[*][%]\n*1*2'
        errorMessage = "Number expected but '*' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration34(self):
        # Arrange.
        inputValue = '//[*][%]\n1**2'
        errorMessage = "Number expected but '*' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration35(self):
        # Arrange.
        inputValue = '//[*][%]\n%1%2'
        errorMessage = "Number expected but '%' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
	The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
	"""
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration36(self):
        # Arrange.
        inputValue = '//[*][%]\n1%%2'
        errorMessage = "Number expected but '%' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration37(self):
        # Arrange.
        inputValue = '//[*][%]\n*1%2'
        errorMessage = "Number expected but '*' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration38(self):
        # Arrange.
        inputValue = '//[*][%]\n%1*2'
        errorMessage = "Number expected but '%' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration39(self):
        # Arrange.
        inputValue = '//[*][%]\n1%*2'
        errorMessage = "Number expected but '*' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration40(self):
        # Arrange.
        inputValue = '//[*][%]\n1*%2'
        errorMessage = "Number expected but '%' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration41(self):
        # Arrange.
        inputValue = '//[**][%%]\n**1**2'
        errorMessage = "Number expected but '**' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration42(self):
        # Arrange.
        inputValue = '//[**][%%]\n1****2'
        errorMessage = "Number expected but '**' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration43(self):
        # Arrange.
        inputValue = '//[**][%%]\n%%1%%2'
        errorMessage = "Number expected but '%%' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration44(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%%%2'
        errorMessage = "Number expected but '%%' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration45(self):
        # Arrange.
        inputValue = '//[**][%%]\n**1%%2'
        errorMessage = "Number expected but '**' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration46(self):
        # Arrange.
        inputValue = '//[**][%%]\n%%1**2'
        errorMessage = "Number expected but '%%' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration47(self):
        # Arrange.
        inputValue = '//[**][%%]\n1%%**2'
        errorMessage = "Number expected but '**' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration48(self):
        # Arrange.
        inputValue = '//[**][%%]\n1**%%2'
        errorMessage = "Number expected but '%%' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration49(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\nsep11sep12'
        errorMessage = "Number expected but 'sep1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration50(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep1sep12'
        errorMessage = "Number expected but 'sep1' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration51(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\nsep21sep22'
        errorMessage = "Number expected but 'sep2' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration52(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep2sep22'
        errorMessage = "Number expected but 'sep2' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration53(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\nsep11sep22'
        errorMessage = "Number expected but 'sep1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration54(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\nsep21sep12'
        errorMessage = "Number expected but 'sep2' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration55(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep2sep12'
        errorMessage = "Number expected but 'sep1' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration56(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n1sep1sep22'
        errorMessage = "Number expected but 'sep2' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration57(self):
        # Arrange.
        inputValue = '//[[][]]\n[1[2'
        errorMessage = "Number expected but '[' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration58(self):
        # Arrange.
        inputValue = '//[[][]]\n1[[2'
        errorMessage = "Number expected but '[' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration59(self):
        # Arrange.
        inputValue = '//[[][]]\n]1]2'
        errorMessage = "Number expected but ']' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration60(self):
        # Arrange.
        inputValue = '//[[][]]\n1]]2'
        errorMessage = "Number expected but ']' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration61(self):
        # Arrange.
        inputValue = '//[[][]]\n[1]2'
        errorMessage = "Number expected but '[' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration62(self):
        # Arrange.
        inputValue = '//[[][]]\n]1[2'
        errorMessage = "Number expected but ']' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration63(self):
        # Arrange.
        inputValue = '//[[][]]\n1][2'
        errorMessage = "Number expected but '[' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration64(self):
        # Arrange.
        inputValue = '//[[][]]\n1[]2'
        errorMessage = "Number expected but ']' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration65(self):
        # Arrange.
        inputValue = '//[+][!][#]\n+1+2'
        errorMessage = "Number expected but '+' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration66(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1++2'
        errorMessage = "Number expected but '+' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration67(self):
        # Arrange.
        inputValue = '//[+][!][#]\n!1!2'
        errorMessage = "Number expected but '!' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration68(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1!!2'
        errorMessage = "Number expected but '!' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration69(self):
        # Arrange.
        inputValue = '//[+][!][#]\n#1#2'
        errorMessage = "Number expected but '#' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration70(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1##2'
        errorMessage = "Number expected but '#' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration71(self):
        # Arrange.
        inputValue = '//[+][!][#]\n+1!2'
        errorMessage = "Number expected but '+' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration72(self):
        # Arrange.
        inputValue = '//[+][!][#]\n!1#2'
        errorMessage = "Number expected but '!' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration73(self):
        # Arrange.
        inputValue = '//[+][!][#]\n#1+2'
        errorMessage = "Number expected but '#' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration74(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1+!2'
        errorMessage = "Number expected but '!' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration75(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1!#2'
        errorMessage = "Number expected but '#' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration76(self):
        # Arrange.
        inputValue = '//[+][!][#]\n1#+2'
        errorMessage = "Number expected but '+' found at position 2."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration77(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n++1++2'
        errorMessage = "Number expected but '++' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration78(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++++2'
        errorMessage = "Number expected but '++' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration79(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n!!1!!2'
        errorMessage = "Number expected but '!!' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration80(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1!!!!2'
        errorMessage = "Number expected but '!!' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration81(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n##1##2'
        errorMessage = "Number expected but '##' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration82(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1####2'
        errorMessage = "Number expected but '##' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration83(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n++1!!2'
        errorMessage = "Number expected but '++' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration84(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n!!1##2'
        errorMessage = "Number expected but '!!' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration85(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n##1++2'
        errorMessage = "Number expected but '##' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration86(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1++!!2'
        errorMessage = "Number expected but '!!' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration87(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1!!##2'
        errorMessage = "Number expected but '##' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration88(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n1##++2'
        errorMessage = "Number expected but '++' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration89(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-11-12'
        errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration90(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-1-12'
        errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration91(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-21-22'
        errorMessage = "Number expected but '-2' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration92(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-2-22'
        errorMessage = "Number expected but '-2' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration93(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-31-32'
        errorMessage = "Number expected but '-3' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration94(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-3-32'
        errorMessage = "Number expected but '-3' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration95(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-11-22'
        errorMessage = "Number expected but '-1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration96(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-21-32'
        errorMessage = "Number expected but '-2' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration97(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-31-12'
        errorMessage = "Number expected but '-3' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration98(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-1-22'
        errorMessage = "Number expected but '-2' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration99(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-2-32'
        errorMessage = "Number expected but '-3' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration100(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n1-3-12'
        errorMessage = "Number expected but '-1' found at position 3."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration101(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\nsep11sep12'
        errorMessage = "Number expected but 'sep1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration102(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep1sep12'
        errorMessage = "Number expected but 'sep1' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration103(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\nsep21sep22'
        errorMessage = "Number expected but 'sep2' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration104(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep2sep22'
        errorMessage = "Number expected but 'sep2' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration105(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\nsep31sep32'
        errorMessage = "Number expected but 'sep3' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration106(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep3sep32'
        errorMessage = "Number expected but 'sep3' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration107(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\nsep11sep22'
        errorMessage = "Number expected but 'sep1' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration108(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\nsep21sep32'
        errorMessage = "Number expected but 'sep2' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration109(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\nsep31sep12'
        errorMessage = "Number expected but 'sep3' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration110(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep1sep22'
        errorMessage = "Number expected but 'sep2' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration111(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep2sep32'
        errorMessage = "Number expected but 'sep3' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration112(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n1sep3sep12'
        errorMessage = "Number expected but 'sep1' found at position 5."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration113(self):
        # Arrange.
        inputValue = '//[?][??][???]\n?1?2'
        errorMessage = "Number expected but '?' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration114(self):
        # Arrange.
        inputValue = '//[?][??][???]\n??1??2'
        errorMessage = "Number expected but '??' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration115(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1????2'
        errorMessage = "Number expected but '?' found at position 4."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration116(self):
        # Arrange.
        inputValue = '//[?][??][???]\n???1???2'
        errorMessage = "Number expected but '???' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration117(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1??????2'
        errorMessage = "Number expected but '???' found at position 4."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration118(self):
        # Arrange.
        inputValue = '//[?][??][???]\n?1??2'
        errorMessage = "Number expected but '?' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration119(self):
        # Arrange.
        inputValue = '//[?][??][???]\n??1???2'
        errorMessage = "Number expected but '??' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration120(self):
        # Arrange.
        inputValue = '//[?][??][???]\n???1?2'
        errorMessage = "Number expected but '???' found at position 0."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration121(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1?????2'
        errorMessage = "Number expected but '??' found at position 4."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration122(self):
        # Arrange.
        inputValue = '//[?][??][???]\n1????2'
        errorMessage = "Number expected but '?' found at position 4."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrors(self):
        # Arrange.
        inputValue = '-1\n;|2;'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "';' or '\n' expected but '|' found at position 4.\n"
        errorMessage += "Number expected but ';' found at position 3.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration1(self):
        # Arrange.
        inputValue = '//$\n-1$$|2$'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'$' expected but '|' found at position 4.\n"
        errorMessage += "Number expected but '$' found at position 3.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration2(self):
        # Arrange.
        inputValue = '//$$\n-1$$$$|2$$'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'$$' expected but '|' found at position 6.\n"
        errorMessage += "Number expected but '$$' found at position 4.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration3(self):
        # Arrange.
        inputValue = '//sep\n-1sepsep|2sep'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'sep' expected but '|' found at position 8.\n"
        errorMessage += "Number expected but 'sep' found at position 5.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration4(self):
        # Arrange.
        inputValue = '//\n\n-1\n\n|2\n'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'\n' expected but '|' found at position 4.\n"
        errorMessage += "Number expected but '\n' found at position 3.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration5(self):
        # Arrange.
        inputValue = '//-1\n-2-1-1|2-1'
        errorMessage = "Negatives not allowed : -2\n"
        errorMessage += "'-1' expected but '|' found at position 6.\n"
        errorMessage += "Number expected but '-1' found at position 4.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration6(self):
        # Arrange.
        inputValue = '//[$]\n-1$$|2$'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'$' expected but '|' found at position 4.\n"
        errorMessage += "Number expected but '$' found at position 3.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration7(self):
        # Arrange.
        inputValue = '//[$$]\n-1$$$$|2$$'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'$$' expected but '|' found at position 6.\n"
        errorMessage += "Number expected but '$$' found at position 4.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration8(self):
        # Arrange.
        inputValue = '//[sep]\n-1sepsep|2sep'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'sep' expected but '|' found at position 8.\n"
        errorMessage += "Number expected but 'sep' found at position 5.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration9(self):
        # Arrange.
        inputValue = '//[\n]\n-1\n\n|2\n'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'\n' expected but '|' found at position 4.\n"
        errorMessage += "Number expected but '\n' found at position 3.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration10(self):
        # Arrange.
        inputValue = '//[-1]\n-2-1-1|2-1'
        errorMessage = "Negatives not allowed : -2\n"
        errorMessage += "'-1' expected but '|' found at position 6.\n"
        errorMessage += "Number expected but '-1' found at position 4.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration11(self):
        # Arrange.
        inputValue = '//[-1][-2]\n-3-2-1|2-2'
        errorMessage = "Negatives not allowed : -3\n"
        errorMessage += "'-1' or '-2' expected but '|' found at position 6.\n"
        errorMessage += "Number expected but '-1' found at position 4.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration12(self):
        # Arrange.
        inputValue = '//[*][%]\n-1%*|2%'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'*' or '%' expected but '|' found at position 4.\n"
        errorMessage += "Number expected but '*' found at position 3.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration13(self):
        # Arrange.
        inputValue = '//[**][%%]\n-1%%**|2%%'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'**' or '%%' expected but '|' found at position 6.\n"
        errorMessage += "Number expected but '**' found at position 4.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration14(self):
        # Arrange.
        inputValue = '//[sep1][sep2]\n-1sep2sep1|2sep2'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'sep1' or 'sep2' expected but '|' found at position 10.\n"
        errorMessage += "Number expected but 'sep1' found at position 6.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration15(self):
        # Arrange.
        inputValue = '//[[][]]\n-1][|2]'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'[' or ']' expected but '|' found at position 4.\n"
        errorMessage += "Number expected but '[' found at position 3.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration16(self):
        # Arrange.
        inputValue = '//[+][!][#]\n-1#!|2+'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'+' or '!' or '#' expected but '|' found at position 4.\n"
        errorMessage += "Number expected but '!' found at position 3.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration17(self):
        # Arrange.
        inputValue = '//[++][!!][##]\n-1##!!|2++'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'++' or '!!' or '##' expected but '|' found at position 6.\n"
        errorMessage += "Number expected but '!!' found at position 4.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration18(self):
        # Arrange.
        inputValue = '//[-1][-2][-3]\n-4-3-2|2-1'
        errorMessage = "Negatives not allowed : -4\n"
        errorMessage += "'-1' or '-2' or '-3' expected but '|' found at position 6.\n"
        errorMessage += "Number expected but '-2' found at position 4.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration19(self):
        # Arrange.
        inputValue = '//[sep1][sep2][sep3]\n-1sep3sep2|2sep1'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'sep1' or 'sep2' or 'sep3' expected but '|' found at position 10.\n"
        errorMessage += "Number expected but 'sep2' found at position 6.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    The Add method should throw an exception when called with an input containing multiple errors.
    """
    def test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration20(self):
        # Arrange.
        inputValue = '//[?][??][???]\n-1?????|2?'
        errorMessage = "Negatives not allowed : -1\n"
        errorMessage += "'???' or '??' or '?' expected but '|' found at position 7.\n"
        errorMessage += "Number expected but '??' found at position 5.\n"
        errorMessage += "Number expected but EOF found."

        # Act.
        with self.assertRaises(Exception) as error:
            self.__act_Add(inputValue)

        # Assert.
        self.assertEqual(errorMessage, str(error.exception))

    """
    Invokes the Add method with the provided test input.
    """
    def __act_Add(self, inputValue):
        stringCalculator = StringCalculator()
        return stringCalculator.add(inputValue)


if __name__ == '__main__':
    unittest.main()
