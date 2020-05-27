const StringCalculator = require('../src/common/StringCalculator');

/**
 * Invokes the Add method with the provided test input.
 * @param {any} input The test case input.
 */
const act_Add = function(input) {
    let stringCalculator = new StringCalculator();

    return stringCalculator.add(input);
}

/**
 * Unit tests for the string calculator class.
 */
describe('StringCalculatorTests', () => {
    /**
     * Execute only once, in the starting.
     */
    beforeEach(() => {
		
    });
    
    afterEach(() => {

    });

    /**
     * The Add method should return 0 when called with none.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithNone', () => {
        // Arrange.
        const inputValue = null;
        const expectedResult = 0;
        
        // Act.
        const actualResult = act_Add(inputValue);
        
        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with empty string.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithEmptyString', () => {
        // Arrange.
        const inputValue = '';
        const expectedResult = 0;
        
        // Act.
        const actualResult = act_Add(inputValue);
        
        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with whitespace.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithWhitespace', () => {
        // Arrange.
        const inputValue = ' ';
        const expectedResult = 0;
        
        // Act.
        const actualResult = act_Add(inputValue);
        
        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration1', () => {
        // Arrange.
        const inputValue = '//$\n';
        const expectedResult = 0;
        
        // Act.
        const actualResult = act_Add(inputValue);
        
        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration2', () => {
        // Arrange.
        const inputValue = '//$$\n';
        const expectedResult = 0;
        
        // Act.
        const actualResult = act_Add(inputValue);
        
        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration3', () => {
        // Arrange.
        const inputValue = '//sep\n';
        const expectedResult = 0;
        
        // Act.
        const actualResult = act_Add(inputValue);
        
        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration4', () => {
        // Arrange.
        const inputValue = '//\n\n';
        const expectedResult = 0;
        
        // Act.
        const actualResult = act_Add(inputValue);
        
        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration5', () => {
        // Arrange.
        const inputValue = '//-\n';
        const expectedResult = 0;
        
        // Act.
        const actualResult = act_Add(inputValue);
        
        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration6', () => {
        // Arrange.
        const inputValue = '//-1\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration7', () => {
        // Arrange.
        const inputValue = '//[$]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration8', () => {
        // Arrange.
        const inputValue = '//[$$]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration9', () => {
        // Arrange.
        const inputValue = '//[sep]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration10', () => {
        // Arrange.
        const inputValue = '//[\n]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration11', () => {
        // Arrange.
        const inputValue = '//[-]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration12', () => {
        // Arrange.
        const inputValue = '//[-1]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration13', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration14', () => {
        // Arrange.
        const inputValue = '//[*][%]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration15', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration16', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration17', () => {
        // Arrange.
        const inputValue = '//[[][]]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration18', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration19', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration20', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration21', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return 0 when called with custom separator declaration.
     */
    it('test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration22', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleInteger1', () => {
        // Arrange.
        const inputValue = '0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleInteger2', () => {
        // Arrange.
        const inputValue = '1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleInteger3', () => {
        // Arrange.
        const inputValue = '1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleInteger4', () => {
        // Arrange.
        const inputValue = '1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration1', () => {
        // Arrange.
        const inputValue = '//$\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration2', () => {
        // Arrange.
        const inputValue = '//$\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration3', () => {
        // Arrange.
        const inputValue = '//$\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration4', () => {
        // Arrange.
        const inputValue = '//$\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration5', () => {
        // Arrange.
        const inputValue = '//$$\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration6', () => {
        // Arrange.
        const inputValue = '//$$\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration7', () => {
        // Arrange.
        const inputValue = '//$$\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration8', () => {
        // Arrange.
        const inputValue = '//$$\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration9', () => {
        // Arrange.
        const inputValue = '//sep\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration10', () => {
        // Arrange.
        const inputValue = '//sep\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration11', () => {
        // Arrange.
        const inputValue = '//sep\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration12', () => {
        // Arrange.
        const inputValue = '//sep\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration13', () => {
        // Arrange.
        const inputValue = '//\n\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration14', () => {
        // Arrange.
        const inputValue = '//\n\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration15', () => {
        // Arrange.
        const inputValue = '//\n\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration16', () => {
        // Arrange.
        const inputValue = '//\n\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration17', () => {
        // Arrange.
        const inputValue = '//-\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration18', () => {
        // Arrange.
        const inputValue = '//-\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration19', () => {
        // Arrange.
        const inputValue = '//-\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration20', () => {
        // Arrange.
        const inputValue = '//-\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration21', () => {
        // Arrange.
        const inputValue = '//-1\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration22', () => {
        // Arrange.
        const inputValue = '//-1\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration23', () => {
        // Arrange.
        const inputValue = '//-1\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration24', () => {
        // Arrange.
        const inputValue = '//-1\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration25', () => {
        // Arrange.
        const inputValue = '//[$]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration26', () => {
        // Arrange.
        const inputValue = '//[$]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration27', () => {
        // Arrange.
        const inputValue = '//[$]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration28', () => {
        // Arrange.
        const inputValue = '//[$]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration29', () => {
        // Arrange.
        const inputValue = '//[$$]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration30', () => {
        // Arrange.
        const inputValue = '//[$$]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration31', () => {
        // Arrange.
        const inputValue = '//[$$]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration32', () => {
        // Arrange.
        const inputValue = '//[$$]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration33', () => {
        // Arrange.
        const inputValue = '//[sep]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration34', () => {
        // Arrange.
        const inputValue = '//[sep]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration35', () => {
        // Arrange.
        const inputValue = '//[sep]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration36', () => {
        // Arrange.
        const inputValue = '//[sep]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration37', () => {
        // Arrange.
        const inputValue = '//[\n]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration38', () => {
        // Arrange.
        const inputValue = '//[\n]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration39', () => {
        // Arrange.
        const inputValue = '//[\n]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration40', () => {
        // Arrange.
        const inputValue = '//[\n]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration41', () => {
        // Arrange.
        const inputValue = '//[-]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration42', () => {
        // Arrange.
        const inputValue = '//[-]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration43', () => {
        // Arrange.
        const inputValue = '//[-]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration44', () => {
        // Arrange.
        const inputValue = '//[-]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration45', () => {
        // Arrange.
        const inputValue = '//[-1]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration46', () => {
        // Arrange.
        const inputValue = '//[-1]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration47', () => {
        // Arrange.
        const inputValue = '//[-1]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration48', () => {
        // Arrange.
        const inputValue = '//[-1]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration49', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration50', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration51', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration52', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration53', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration54', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration55', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration56', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration57', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration58', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration59', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration60', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration61', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration62', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration63', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration64', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration65', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration66', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration67', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration68', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration69', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration70', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration71', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration72', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration73', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration74', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration75', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration76', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration77', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration78', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration79', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration80', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration81', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration82', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration83', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration84', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration85', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration86', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration87', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the input when called with a single integer number.
     */
    it('test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration88', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1001';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers1', () => {
        // Arrange.
        const inputValue = '0;0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers2', () => {
        // Arrange.
        const inputValue = '1;0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers3', () => {
        // Arrange.
        const inputValue = '0;1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers4', () => {
        // Arrange.
        const inputValue = '0;1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers5', () => {
        // Arrange.
        const inputValue = '1;1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers6', () => {
        // Arrange.
        const inputValue = '1;1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers7', () => {
        // Arrange.
        const inputValue = '1000;1001';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers8', () => {
        // Arrange.
        const inputValue = '1;2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers9', () => {
        // Arrange.
        const inputValue = '0\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers10', () => {
        // Arrange.
        const inputValue = '1\n0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers11', () => {
        // Arrange.
        const inputValue = '0\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers12', () => {
        // Arrange.
        const inputValue = '0\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers13', () => {
        // Arrange.
        const inputValue = '1\n1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers14', () => {
        // Arrange.
        const inputValue = '1\n1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers15', () => {
        // Arrange.
        const inputValue = '1000\n1001';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers16', () => {
        // Arrange.
        const inputValue = '1\n2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers17', () => {
        // Arrange.
        const inputValue = '0\n0;0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers18', () => {
        // Arrange.
        const inputValue = '1\n0;0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers19', () => {
        // Arrange.
        const inputValue = '0\n1;0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers20', () => {
        // Arrange.
        const inputValue = '0\n0;1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers21', () => {
        // Arrange.
        const inputValue = '0\n0;1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers22', () => {
        // Arrange.
        const inputValue = '1\n0;1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers23', () => {
        // Arrange.
        const inputValue = '0\n1;1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers24', () => {
        // Arrange.
        const inputValue = '1\n1001;1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers25', () => {
        // Arrange.
        const inputValue = '1;2\n3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers26', () => {
        // Arrange.
        const inputValue = '1;2\n3;4\n5;6\n7;8\n9;10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration1', () => {
        // Arrange.
        const inputValue = '//$\n0$0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration2', () => {
        // Arrange.
        const inputValue = '//$\n1$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration3', () => {
        // Arrange.
        const inputValue = '//$\n0$1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration4', () => {
        // Arrange.
        const inputValue = '//$\n0$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration5', () => {
        // Arrange.
        const inputValue = '//$\n1$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration6', () => {
        // Arrange.
        const inputValue = '//$\n1$1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration7', () => {
        // Arrange.
        const inputValue = '//$\n1001$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration8', () => {
        // Arrange.
        const inputValue = '//$\n1$2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration9', () => {
        // Arrange.
        const inputValue = '//$\n0$0$0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration10', () => {
        // Arrange.
        const inputValue = '//$\n1$0$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration11', () => {
        // Arrange.
        const inputValue = '//$\n0$1$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration12', () => {
        // Arrange.
        const inputValue = '//$\n0$0$1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration13', () => {
        // Arrange.
        const inputValue = '//$\n0$0$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration14', () => {
        // Arrange.
        const inputValue = '//$\n1$0$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration15', () => {
        // Arrange.
        const inputValue = '//$\n0$1$1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration16', () => {
        // Arrange.
        const inputValue = '//$\n1$1001$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration17', () => {
        // Arrange.
        const inputValue = '//$\n1$2$3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration18', () => {
        // Arrange.
        const inputValue = '//$\n1$2$3$4$5$6$7$8$9$10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration19', () => {
        // Arrange.
        const inputValue = '//$$\n0$$0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration20', () => {
        // Arrange.
        const inputValue = '//$$\n1$$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration21', () => {
        // Arrange.
        const inputValue = '//$$\n0$$1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration22', () => {
        // Arrange.
        const inputValue = '//$$\n0$$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration23', () => {
        // Arrange.
        const inputValue = '//$$\n1$$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration24', () => {
        // Arrange.
        const inputValue = '//$$\n1$$1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration25', () => {
        // Arrange.
        const inputValue = '//$$\n1001$$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration26', () => {
        // Arrange.
        const inputValue = '//$$\n1$$2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration27', () => {
        // Arrange.
        const inputValue = '//$$\n0$$0$$0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration28', () => {
        // Arrange.
        const inputValue = '//$$\n1$$0$$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration29', () => {
        // Arrange.
        const inputValue = '//$$\n0$$1$$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration30', () => {
        // Arrange.
        const inputValue = '//$$\n0$$0$$1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration31', () => {
        // Arrange.
        const inputValue = '//$$\n0$$0$$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration32', () => {
        // Arrange.
        const inputValue = '//$$\n1$$0$$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration33', () => {
        // Arrange.
        const inputValue = '//$$\n0$$1$$1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration34', () => {
        // Arrange.
        const inputValue = '//$$\n1$$1001$$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration35', () => {
        // Arrange.
        const inputValue = '//$$\n1$$2$$3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration36', () => {
        // Arrange.
        const inputValue = '//$$\n1$$2$$3$$4$$5$$6$$7$$8$$9$$10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration37', () => {
        // Arrange.
        const inputValue = '//sep\n0sep0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration38', () => {
        // Arrange.
        const inputValue = '//sep\n1sep0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration39', () => {
        // Arrange.
        const inputValue = '//sep\n0sep1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration40', () => {
        // Arrange.
        const inputValue = '//sep\n0sep1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration41', () => {
        // Arrange.
        const inputValue = '//sep\n1sep1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration42', () => {
        // Arrange.
        const inputValue = '//sep\n1sep1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration43', () => {
        // Arrange.
        const inputValue = '//sep\n1001sep1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration44', () => {
        // Arrange.
        const inputValue = '//sep\n1sep2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration45', () => {
        // Arrange.
        const inputValue = '//sep\n0sep0sep0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration46', () => {
        // Arrange.
        const inputValue = '//sep\n1sep0sep0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration47', () => {
        // Arrange.
        const inputValue = '//sep\n0sep1sep0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration48', () => {
        // Arrange.
        const inputValue = '//sep\n0sep0sep1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration49', () => {
        // Arrange.
        const inputValue = '//sep\n0sep0sep1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration50', () => {
        // Arrange.
        const inputValue = '//sep\n1sep0sep1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration51', () => {
        // Arrange.
        const inputValue = '//sep\n0sep1sep1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration52', () => {
        // Arrange.
        const inputValue = '//sep\n1sep1001sep1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration53', () => {
        // Arrange.
        const inputValue = '//sep\n1sep2sep3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration54', () => {
        // Arrange.
        const inputValue = '//sep\n1sep2sep3sep4sep5sep6sep7sep8sep9sep10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration55', () => {
        // Arrange.
        const inputValue = '//\n\n0\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration56', () => {
        // Arrange.
        const inputValue = '//\n\n1\n0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration57', () => {
        // Arrange.
        const inputValue = '//\n\n0\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration58', () => {
        // Arrange.
        const inputValue = '//\n\n0\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration59', () => {
        // Arrange.
        const inputValue = '//\n\n1\n1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration60', () => {
        // Arrange.
        const inputValue = '//\n\n1\n1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration61', () => {
        // Arrange.
        const inputValue = '//\n\n1001\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration62', () => {
        // Arrange.
        const inputValue = '//\n\n1\n2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration63', () => {
        // Arrange.
        const inputValue = '//\n\n0\n0\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration64', () => {
        // Arrange.
        const inputValue = '//\n\n1\n0\n0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration65', () => {
        // Arrange.
        const inputValue = '//\n\n0\n1\n0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration66', () => {
        // Arrange.
        const inputValue = '//\n\n0\n0\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration67', () => {
        // Arrange.
        const inputValue = '//\n\n0\n0\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration68', () => {
        // Arrange.
        const inputValue = '//\n\n1\n0\n1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration69', () => {
        // Arrange.
        const inputValue = '//\n\n0\n1\n1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration70', () => {
        // Arrange.
        const inputValue = '//\n\n1\n1001\n1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration71', () => {
        // Arrange.
        const inputValue = '//\n\n1\n2\n3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration72', () => {
        // Arrange.
        const inputValue = '//\n\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration73', () => {
        // Arrange.
        const inputValue = '//-\n0-0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration74', () => {
        // Arrange.
        const inputValue = '//-\n1-0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration75', () => {
        // Arrange.
        const inputValue = '//-\n0-1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration76', () => {
        // Arrange.
        const inputValue = '//-\n0-1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration77', () => {
        // Arrange.
        const inputValue = '//-\n1-1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration78', () => {
        // Arrange.
        const inputValue = '//-\n1-1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration79', () => {
        // Arrange.
        const inputValue = '//-\n1001-1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration80', () => {
        // Arrange.
        const inputValue = '//-\n1-2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration81', () => {
        // Arrange.
        const inputValue = '//-\n0-0-0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration82', () => {
        // Arrange.
        const inputValue = '//-\n1-0-0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration83', () => {
        // Arrange.
        const inputValue = '//-\n0-1-0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration84', () => {
        // Arrange.
        const inputValue = '//-\n0-0-1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration85', () => {
        // Arrange.
        const inputValue = '//-\n0-0-1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration86', () => {
        // Arrange.
        const inputValue = '//-\n1-0-1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration87', () => {
        // Arrange.
        const inputValue = '//-\n0-1-1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration88', () => {
        // Arrange.
        const inputValue = '//-\n1-1001-1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration89', () => {
        // Arrange.
        const inputValue = '//-\n1-2-3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration90', () => {
        // Arrange.
        const inputValue = '//-\n1-2-3-4-5-6-7-8-9-10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration91', () => {
        // Arrange.
        const inputValue = '//-1\n0-10';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration92', () => {
        // Arrange.
        const inputValue = '//-1\n1-10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration93', () => {
        // Arrange.
        const inputValue = '//-1\n0-11';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration94', () => {
        // Arrange.
        const inputValue = '//-1\n0-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration95', () => {
        // Arrange.
        const inputValue = '//-1\n1-11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration96', () => {
        // Arrange.
        const inputValue = '//-1\n1-11001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration97', () => {
        // Arrange.
        const inputValue = '//-1\n1001-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration98', () => {
        // Arrange.
        const inputValue = '//-1\n1-12';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration99', () => {
        // Arrange.
        const inputValue = '//-1\n0-10-10';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration100', () => {
        // Arrange.
        const inputValue = '//-1\n1-10-10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration101', () => {
        // Arrange.
        const inputValue = '//-1\n0-11-10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration102', () => {
        // Arrange.
        const inputValue = '//-1\n0-10-11';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration103', () => {
        // Arrange.
        const inputValue = '//-1\n0-10-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration104', () => {
        // Arrange.
        const inputValue = '//-1\n1-10-11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration105', () => {
        // Arrange.
        const inputValue = '//-1\n0-11-11001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration106', () => {
        // Arrange.
        const inputValue = '//-1\n1-11001-11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration107', () => {
        // Arrange.
        const inputValue = '//-1\n1-12-13';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration108', () => {
        // Arrange.
        const inputValue = '//-1\n1-12-13-14-15-16-17-18-19-110';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration109', () => {
        // Arrange.
        const inputValue = '//[$]\n0$0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration110', () => {
        // Arrange.
        const inputValue = '//[$]\n1$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration111', () => {
        // Arrange.
        const inputValue = '//[$]\n0$1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration112', () => {
        // Arrange.
        const inputValue = '//[$]\n0$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration113', () => {
        // Arrange.
        const inputValue = '//[$]\n1$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration114', () => {
        // Arrange.
        const inputValue = '//[$]\n1$1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration115', () => {
        // Arrange.
        const inputValue = '//[$]\n1001$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration116', () => {
        // Arrange.
        const inputValue = '//[$]\n1$2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration117', () => {
        // Arrange.
        const inputValue = '//[$]\n0$0$0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration118', () => {
        // Arrange.
        const inputValue = '//[$]\n1$0$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration119', () => {
        // Arrange.
        const inputValue = '//[$]\n0$1$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration120', () => {
        // Arrange.
        const inputValue = '//[$]\n0$0$1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration121', () => {
        // Arrange.
        const inputValue = '//[$]\n0$0$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration122', () => {
        // Arrange.
        const inputValue = '//[$]\n1$0$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration123', () => {
        // Arrange.
        const inputValue = '//[$]\n0$1$1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration124', () => {
        // Arrange.
        const inputValue = '//[$]\n1$1001$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration125', () => {
        // Arrange.
        const inputValue = '//[$]\n1$2$3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration126', () => {
        // Arrange.
        const inputValue = '//[$]\n1$2$3$4$5$6$7$8$9$10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration127', () => {
        // Arrange.
        const inputValue = '//[$$]\n0$$0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration128', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration129', () => {
        // Arrange.
        const inputValue = '//[$$]\n0$$1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration130', () => {
        // Arrange.
        const inputValue = '//[$$]\n0$$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration131', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration132', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration133', () => {
        // Arrange.
        const inputValue = '//[$$]\n1001$$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration134', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration135', () => {
        // Arrange.
        const inputValue = '//[$$]\n0$$0$$0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration136', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$0$$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration137', () => {
        // Arrange.
        const inputValue = '//[$$]\n0$$1$$0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration138', () => {
        // Arrange.
        const inputValue = '//[$$]\n0$$0$$1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration139', () => {
        // Arrange.
        const inputValue = '//[$$]\n0$$0$$1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration140', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$0$$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration141', () => {
        // Arrange.
        const inputValue = '//[$$]\n0$$1$$1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration142', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$1001$$1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration143', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$2$$3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration144', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$2$$3$$4$$5$$6$$7$$8$$9$$10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration145', () => {
        // Arrange.
        const inputValue = '//[sep]\n0sep0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration146', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration147', () => {
        // Arrange.
        const inputValue = '//[sep]\n0sep1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration148', () => {
        // Arrange.
        const inputValue = '//[sep]\n0sep1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration149', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration150', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration151', () => {
        // Arrange.
        const inputValue = '//[sep]\n1001sep1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration152', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration153', () => {
        // Arrange.
        const inputValue = '//[sep]\n0sep0sep0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration154', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep0sep0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration155', () => {
        // Arrange.
        const inputValue = '//[sep]\n0sep1sep0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration156', () => {
        // Arrange.
        const inputValue = '//[sep]\n0sep0sep1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration157', () => {
        // Arrange.
        const inputValue = '//[sep]\n0sep0sep1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration158', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep0sep1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration159', () => {
        // Arrange.
        const inputValue = '//[sep]\n0sep1sep1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration160', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep1001sep1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration161', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep2sep3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration162', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep2sep3sep4sep5sep6sep7sep8sep9sep10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration163', () => {
        // Arrange.
        const inputValue = '//[\n]\n0\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration164', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration165', () => {
        // Arrange.
        const inputValue = '//[\n]\n0\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration166', () => {
        // Arrange.
        const inputValue = '//[\n]\n0\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration167', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration168', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration169', () => {
        // Arrange.
        const inputValue = '//[\n]\n1001\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration170', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration171', () => {
        // Arrange.
        const inputValue = '//[\n]\n0\n0\n0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration172', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n0\n0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration173', () => {
        // Arrange.
        const inputValue = '//[\n]\n0\n1\n0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration174', () => {
        // Arrange.
        const inputValue = '//[\n]\n0\n0\n1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration175', () => {
        // Arrange.
        const inputValue = '//[\n]\n0\n0\n1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration176', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n0\n1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration177', () => {
        // Arrange.
        const inputValue = '//[\n]\n0\n1\n1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration178', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n1001\n1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration179', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n2\n3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration180', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration181', () => {
        // Arrange.
        const inputValue = '//[-]\n0-0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration182', () => {
        // Arrange.
        const inputValue = '//[-]\n1-0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration183', () => {
        // Arrange.
        const inputValue = '//[-]\n0-1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration184', () => {
        // Arrange.
        const inputValue = '//[-]\n0-1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration185', () => {
        // Arrange.
        const inputValue = '//[-]\n1-1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration186', () => {
        // Arrange.
        const inputValue = '//[-]\n1-1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration187', () => {
        // Arrange.
        const inputValue = '//[-]\n1001-1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration188', () => {
        // Arrange.
        const inputValue = '//[-]\n1-2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration189', () => {
        // Arrange.
        const inputValue = '//[-]\n0-0-0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration190', () => {
        // Arrange.
        const inputValue = '//[-]\n1-0-0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration191', () => {
        // Arrange.
        const inputValue = '//[-]\n0-1-0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration192', () => {
        // Arrange.
        const inputValue = '//[-]\n0-0-1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration193', () => {
        // Arrange.
        const inputValue = '//[-]\n0-0-1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration194', () => {
        // Arrange.
        const inputValue = '//[-]\n1-0-1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration195', () => {
        // Arrange.
        const inputValue = '//[-]\n0-1-1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration196', () => {
        // Arrange.
        const inputValue = '//[-]\n1-1001-1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration197', () => {
        // Arrange.
        const inputValue = '//[-]\n1-2-3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration198', () => {
        // Arrange.
        const inputValue = '//[-]\n1-2-3-4-5-6-7-8-9-10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration199', () => {
        // Arrange.
        const inputValue = '//[-1]\n0-10';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration200', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration201', () => {
        // Arrange.
        const inputValue = '//[-1]\n0-11';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration202', () => {
        // Arrange.
        const inputValue = '//[-1]\n0-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration203', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration204', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-11001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration205', () => {
        // Arrange.
        const inputValue = '//[-1]\n1001-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration206', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-12';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration207', () => {
        // Arrange.
        const inputValue = '//[-1]\n0-10-10';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration208', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-10-10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration209', () => {
        // Arrange.
        const inputValue = '//[-1]\n0-11-10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration210', () => {
        // Arrange.
        const inputValue = '//[-1]\n0-10-11';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration211', () => {
        // Arrange.
        const inputValue = '//[-1]\n0-10-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration212', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-10-11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration213', () => {
        // Arrange.
        const inputValue = '//[-1]\n0-11-11001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration214', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-11001-11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration215', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-12-13';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration216', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-12-13-14-15-16-17-18-19-110';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration217', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-10';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration218', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration219', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-11';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration220', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration221', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration222', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-11001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration223', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1001-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration224', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-12';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration225', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-20';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration226', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-20';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration227', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-21';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration228', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration229', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-21000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration230', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-21001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration231', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1001-21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration232', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-22';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration233', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-10-20';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration234', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-10-20';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration235', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-11-20';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration236', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-10-21';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration237', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-10-21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration238', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-10-21000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration239', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n0-11-21001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration240', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-11001-21000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration241', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-12-23';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration242', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-12-23-14-25-16-27-18-29-110';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration243', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0*0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration244', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration245', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0*1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration246', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0*1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration247', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration248', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration249', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1001*1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration250', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration251', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0%0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration252', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration253', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0%1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration254', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0%1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration255', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration256', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration257', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1001%1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration258', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration259', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0*0%0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration260', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*0%0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration261', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0*1%0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration262', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0*0%1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration263', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0*0%1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration264', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*0%1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration265', () => {
        // Arrange.
        const inputValue = '//[*][%]\n0*1%1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration266', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*1001%1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration267', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*2%3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration268', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*2%3*4%5*6%7*8%9*10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration269', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0**0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration270', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration271', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0**1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration272', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0**1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration273', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration274', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration275', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1001**1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration276', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration277', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0%%0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration278', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration279', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0%%1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration280', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0%%1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration281', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration282', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration283', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1001%%1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration284', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration285', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0**0%%0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration286', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**0%%0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration287', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0**1%%0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration288', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0**0%%1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration289', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0**0%%1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration290', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**0%%1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration291', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n0**1%%1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration292', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**1001%%1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration293', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**2%%3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration294', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**2%%3**4%%5**6%%7**8%%9**10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration295', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep10';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration296', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration297', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep11';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration298', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration299', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration300', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep11001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration301', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1001sep11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration302', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep12';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration303', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep20';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration304', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep20';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration305', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep21';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration306', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration307', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep21000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration308', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep21001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration309', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1001sep21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration310', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep22';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration311', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep10sep20';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration312', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep10sep20';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration313', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep11sep20';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration314', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep10sep21';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration315', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep10sep21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration316', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep10sep21000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration317', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n0sep11sep21001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration318', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep11001sep21000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration319', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep12sep23';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration320', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep12sep23sep14sep25sep16sep27sep18sep29sep110';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration321', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0[0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration322', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration323', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0[1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration324', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0[1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration325', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration326', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration327', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1001[1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration328', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration329', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0]0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration330', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1]0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration331', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0]1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration332', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0]1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration333', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1]1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration334', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1]1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration335', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1001]1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration336', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1]2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration337', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0[0]0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration338', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[0]0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration339', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0[1]0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration340', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0[0]1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration341', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0[0]1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration342', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[0]1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration343', () => {
        // Arrange.
        const inputValue = '//[[][]]\n0[1]1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration344', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[1001]1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration345', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[2]3';
        const expectedResult = 6;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration346', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[2]3[4]5[6]7[8]9[10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration347', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration348', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration349', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration350', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration351', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration352', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration353', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1001+1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration354', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration355', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0!0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration356', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1!0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration357', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0!1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration358', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0!1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration359', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1!1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration360', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1!1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration361', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1001!1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration362', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1!2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration363', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0#0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration364', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1#0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration365', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0#1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration366', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0#1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration367', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1#1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration368', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1#1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration369', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1001#1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration370', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1#2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration371', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+0!0#0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration372', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+0!0#0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration373', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+1!0#0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration374', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+0!1#0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration375', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+0!0#1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration376', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+0!1000#0';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration377', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+0!1000#0';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration378', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n0+1!1001#0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration379', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+1001!1000#0';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration380', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+2!3#4';
        const expectedResult = 10;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration381', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+2!3#4+5!6#7+8!9#10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration382', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration383', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration384', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration385', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration386', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration387', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration388', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1001++1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration389', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration390', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0!!0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration391', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1!!0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration392', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0!!1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration393', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0!!1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration394', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1!!1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration395', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1!!1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration396', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1001!!1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration397', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1!!2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration398', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0##0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration399', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1##0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration400', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0##1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration401', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0##1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration402', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1##1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration403', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1##1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration404', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1001##1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration405', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1##2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration406', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++0!!0##0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration407', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++0!!0##0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration408', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++1!!0##0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration409', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++0!!1##0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration410', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++0!!0##1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration411', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++0!!1000##0';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration412', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++0!!1000##0';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration413', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n0++1!!1001##0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration414', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++1001!!1000##0';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration415', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++2!!3##4';
        const expectedResult = 10;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration416', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++2!!3##4++5!!6##7++8!!9##10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration417', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-10';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration418', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration419', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-11';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration420', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration421', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration422', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-11001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration423', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1001-11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration424', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-12';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration425', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-20';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration426', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-20';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration427', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-21';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration428', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration429', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-21000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration430', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-21001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration431', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1001-21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration432', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-22';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration433', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-30';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration434', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration435', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-31';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration436', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-31000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration437', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-31000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration438', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-31001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration439', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1001-31000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration440', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-32';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration441', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-10-20-30';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration442', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-10-20-30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration443', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-11-20-30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration444', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-10-21-30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration445', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-10-20-31';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration446', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-10-21000-30';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration447', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-10-21000-30';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration448', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n0-11-21001-30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration449', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-11001-21000-30';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration450', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-12-23-34';
        const expectedResult = 10;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration451', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-12-23-34-15-26-37-18-29-310';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration452', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep10';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration453', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep10';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration454', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep11';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration455', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration456', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep11000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration457', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep11001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration458', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1001sep11000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration459', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep12';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration460', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep20';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration461', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep20';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration462', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep21';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration463', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration464', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep21000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration465', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep21001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration466', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1001sep21000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration467', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep22';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration468', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep30';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration469', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration470', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep31';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration471', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep31000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration472', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep31000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration473', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep31001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration474', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1001sep31000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration475', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep32';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration476', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep10sep20sep30';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration477', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep10sep20sep30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration478', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep11sep20sep30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration479', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep10sep21sep30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration480', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep10sep20sep31';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration481', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep10sep21000sep30';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration482', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep10sep21000sep30';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration483', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n0sep11sep21001sep30';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration484', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep11001sep21000sep30';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration485', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep34';
        const expectedResult = 10;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration486', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep34sep15sep26sep37sep18sep29sep310';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration487', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration488', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration489', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration490', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration491', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration492', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration493', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1001?1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration494', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration495', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0??0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration496', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1??0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration497', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0??1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration498', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0??1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration499', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1??1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration500', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1??1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration501', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1001??1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration502', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1??2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration503', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0???0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration504', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1???0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration505', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0???1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration506', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0???1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration507', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1???1000';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration508', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1???1001';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration509', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1001???1000';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration510', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1???2';
        const expectedResult = 3;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration511', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?0??0???0';
        const expectedResult = 0;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration512', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?0??0???0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration513', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?1??0???0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration514', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?0??1???0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration515', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?0??0???1';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration516', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?0??1000???0';
        const expectedResult = 1000;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration517', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?0??1000???0';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration518', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n0?1??1001???0';
        const expectedResult = 1;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration519', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?1001??1000???0';
        const expectedResult = 1001;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration520', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?2??3???4';
        const expectedResult = 10;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
     */
    it('test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration521', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?2??3???4?5??6???7?8??9???10';
        const expectedResult = 55;

        // Act.
        const actualResult = act_Add(inputValue);

        // Assert.
        expect(actualResult).toBe(expectedResult);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator1', () => {
        // Arrange.
        const inputValue = '1;';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator2', () => {
        // Arrange.
        const inputValue = '1;2;';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator3', () => {
        // Arrange.
        const inputValue = '1\n';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator4', () => {
        // Arrange.
        const inputValue = '1\n2\n';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator5', () => {
        // Arrange.
        const inputValue = '1;2\n';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator6', () => {
        // Arrange.
        const inputValue = '1\n2;';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration1', () => {
        // Arrange.
        const inputValue = '//$\n1$';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration2', () => {
        // Arrange.
        const inputValue = '//$\n1$2$';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration3', () => {
        // Arrange.
        const inputValue = '//$$\n1$$';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration4', () => {
        // Arrange.
        const inputValue = '//$$\n1$$2$$';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration5', () => {
        // Arrange.
        const inputValue = '//sep\n1sep';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration6', () => {
        // Arrange.
        const inputValue = '//sep\n1sep2sep';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration7', () => {
        // Arrange.
        const inputValue = '//\n\n1\n';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration8', () => {
        // Arrange.
        const inputValue = '//\n\n1\n2\n';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration9', () => {
        // Arrange.
        const inputValue = '//-\n1-';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration10', () => {
        // Arrange.
        const inputValue = '//-\n1-2-';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration11', () => {
        // Arrange.
        const inputValue = '//-1\n1-1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration12', () => {
        // Arrange.
        const inputValue = '//-1\n1-12-1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration13', () => {
        // Arrange.
        const inputValue = '//[$]\n1$';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration14', () => {
        // Arrange.
        const inputValue = '//[$]\n1$2$';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration15', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration16', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$2$$';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration17', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration18', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep2sep';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration19', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration20', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n2\n';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration21', () => {
        // Arrange.
        const inputValue = '//[-]\n1-';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration22', () => {
        // Arrange.
        const inputValue = '//[-]\n1-2-';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration23', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration24', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-12-1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration25', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration26', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-2';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration27', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-12-2';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration28', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-22-1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration29', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration30', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration31', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*2%';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration32', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%2*';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration33', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration34', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration35', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**2%%';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration36', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%2**';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration37', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration38', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep2';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration39', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep12sep2';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration40', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep22sep1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration41', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration42', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1]';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration43', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[2]';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration44', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1]2[';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration45', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration46', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1!';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration47', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1#';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration48', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+2!3#';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration49', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration50', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1!!';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration51', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1##';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration52', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++2!!3##';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration53', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration54', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-2';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration55', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-3';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration56', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-12-23-3';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration57', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep1';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration58', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep2';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration59', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep3';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration60', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep12sep23sep3';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration61', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration62', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1??';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration63', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1???';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input ending with a separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration64', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?2??3???';
        const errorMessage = 'Number expected but EOF found.';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber1', () => {
        // Arrange.
        const inputValue = '-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber2', () => {
        // Arrange.
        const inputValue = '-1;2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber3', () => {
        // Arrange.
        const inputValue = '1;-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber4', () => {
        // Arrange.
        const inputValue = '-1;-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber5', () => {
        // Arrange.
        const inputValue = '-1\n2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber6', () => {
        // Arrange.
        const inputValue = '1\n-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber7', () => {
        // Arrange.
        const inputValue = '-1\n-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber8', () => {
        // Arrange.
        const inputValue = '-1\n-2;-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration1', () => {
        // Arrange.
        const inputValue = '//$\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration2', () => {
        // Arrange.
        const inputValue = '//$\n-1$2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration3', () => {
        // Arrange.
        const inputValue = '//$\n1$-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration4', () => {
        // Arrange.
        const inputValue = '//$\n-1$-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration5', () => {
        // Arrange.
        const inputValue = '//$$\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration6', () => {
        // Arrange.
        const inputValue = '//$$\n-1$$2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration7', () => {
        // Arrange.
        const inputValue = '//$$\n1$$-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration8', () => {
        // Arrange.
        const inputValue = '//$$\n-1$$-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration9', () => {
        // Arrange.
        const inputValue = '//sep\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration10', () => {
        // Arrange.
        const inputValue = '//sep\n-1sep2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration11', () => {
        // Arrange.
        const inputValue = '//sep\n1sep-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration12', () => {
        // Arrange.
        const inputValue = '//sep\n-1sep-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration13', () => {
        // Arrange.
        const inputValue = '//\n\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration14', () => {
        // Arrange.
        const inputValue = '//\n\n-1\n2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration15', () => {
        // Arrange.
        const inputValue = '//\n\n1\n-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration16', () => {
        // Arrange.
        const inputValue = '//\n\n-1\n-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration17', () => {
        // Arrange.
        const inputValue = '//-1\n-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration18', () => {
        // Arrange.
        const inputValue = '//-1\n-2-13';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration19', () => {
        // Arrange.
        const inputValue = '//-1\n2-1-3';
        const errorMessage = 'Negatives not allowed : -3';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration20', () => {
        // Arrange.
        const inputValue = '//-1\n-2-1-2';
        const errorMessage = 'Negatives not allowed : -2, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration21', () => {
        // Arrange.
        const inputValue = '//[$]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration22', () => {
        // Arrange.
        const inputValue = '//[$]\n-1$2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration23', () => {
        // Arrange.
        const inputValue = '//[$]\n1$-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration24', () => {
        // Arrange.
        const inputValue = '//[$]\n-1$-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration25', () => {
        // Arrange.
        const inputValue = '//[$$]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration26', () => {
        // Arrange.
        const inputValue = '//[$$]\n-1$$2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration27', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration28', () => {
        // Arrange.
        const inputValue = '//[$$]\n-1$$-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration29', () => {
        // Arrange.
        const inputValue = '//[sep]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration30', () => {
        // Arrange.
        const inputValue = '//[sep]\n-1sep2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration31', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sep-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration32', () => {
        // Arrange.
        const inputValue = '//[sep]\n-1sep-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration33', () => {
        // Arrange.
        const inputValue = '//[\n]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration34', () => {
        // Arrange.
        const inputValue = '//[\n]\n-1\n2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration35', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration36', () => {
        // Arrange.
        const inputValue = '//[\n]\n-1\n-1';
        const errorMessage = 'Negatives not allowed : -1, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration37', () => {
        // Arrange.
        const inputValue = '//[-1]\n-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration38', () => {
        // Arrange.
        const inputValue = '//[-1]\n-2-13';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration39', () => {
        // Arrange.
        const inputValue = '//[-1]\n2-1-3';
        const errorMessage = 'Negatives not allowed : -3';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration40', () => {
        // Arrange.
        const inputValue = '//[-1]\n-2-1-2';
        const errorMessage = 'Negatives not allowed : -2, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration41', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-3';
        const errorMessage = 'Negatives not allowed : -3';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration42', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-3-14';
        const errorMessage = 'Negatives not allowed : -3';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration43', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-3-24';
        const errorMessage = 'Negatives not allowed : -3';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration44', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n3-1-4';
        const errorMessage = 'Negatives not allowed : -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration45', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n3-2-4';
        const errorMessage = 'Negatives not allowed : -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration46', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-3-1-4';
        const errorMessage = 'Negatives not allowed : -3, -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration47', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-3-2-4';
        const errorMessage = 'Negatives not allowed : -3, -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration48', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-3-1-4-2-3';
        const errorMessage = 'Negatives not allowed : -3, -4, -3';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration49', () => {
        // Arrange.
        const inputValue = '//[*][%]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration50', () => {
        // Arrange.
        const inputValue = '//[*][%]\n-1*2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration51', () => {
        // Arrange.
        const inputValue = '//[*][%]\n-1%2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration52', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration53', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration54', () => {
        // Arrange.
        const inputValue = '//[*][%]\n-1*-2';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration55', () => {
        // Arrange.
        const inputValue = '//[*][%]\n-1%-2';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration56', () => {
        // Arrange.
        const inputValue = '//[*][%]\n-1*-2%-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration57', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration58', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n-1**2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration59', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n-1%%2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration60', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration61', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration62', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n-1**-2';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration63', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n-1%%-2';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration64', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n-1**-2%%-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration65', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration66', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n-1sep12';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration67', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n-1sep22';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration68', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep1-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration69', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep2-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration70', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n-1sep1-2';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration71', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n-1sep2-2';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration72', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n-1sep1-2sep2-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration73', () => {
        // Arrange.
        const inputValue = '//[[][]]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration74', () => {
        // Arrange.
        const inputValue = '//[[][]]\n-1[2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration75', () => {
        // Arrange.
        const inputValue = '//[[][]]\n-1]2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration76', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration77', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1]-2';
        const errorMessage = 'Negatives not allowed : -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration78', () => {
        // Arrange.
        const inputValue = '//[[][]]\n-1[-2';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration79', () => {
        // Arrange.
        const inputValue = '//[[][]]\n-1]-2';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration80', () => {
        // Arrange.
        const inputValue = '//[[][]]\n-1[-2]-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration81', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration82', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1+2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration83', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1!2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration84', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1#2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration85', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1+-2!3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration86', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1!-2#3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration87', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1#-2+3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration88', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1+-2!-3#-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -3, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration89', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration90', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1++2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration91', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1!!2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration92', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1##2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration93', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1++-2!!3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration94', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1!!-2##3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration95', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1##-2++3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration96', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1++-2!!-3##-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -3, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration97', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4';
        const errorMessage = 'Negatives not allowed : -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration98', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4-15';
        const errorMessage = 'Negatives not allowed : -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration99', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4-25';
        const errorMessage = 'Negatives not allowed : -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration100', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4-35';
        const errorMessage = 'Negatives not allowed : -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration101', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4-1-5-26';
        const errorMessage = 'Negatives not allowed : -4, -5';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration102', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4-2-5-36';
        const errorMessage = 'Negatives not allowed : -4, -5';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration103', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4-3-5-16';
        const errorMessage = 'Negatives not allowed : -4, -5';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration104', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4-1-5-2-6-3-4';
        const errorMessage = 'Negatives not allowed : -4, -5, -6, -4';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration105', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration106', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1sep12';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration107', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1sep22';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration108', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1sep32';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration109', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1sep1-2sep23';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration110', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1sep2-2sep33';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration111', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1sep3-2sep13';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration112', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1sep1-2sep2-3sep3-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -3, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration113', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration114', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1?2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration115', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1??2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration116', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1???2';
        const errorMessage = 'Negatives not allowed : -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration117', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1?-2??3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration118', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1??-2???3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration119', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1???-2?3';
        const errorMessage = 'Negatives not allowed : -1, -2';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing at least one negative number.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration120', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1?-2??-3???-1';
        const errorMessage = 'Negatives not allowed : -1, -2, -3, -1';

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparator', () => {
        // Arrange.
        const inputValue = '1$2';
        const errorMessage = "';' or '\n' expected but '$' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration1', () => {
        // Arrange.
        const inputValue = '//$\n1;2';
        const errorMessage = "'$' expected but ';' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration2', () => {
        // Arrange.
        const inputValue = '//$$\n1;2';
        const errorMessage = "'$$' expected but ';' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration3', () => {
        // Arrange.
        const inputValue = '//sep\n1|2';
        const errorMessage = "'sep' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration4', () => {
        // Arrange.
        const inputValue = '//\n\n1|2';
        const errorMessage = "'\n' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration5', () => {
        // Arrange.
        const inputValue = '//-\n1|2';
        const errorMessage = "'-' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration6', () => {
        // Arrange.
        const inputValue = '//-1\n1|2';
        const errorMessage = "'-1' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration7', () => {
        // Arrange.
        const inputValue = '//[$]\n1;2';
        const errorMessage = "'$' expected but ';' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration8', () => {
        // Arrange.
        const inputValue = '//[$$]\n1;2';
        const errorMessage = "'$$' expected but ';' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration9', () => {
        // Arrange.
        const inputValue = '//[sep]\n1|2';
        const errorMessage = "'sep' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration10', () => {
        // Arrange.
        const inputValue = '//[\n]\n1|2';
        const errorMessage = "'\n' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration11', () => {
        // Arrange.
        const inputValue = '//[-]\n1|2';
        const errorMessage = "'-' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration12', () => {
        // Arrange.
        const inputValue = '//[-1]\n1|2';
        const errorMessage = "'-1' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration13', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1|2';
        const errorMessage = "'-1' or '-2' expected but '|' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration14', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1=2';
        const errorMessage = "'*' or '%' expected but '=' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration15', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1=2';
        const errorMessage = "'**' or '%%' expected but '=' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration16', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1del2';
        const errorMessage = "'sep1' or 'sep2' expected but 'del' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration17', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1{2';
        const errorMessage = "'[' or ']' expected but '{' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration18', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1=2';
        const errorMessage = "'+' or '!' or '#' expected but '=' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration19', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1=2';
        const errorMessage = "'++' or '!!' or '##' expected but '=' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration20', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1=2';
        const errorMessage = "'-1' or '-2' or '-3' expected but '=' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration21', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1=2';
        const errorMessage = "'sep1' or 'sep2' or 'sep3' expected but '=' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing an unspecified separator.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration22', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1=2';
        const errorMessage = "'???' or '??' or '?' expected but '=' found at position 1.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext1', () => {
        // Arrange.
        const inputValue = ';1;2';
        const errorMessage = "Number expected but ';' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext2', () => {
        // Arrange.
        const inputValue = '1;;2';
        const errorMessage = "Number expected but ';' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext3', () => {
        // Arrange.
        const inputValue = '\n1\n2';
        const errorMessage = "Number expected but '\n' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext4', () => {
        // Arrange.
        const inputValue = '1\n\n2';
        const errorMessage = "Number expected but '\n' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext5', () => {
        // Arrange.
        const inputValue = ';1\n2';
        const errorMessage = "Number expected but ';' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext6', () => {
        // Arrange.
        const inputValue = '\n1;2';
        const errorMessage = "Number expected but '\n' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext7', () => {
        // Arrange.
        const inputValue = '1\n;2';
        const errorMessage = "Number expected but ';' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext8', () => {
        // Arrange.
        const inputValue = '1;\n2';
        const errorMessage = "Number expected but '\n' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration1', () => {
        // Arrange.
        const inputValue = '//$\n$1$2';
        const errorMessage = "Number expected but '$' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration2', () => {
        // Arrange.
        const inputValue = '//$\n1$$2';
        const errorMessage = "Number expected but '$' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration3', () => {
        // Arrange.
        const inputValue = '//$$\n$$1$$2';
        const errorMessage = "Number expected but '$$' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration4', () => {
        // Arrange.
        const inputValue = '//$$\n1$$$$2';
        const errorMessage = "Number expected but '$$' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration5', () => {
        // Arrange.
        const inputValue = '//sep\nsep1sep2';
        const errorMessage = "Number expected but 'sep' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration6', () => {
        // Arrange.
        const inputValue = '//sep\n1sepsep2';
        const errorMessage = "Number expected but 'sep' found at position 4.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration7', () => {
        // Arrange.
        const inputValue = '//\n\n\n1\n2';
        const errorMessage = "Number expected but '\n' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration8', () => {
        // Arrange.
        const inputValue = '//\n\n1\n\n2';
        const errorMessage = "Number expected but '\n' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration9', () => {
        // Arrange.
        const inputValue = '//-\n-1-2';
        const errorMessage = "Number expected but '-' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration10', () => {
        // Arrange.
        const inputValue = '//-\n1--2';
        const errorMessage = "Number expected but '-' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration11', () => {
        // Arrange.
        const inputValue = '//-1\n-11-12';
        const errorMessage = "Number expected but '-1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration12', () => {
        // Arrange.
        const inputValue = '//-1\n1-1-12';
        const errorMessage = "Number expected but '-1' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration13', () => {
        // Arrange.
        const inputValue = '//[$]\n$1$2';
        const errorMessage = "Number expected but '$' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration14', () => {
        // Arrange.
        const inputValue = '//[$]\n1$$2';
        const errorMessage = "Number expected but '$' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration15', () => {
        // Arrange.
        const inputValue = '//[$$]\n$$1$$2';
        const errorMessage = "Number expected but '$$' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration16', () => {
        // Arrange.
        const inputValue = '//[$$]\n1$$$$2';
        const errorMessage = "Number expected but '$$' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration17', () => {
        // Arrange.
        const inputValue = '//[sep]\nsep1sep2';
        const errorMessage = "Number expected but 'sep' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration18', () => {
        // Arrange.
        const inputValue = '//[sep]\n1sepsep2';
        const errorMessage = "Number expected but 'sep' found at position 4.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration19', () => {
        // Arrange.
        const inputValue = '//[\n]\n\n1\n2';
        const errorMessage = "Number expected but '\n' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration20', () => {
        // Arrange.
        const inputValue = '//[\n]\n1\n\n2';
        const errorMessage = "Number expected but '\n' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration21', () => {
        // Arrange.
        const inputValue = '//[-]\n-1-2';
        const errorMessage = "Number expected but '-' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration22', () => {
        // Arrange.
        const inputValue = '//[-]\n1--2';
        const errorMessage = "Number expected but '-' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration23', () => {
        // Arrange.
        const inputValue = '//[-1]\n-11-12';
        const errorMessage = "Number expected but '-1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration24', () => {
        // Arrange.
        const inputValue = '//[-1]\n1-1-12';
        const errorMessage = "Number expected but '-1' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration25', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-11-12';
        const errorMessage = "Number expected but '-1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration26', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-1-12';
        const errorMessage = "Number expected but '-1' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration27', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-21-22';
        const errorMessage = "Number expected but '-2' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration28', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-2-22';
        const errorMessage = "Number expected but '-2' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration29', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-11-22';
        const errorMessage = "Number expected but '-1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration30', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-21-12';
        const errorMessage = "Number expected but '-2' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration31', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-2-12';
        const errorMessage = "Number expected but '-1' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration32', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n1-1-22';
        const errorMessage = "Number expected but '-2' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration33', () => {
        // Arrange.
        const inputValue = '//[*][%]\n*1*2';
        const errorMessage = "Number expected but '*' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration34', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1**2';
        const errorMessage = "Number expected but '*' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration35', () => {
        // Arrange.
        const inputValue = '//[*][%]\n%1%2';
        const errorMessage = "Number expected but '%' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration36', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%%2';
        const errorMessage = "Number expected but '%' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration37', () => {
        // Arrange.
        const inputValue = '//[*][%]\n*1%2';
        const errorMessage = "Number expected but '*' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration38', () => {
        // Arrange.
        const inputValue = '//[*][%]\n%1*2';
        const errorMessage = "Number expected but '%' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration39', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1%*2';
        const errorMessage = "Number expected but '*' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration40', () => {
        // Arrange.
        const inputValue = '//[*][%]\n1*%2';
        const errorMessage = "Number expected but '%' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration41', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n**1**2';
        const errorMessage = "Number expected but '**' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration42', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1****2';
        const errorMessage = "Number expected but '**' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration43', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n%%1%%2';
        const errorMessage = "Number expected but '%%' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration44', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%%%2';
        const errorMessage = "Number expected but '%%' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration45', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n**1%%2';
        const errorMessage = "Number expected but '**' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration46', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n%%1**2';
        const errorMessage = "Number expected but '%%' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration47', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1%%**2';
        const errorMessage = "Number expected but '**' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration48', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n1**%%2';
        const errorMessage = "Number expected but '%%' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration49', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\nsep11sep12';
        const errorMessage = "Number expected but 'sep1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration50', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep1sep12';
        const errorMessage = "Number expected but 'sep1' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration51', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\nsep21sep22';
        const errorMessage = "Number expected but 'sep2' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration52', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep2sep22';
        const errorMessage = "Number expected but 'sep2' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration53', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\nsep11sep22';
        const errorMessage = "Number expected but 'sep1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration54', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\nsep21sep12';
        const errorMessage = "Number expected but 'sep2' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration55', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep2sep12';
        const errorMessage = "Number expected but 'sep1' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration56', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n1sep1sep22';
        const errorMessage = "Number expected but 'sep2' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration57', () => {
        // Arrange.
        const inputValue = '//[[][]]\n[1[2';
        const errorMessage = "Number expected but '[' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration58', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[[2';
        const errorMessage = "Number expected but '[' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration59', () => {
        // Arrange.
        const inputValue = '//[[][]]\n]1]2';
        const errorMessage = "Number expected but ']' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration60', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1]]2';
        const errorMessage = "Number expected but ']' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration61', () => {
        // Arrange.
        const inputValue = '//[[][]]\n[1]2';
        const errorMessage = "Number expected but '[' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration62', () => {
        // Arrange.
        const inputValue = '//[[][]]\n]1[2';
        const errorMessage = "Number expected but ']' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration63', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1][2';
        const errorMessage = "Number expected but '[' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration64', () => {
        // Arrange.
        const inputValue = '//[[][]]\n1[]2';
        const errorMessage = "Number expected but ']' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration65', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n+1+2';
        const errorMessage = "Number expected but '+' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration66', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1++2';
        const errorMessage = "Number expected but '+' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration67', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n!1!2';
        const errorMessage = "Number expected but '!' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration68', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1!!2';
        const errorMessage = "Number expected but '!' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration69', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n#1#2';
        const errorMessage = "Number expected but '#' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration70', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1##2';
        const errorMessage = "Number expected but '#' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration71', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n+1!2';
        const errorMessage = "Number expected but '+' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration72', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n!1#2';
        const errorMessage = "Number expected but '!' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration73', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n#1+2';
        const errorMessage = "Number expected but '#' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration74', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1+!2';
        const errorMessage = "Number expected but '!' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration75', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1!#2';
        const errorMessage = "Number expected but '#' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration76', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n1#+2';
        const errorMessage = "Number expected but '+' found at position 2.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration77', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n++1++2';
        const errorMessage = "Number expected but '++' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration78', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++++2';
        const errorMessage = "Number expected but '++' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration79', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n!!1!!2';
        const errorMessage = "Number expected but '!!' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration80', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1!!!!2';
        const errorMessage = "Number expected but '!!' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration81', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n##1##2';
        const errorMessage = "Number expected but '##' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration82', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1####2';
        const errorMessage = "Number expected but '##' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration83', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n++1!!2';
        const errorMessage = "Number expected but '++' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration84', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n!!1##2';
        const errorMessage = "Number expected but '!!' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration85', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n##1++2';
        const errorMessage = "Number expected but '##' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration86', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1++!!2';
        const errorMessage = "Number expected but '!!' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration87', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1!!##2';
        const errorMessage = "Number expected but '##' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration88', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n1##++2';
        const errorMessage = "Number expected but '++' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration89', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-11-12';
        const errorMessage = "Number expected but '-1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration90', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-1-12';
        const errorMessage = "Number expected but '-1' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration91', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-21-22';
        const errorMessage = "Number expected but '-2' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration92', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-2-22';
        const errorMessage = "Number expected but '-2' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration93', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-31-32';
        const errorMessage = "Number expected but '-3' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration94', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-3-32';
        const errorMessage = "Number expected but '-3' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration95', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-11-22';
        const errorMessage = "Number expected but '-1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration96', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-21-32';
        const errorMessage = "Number expected but '-2' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration97', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-31-12';
        const errorMessage = "Number expected but '-3' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration98', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-1-22';
        const errorMessage = "Number expected but '-2' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration99', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-2-32';
        const errorMessage = "Number expected but '-3' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration100', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n1-3-12';
        const errorMessage = "Number expected but '-1' found at position 3.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration101', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\nsep11sep12';
        const errorMessage = "Number expected but 'sep1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration102', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep1sep12';
        const errorMessage = "Number expected but 'sep1' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration103', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\nsep21sep22';
        const errorMessage = "Number expected but 'sep2' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration104', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep2sep22';
        const errorMessage = "Number expected but 'sep2' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration105', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\nsep31sep32';
        const errorMessage = "Number expected but 'sep3' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration106', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep3sep32';
        const errorMessage = "Number expected but 'sep3' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration107', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\nsep11sep22';
        const errorMessage = "Number expected but 'sep1' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration108', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\nsep21sep32';
        const errorMessage = "Number expected but 'sep2' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration109', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\nsep31sep12';
        const errorMessage = "Number expected but 'sep3' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration110', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep1sep22';
        const errorMessage = "Number expected but 'sep2' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration111', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep2sep32';
        const errorMessage = "Number expected but 'sep3' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration112', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n1sep3sep12';
        const errorMessage = "Number expected but 'sep1' found at position 5.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration113', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n?1?2';
        const errorMessage = "Number expected but '?' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration114', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n??1??2';
        const errorMessage = "Number expected but '??' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration115', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1????2';
        const errorMessage = "Number expected but '?' found at position 4.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration116', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n???1???2';
        const errorMessage = "Number expected but '???' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration117', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1??????2';
        const errorMessage = "Number expected but '???' found at position 4.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration118', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n?1??2';
        const errorMessage = "Number expected but '?' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration119', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n??1???2';
        const errorMessage = "Number expected but '??' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration120', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n???1?2';
        const errorMessage = "Number expected but '???' found at position 0.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration121', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1?????2';
        const errorMessage = "Number expected but '??' found at position 4.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration122', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n1????2';
        const errorMessage = "Number expected but '?' found at position 4.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrors', () => {
        // Arrange.
        const inputValue = '-1\n;|2;';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "';' or '\n' expected but '|' found at position 4.\n";
        errorMessage += "Number expected but ';' found at position 3.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration1', () => {
        // Arrange.
        const inputValue = '//$\n-1$$|2$';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'$' expected but '|' found at position 4.\n";
        errorMessage += "Number expected but '$' found at position 3.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration2', () => {
        // Arrange.
        const inputValue = '//$$\n-1$$$$|2$$';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'$$' expected but '|' found at position 6.\n";
        errorMessage += "Number expected but '$$' found at position 4.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration3', () => {
        // Arrange.
        const inputValue = '//sep\n-1sepsep|2sep';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'sep' expected but '|' found at position 8.\n";
        errorMessage += "Number expected but 'sep' found at position 5.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration4', () => {
        // Arrange.
        const inputValue = '//\n\n-1\n\n|2\n';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'\n' expected but '|' found at position 4.\n";
        errorMessage += "Number expected but '\n' found at position 3.\n";
        errorMessage += "Number expected but EOF found.";
		
        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration5', () => {
        // Arrange.
        const inputValue = '//-1\n-2-1-1|2-1';
        let errorMessage = "Negatives not allowed : -2\n";
        errorMessage += "'-1' expected but '|' found at position 6.\n";
        errorMessage += "Number expected but '-1' found at position 4.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration6', () => {
        // Arrange.
        const inputValue = '//[$]\n-1$$|2$';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'$' expected but '|' found at position 4.\n";
        errorMessage += "Number expected but '$' found at position 3.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration7', () => {
        // Arrange.
        const inputValue = '//[$$]\n-1$$$$|2$$';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'$$' expected but '|' found at position 6.\n";
        errorMessage += "Number expected but '$$' found at position 4.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration8', () => {
        // Arrange.
        const inputValue = '//[sep]\n-1sepsep|2sep';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'sep' expected but '|' found at position 8.\n";
        errorMessage += "Number expected but 'sep' found at position 5.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration9', () => {
        // Arrange.
        const inputValue = '//[\n]\n-1\n\n|2\n';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'\n' expected but '|' found at position 4.\n";
        errorMessage += "Number expected but '\n' found at position 3.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration10', () => {
        // Arrange.
        const inputValue = '//[-1]\n-2-1-1|2-1';
        let errorMessage = "Negatives not allowed : -2\n";
        errorMessage += "'-1' expected but '|' found at position 6.\n";
        errorMessage += "Number expected but '-1' found at position 4.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration11', () => {
        // Arrange.
        const inputValue = '//[-1][-2]\n-3-2-1|2-2';
        let errorMessage = "Negatives not allowed : -3\n";
        errorMessage += "'-1' or '-2' expected but '|' found at position 6.\n";
        errorMessage += "Number expected but '-1' found at position 4.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration12', () => {
        // Arrange.
        const inputValue = '//[*][%]\n-1%*|2%';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'*' or '%' expected but '|' found at position 4.\n";
        errorMessage += "Number expected but '*' found at position 3.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration13', () => {
        // Arrange.
        const inputValue = '//[**][%%]\n-1%%**|2%%';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'**' or '%%' expected but '|' found at position 6.\n";
        errorMessage += "Number expected but '**' found at position 4.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration14', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2]\n-1sep2sep1|2sep2';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'sep1' or 'sep2' expected but '|' found at position 10.\n";
        errorMessage += "Number expected but 'sep1' found at position 6.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration15', () => {
        // Arrange.
        const inputValue = '//[[][]]\n-1][|2]';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'[' or ']' expected but '|' found at position 4.\n";
        errorMessage += "Number expected but '[' found at position 3.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration16', () => {
        // Arrange.
        const inputValue = '//[+][!][#]\n-1#!|2+';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'+' or '!' or '#' expected but '|' found at position 4.\n";
        errorMessage += "Number expected but '!' found at position 3.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration17', () => {
        // Arrange.
        const inputValue = '//[++][!!][##]\n-1##!!|2++';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'++' or '!!' or '##' expected but '|' found at position 6.\n";
        errorMessage += "Number expected but '!!' found at position 4.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration18', () => {
        // Arrange.
        const inputValue = '//[-1][-2][-3]\n-4-3-2|2-1';
        let errorMessage = "Negatives not allowed : -4\n";
        errorMessage += "'-1' or '-2' or '-3' expected but '|' found at position 6.\n";
        errorMessage += "Number expected but '-2' found at position 4.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration19', () => {
        // Arrange.
        const inputValue = '//[sep1][sep2][sep3]\n-1sep3sep2|2sep1';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'sep1' or 'sep2' or 'sep3' expected but '|' found at position 10.\n";
        errorMessage += "Number expected but 'sep2' found at position 6.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });

    /**
     * The Add method should throw an exception when called with an input containing multiple errors.
     */
    it('test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration20', () => {
        // Arrange.
        const inputValue = '//[?][??][???]\n-1?????|2?';
        let errorMessage = "Negatives not allowed : -1\n";
        errorMessage += "'???' or '??' or '?' expected but '|' found at position 7.\n";
        errorMessage += "Number expected but '??' found at position 5.\n";
        errorMessage += "Number expected but EOF found.";

        // Assert.
        expect(() => act_Add(inputValue)).toThrow(errorMessage);
    });
});
