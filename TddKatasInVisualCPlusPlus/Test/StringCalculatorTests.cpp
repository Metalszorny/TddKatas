#include "pch.h"
#include "./StringCalculatorTests.h"
#include "../Common/StringCalculator.h"

using namespace Test;

void StringCalculatorTests::SetUp()
{ }

void StringCalculatorTests::TierDown()
{ }

// The Add method should return 0 when called with empty string.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithEmptyString()
{
    // Arrange.
    auto inputValue = "";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with whitespace.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithWhitespace()
{
    // Arrange.
    auto inputValue = " ";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration1()
{
    // Arrange.
    auto inputValue = "//$\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration2()
{
    // Arrange.
    auto inputValue = "//$$\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration3()
{
    // Arrange.
    auto inputValue = "//sep\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration4()
{
    // Arrange.
    auto inputValue = "//\n\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration5()
{
    // Arrange.
    auto inputValue = "//-\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration6()
{
    // Arrange.
    auto inputValue = "//-1\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration7()
{
    // Arrange.
    auto inputValue = "//[$]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration8()
{
    // Arrange.
    auto inputValue = "//[$$]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration9()
{
    // Arrange.
    auto inputValue = "//[sep]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration10()
{
    // Arrange.
    auto inputValue = "//[\n]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration11()
{
    // Arrange.
    auto inputValue = "//[-]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration12()
{
    // Arrange.
    auto inputValue = "//[-1]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration13()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration14()
{
    // Arrange.
    auto inputValue = "//[*][%]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration15()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration16()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration17()
{
    // Arrange.
    auto inputValue = "//[[][]]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration18()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration19()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration20()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration21()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return 0 when called with custom separator declaration.
void StringCalculatorTests::Test_Add_Should_ReturnZero_When_CalledWithCustomSeparatorDeclaration22()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleInteger1()
{
    // Arrange.
    auto inputValue = "0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleInteger2()
{
    // Arrange.
    auto inputValue = "1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleInteger3()
{
    // Arrange.
    auto inputValue = "1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleInteger4()
{
    // Arrange.
    auto inputValue = "1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration1()
{
    // Arrange.
    auto inputValue = "//$\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration2()
{
    // Arrange.
    auto inputValue = "//$\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration3()
{
    // Arrange.
    auto inputValue = "//$\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration4()
{
    // Arrange.
    auto inputValue = "//$\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration5()
{
    // Arrange.
    auto inputValue = "//$$\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration6()
{
    // Arrange.
    auto inputValue = "//$$\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration7()
{
    // Arrange.
    auto inputValue = "//$$\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration8()
{
    // Arrange.
    auto inputValue = "//$$\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration9()
{
    // Arrange.
    auto inputValue = "//sep\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration10()
{
    // Arrange.
    auto inputValue = "//sep\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration11()
{
    // Arrange.
    auto inputValue = "//sep\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration12()
{
    // Arrange.
    auto inputValue = "//sep\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration13()
{
    // Arrange.
    auto inputValue = "//\n\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration14()
{
    // Arrange.
    auto inputValue = "//\n\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration15()
{
    // Arrange.
    auto inputValue = "//\n\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration16()
{
    // Arrange.
    auto inputValue = "//\n\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration17()
{
    // Arrange.
    auto inputValue = "//-\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration18()
{
    // Arrange.
    auto inputValue = "//-\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration19()
{
    // Arrange.
    auto inputValue = "//-\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration20()
{
    // Arrange.
    auto inputValue = "//-\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration21()
{
    // Arrange.
    auto inputValue = "//-1\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration22()
{
    // Arrange.
    auto inputValue = "//-1\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration23()
{
    // Arrange.
    auto inputValue = "//-1\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration24()
{
    // Arrange.
    auto inputValue = "//-1\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration25()
{
    // Arrange.
    auto inputValue = "//[$]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration26()
{
    // Arrange.
    auto inputValue = "//[$]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration27()
{
    // Arrange.
    auto inputValue = "//[$]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration28()
{
    // Arrange.
    auto inputValue = "//[$]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration29()
{
    // Arrange.
    auto inputValue = "//[$$]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration30()
{
    // Arrange.
    auto inputValue = "//[$$]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration31()
{
    // Arrange.
    auto inputValue = "//[$$]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration32()
{
    // Arrange.
    auto inputValue = "//[$$]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration33()
{
    // Arrange.
    auto inputValue = "//[sep]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration34()
{
    // Arrange.
    auto inputValue = "//[sep]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration35()
{
    // Arrange.
    auto inputValue = "//[sep]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration36()
{
    // Arrange.
    auto inputValue = "//[sep]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration37()
{
    // Arrange.
    auto inputValue = "//[\n]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration38()
{
    // Arrange.
    auto inputValue = "//[\n]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration39()
{
    // Arrange.
    auto inputValue = "//[\n]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration40()
{
    // Arrange.
    auto inputValue = "//[\n]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration41()
{
    // Arrange.
    auto inputValue = "//[-]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration42()
{
    // Arrange.
    auto inputValue = "//[-]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration43()
{
    // Arrange.
    auto inputValue = "//[-]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration44()
{
    // Arrange.
    auto inputValue = "//[-]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration45()
{
    // Arrange.
    auto inputValue = "//[-1]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration46()
{
    // Arrange.
    auto inputValue = "//[-1]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration47()
{
    // Arrange.
    auto inputValue = "//[-1]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration48()
{
    // Arrange.
    auto inputValue = "//[-1]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration49()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration50()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration51()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration52()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration53()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration54()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration55()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration56()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration57()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration58()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration59()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration60()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration61()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration62()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration63()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration64()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration65()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration66()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration67()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration68()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration69()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration70()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration71()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration72()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration73()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration74()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration75()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration76()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration77()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration78()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration79()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration80()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration81()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration82()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration83()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration84()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration85()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration86()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration87()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the input when called with a single integer number.
void StringCalculatorTests::Test_Add_Should_ReturnInput_When_CalledWithSingleIntegerWithCustomSeparatorDeclaration88()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1001";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers1()
{
    // Arrange.
    auto inputValue = "0;0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers2()
{
    // Arrange.
    auto inputValue = "1;0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers3()
{
    // Arrange.
    auto inputValue = "0;1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers4()
{
    // Arrange.
    auto inputValue = "0;1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers5()
{
    // Arrange.
    auto inputValue = "1;1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers6()
{
    // Arrange.
    auto inputValue = "1;1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers7()
{
    // Arrange.
    auto inputValue = "1000;1001";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers8()
{
    // Arrange.
    auto inputValue = "1;2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers9()
{
    // Arrange.
    auto inputValue = "0\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers10()
{
    // Arrange.
    auto inputValue = "1\n0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers11()
{
    // Arrange.
    auto inputValue = "0\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers12()
{
    // Arrange.
    auto inputValue = "0\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers13()
{
    // Arrange.
    auto inputValue = "1\n1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers14()
{
    // Arrange.
    auto inputValue = "1\n1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers15()
{
    // Arrange.
    auto inputValue = "1000\n1001";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers16()
{
    // Arrange.
    auto inputValue = "1\n2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers17()
{
    // Arrange.
    auto inputValue = "0\n0;0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers18()
{
    // Arrange.
    auto inputValue = "1\n0;0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers19()
{
    // Arrange.
    auto inputValue = "0\n1;0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers20()
{
    // Arrange.
    auto inputValue = "0\n0;1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers21()
{
    // Arrange.
    auto inputValue = "0\n0;1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers22()
{
    // Arrange.
    auto inputValue = "1\n0;1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers23()
{
    // Arrange.
    auto inputValue = "0\n1;1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers24()
{
    // Arrange.
    auto inputValue = "1\n1001;1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers25()
{
    // Arrange.
    auto inputValue = "1;2\n3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegers26()
{
    // Arrange.
    auto inputValue = "1;2\n3;4\n5;6\n7;8\n9;10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration1()
{
    // Arrange.
    auto inputValue = "//$\n0$0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration2()
{
    // Arrange.
    auto inputValue = "//$\n1$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration3()
{
    // Arrange.
    auto inputValue = "//$\n0$1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration4()
{
    // Arrange.
    auto inputValue = "//$\n0$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration5()
{
    // Arrange.
    auto inputValue = "//$\n1$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration6()
{
    // Arrange.
    auto inputValue = "//$\n1$1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration7()
{
    // Arrange.
    auto inputValue = "//$\n1001$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration8()
{
    // Arrange.
    auto inputValue = "//$\n1$2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration9()
{
    // Arrange.
    auto inputValue = "//$\n0$0$0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration10()
{
    // Arrange.
    auto inputValue = "//$\n1$0$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration11()
{
    // Arrange.
    auto inputValue = "//$\n0$1$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration12()
{
    // Arrange.
    auto inputValue = "//$\n0$0$1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration13()
{
    // Arrange.
    auto inputValue = "//$\n0$0$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration14()
{
    // Arrange.
    auto inputValue = "//$\n1$0$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration15()
{
    // Arrange.
    auto inputValue = "//$\n0$1$1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration16()
{
    // Arrange.
    auto inputValue = "//$\n1$1001$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration17()
{
    // Arrange.
    auto inputValue = "//$\n1$2$3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration18()
{
    // Arrange.
    auto inputValue = "//$\n1$2$3$4$5$6$7$8$9$10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration19()
{
    // Arrange.
    auto inputValue = "//$$\n0$$0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration20()
{
    // Arrange.
    auto inputValue = "//$$\n1$$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration21()
{
    // Arrange.
    auto inputValue = "//$$\n0$$1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration22()
{
    // Arrange.
    auto inputValue = "//$$\n0$$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration23()
{
    // Arrange.
    auto inputValue = "//$$\n1$$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration24()
{
    // Arrange.
    auto inputValue = "//$$\n1$$1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration25()
{
    // Arrange.
    auto inputValue = "//$$\n1001$$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration26()
{
    // Arrange.
    auto inputValue = "//$$\n1$$2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration27()
{
    // Arrange.
    auto inputValue = "//$$\n0$$0$$0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration28()
{
    // Arrange.
    auto inputValue = "//$$\n1$$0$$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration29()
{
    // Arrange.
    auto inputValue = "//$$\n0$$1$$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration30()
{
    // Arrange.
    auto inputValue = "//$$\n0$$0$$1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration31()
{
    // Arrange.
    auto inputValue = "//$$\n0$$0$$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration32()
{
    // Arrange.
    auto inputValue = "//$$\n1$$0$$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration33()
{
    // Arrange.
    auto inputValue = "//$$\n0$$1$$1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration34()
{
    // Arrange.
    auto inputValue = "//$$\n1$$1001$$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration35()
{
    // Arrange.
    auto inputValue = "//$$\n1$$2$$3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration36()
{
    // Arrange.
    auto inputValue = "//$$\n1$$2$$3$$4$$5$$6$$7$$8$$9$$10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration37()
{
    // Arrange.
    auto inputValue = "//sep\n0sep0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration38()
{
    // Arrange.
    auto inputValue = "//sep\n1sep0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration39()
{
    // Arrange.
    auto inputValue = "//sep\n0sep1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration40()
{
    // Arrange.
    auto inputValue = "//sep\n0sep1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration41()
{
    // Arrange.
    auto inputValue = "//sep\n1sep1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration42()
{
    // Arrange.
    auto inputValue = "//sep\n1sep1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration43()
{
    // Arrange.
    auto inputValue = "//sep\n1001sep1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration44()
{
    // Arrange.
    auto inputValue = "//sep\n1sep2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration45()
{
    // Arrange.
    auto inputValue = "//sep\n0sep0sep0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration46()
{
    // Arrange.
    auto inputValue = "//sep\n1sep0sep0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration47()
{
    // Arrange.
    auto inputValue = "//sep\n0sep1sep0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration48()
{
    // Arrange.
    auto inputValue = "//sep\n0sep0sep1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration49()
{
    // Arrange.
    auto inputValue = "//sep\n0sep0sep1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration50()
{
    // Arrange.
    auto inputValue = "//sep\n1sep0sep1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration51()
{
    // Arrange.
    auto inputValue = "//sep\n0sep1sep1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration52()
{
    // Arrange.
    auto inputValue = "//sep\n1sep1001sep1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration53()
{
    // Arrange.
    auto inputValue = "//sep\n1sep2sep3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration54()
{
    // Arrange.
    auto inputValue = "//sep\n1sep2sep3sep4sep5sep6sep7sep8sep9sep10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration55()
{
    // Arrange.
    auto inputValue = "//\n\n0\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration56()
{
    // Arrange.
    auto inputValue = "//\n\n1\n0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration57()
{
    // Arrange.
    auto inputValue = "//\n\n0\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration58()
{
    // Arrange.
    auto inputValue = "//\n\n0\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration59()
{
    // Arrange.
    auto inputValue = "//\n\n1\n1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration60()
{
    // Arrange.
    auto inputValue = "//\n\n1\n1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration61()
{
    // Arrange.
    auto inputValue = "//\n\n1001\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration62()
{
    // Arrange.
    auto inputValue = "//\n\n1\n2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration63()
{
    // Arrange.
    auto inputValue = "//\n\n0\n0\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration64()
{
    // Arrange.
    auto inputValue = "//\n\n1\n0\n0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration65()
{
    // Arrange.
    auto inputValue = "//\n\n0\n1\n0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration66()
{
    // Arrange.
    auto inputValue = "//\n\n0\n0\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration67()
{
    // Arrange.
    auto inputValue = "//\n\n0\n0\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration68()
{
    // Arrange.
    auto inputValue = "//\n\n1\n0\n1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration69()
{
    // Arrange.
    auto inputValue = "//\n\n0\n1\n1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration70()
{
    // Arrange.
    auto inputValue = "//\n\n1\n1001\n1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration71()
{
    // Arrange.
    auto inputValue = "//\n\n1\n2\n3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration72()
{
    // Arrange.
    auto inputValue = "//\n\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration73()
{
    // Arrange.
    auto inputValue = "//-\n0-0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration74()
{
    // Arrange.
    auto inputValue = "//-\n1-0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration75()
{
    // Arrange.
    auto inputValue = "//-\n0-1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration76()
{
    // Arrange.
    auto inputValue = "//-\n0-1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration77()
{
    // Arrange.
    auto inputValue = "//-\n1-1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration78()
{
    // Arrange.
    auto inputValue = "//-\n1-1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration79()
{
    // Arrange.
    auto inputValue = "//-\n1001-1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration80()
{
    // Arrange.
    auto inputValue = "//-\n1-2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration81()
{
    // Arrange.
    auto inputValue = "//-\n0-0-0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration82()
{
    // Arrange.
    auto inputValue = "//-\n1-0-0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration83()
{
    // Arrange.
    auto inputValue = "//-\n0-1-0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration84()
{
    // Arrange.
    auto inputValue = "//-\n0-0-1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration85()
{
    // Arrange.
    auto inputValue = "//-\n0-0-1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration86()
{
    // Arrange.
    auto inputValue = "//-\n1-0-1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration87()
{
    // Arrange.
    auto inputValue = "//-\n0-1-1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration88()
{
    // Arrange.
    auto inputValue = "//-\n1-1001-1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration89()
{
    // Arrange.
    auto inputValue = "//-\n1-2-3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration90()
{
    // Arrange.
    auto inputValue = "//-\n1-2-3-4-5-6-7-8-9-10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration91()
{
    // Arrange.
    auto inputValue = "//-1\n0-10";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration92()
{
    // Arrange.
    auto inputValue = "//-1\n1-10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration93()
{
    // Arrange.
    auto inputValue = "//-1\n0-11";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration94()
{
    // Arrange.
    auto inputValue = "//-1\n0-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration95()
{
    // Arrange.
    auto inputValue = "//-1\n1-11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration96()
{
    // Arrange.
    auto inputValue = "//-1\n1-11001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration97()
{
    // Arrange.
    auto inputValue = "//-1\n1001-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration98()
{
    // Arrange.
    auto inputValue = "//-1\n1-12";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration99()
{
    // Arrange.
    auto inputValue = "//-1\n0-10-10";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration100()
{
    // Arrange.
    auto inputValue = "//-1\n1-10-10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration101()
{
    // Arrange.
    auto inputValue = "//-1\n0-11-10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration102()
{
    // Arrange.
    auto inputValue = "//-1\n0-10-11";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration103()
{
    // Arrange.
    auto inputValue = "//-1\n0-10-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration104()
{
    // Arrange.
    auto inputValue = "//-1\n1-10-11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration105()
{
    // Arrange.
    auto inputValue = "//-1\n0-11-11001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration106()
{
    // Arrange.
    auto inputValue = "//-1\n1-11001-11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration107()
{
    // Arrange.
    auto inputValue = "//-1\n1-12-13";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration108()
{
    // Arrange.
    auto inputValue = "//-1\n1-12-13-14-15-16-17-18-19-110";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration109()
{
    // Arrange.
    auto inputValue = "//[$]\n0$0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration110()
{
    // Arrange.
    auto inputValue = "//[$]\n1$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration111()
{
    // Arrange.
    auto inputValue = "//[$]\n0$1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration112()
{
    // Arrange.
    auto inputValue = "//[$]\n0$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration113()
{
    // Arrange.
    auto inputValue = "//[$]\n1$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration114()
{
    // Arrange.
    auto inputValue = "//[$]\n1$1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration115()
{
    // Arrange.
    auto inputValue = "//[$]\n1001$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration116()
{
    // Arrange.
    auto inputValue = "//[$]\n1$2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration117()
{
    // Arrange.
    auto inputValue = "//[$]\n0$0$0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration118()
{
    // Arrange.
    auto inputValue = "//[$]\n1$0$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration119()
{
    // Arrange.
    auto inputValue = "//[$]\n0$1$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration120()
{
    // Arrange.
    auto inputValue = "//[$]\n0$0$1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration121()
{
    // Arrange.
    auto inputValue = "//[$]\n0$0$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration122()
{
    // Arrange.
    auto inputValue = "//[$]\n1$0$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration123()
{
    // Arrange.
    auto inputValue = "//[$]\n0$1$1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration124()
{
    // Arrange.
    auto inputValue = "//[$]\n1$1001$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration125()
{
    // Arrange.
    auto inputValue = "//[$]\n1$2$3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration126()
{
    // Arrange.
    auto inputValue = "//[$]\n1$2$3$4$5$6$7$8$9$10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration127()
{
    // Arrange.
    auto inputValue = "//[$$]\n0$$0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration128()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration129()
{
    // Arrange.
    auto inputValue = "//[$$]\n0$$1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration130()
{
    // Arrange.
    auto inputValue = "//[$$]\n0$$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration131()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration132()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration133()
{
    // Arrange.
    auto inputValue = "//[$$]\n1001$$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration134()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration135()
{
    // Arrange.
    auto inputValue = "//[$$]\n0$$0$$0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration136()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$0$$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration137()
{
    // Arrange.
    auto inputValue = "//[$$]\n0$$1$$0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration138()
{
    // Arrange.
    auto inputValue = "//[$$]\n0$$0$$1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration139()
{
    // Arrange.
    auto inputValue = "//[$$]\n0$$0$$1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration140()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$0$$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration141()
{
    // Arrange.
    auto inputValue = "//[$$]\n0$$1$$1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration142()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$1001$$1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration143()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$2$$3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration144()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$2$$3$$4$$5$$6$$7$$8$$9$$10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration145()
{
    // Arrange.
    auto inputValue = "//[sep]\n0sep0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration146()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration147()
{
    // Arrange.
    auto inputValue = "//[sep]\n0sep1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration148()
{
    // Arrange.
    auto inputValue = "//[sep]\n0sep1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration149()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration150()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration151()
{
    // Arrange.
    auto inputValue = "//[sep]\n1001sep1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration152()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration153()
{
    // Arrange.
    auto inputValue = "//[sep]\n0sep0sep0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration154()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep0sep0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration155()
{
    // Arrange.
    auto inputValue = "//[sep]\n0sep1sep0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration156()
{
    // Arrange.
    auto inputValue = "//[sep]\n0sep0sep1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration157()
{
    // Arrange.
    auto inputValue = "//[sep]\n0sep0sep1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration158()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep0sep1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration159()
{
    // Arrange.
    auto inputValue = "//[sep]\n0sep1sep1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration160()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep1001sep1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration161()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep2sep3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration162()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep2sep3sep4sep5sep6sep7sep8sep9sep10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration163()
{
    // Arrange.
    auto inputValue = "//[\n]\n0\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration164()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration165()
{
    // Arrange.
    auto inputValue = "//[\n]\n0\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration166()
{
    // Arrange.
    auto inputValue = "//[\n]\n0\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration167()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration168()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration169()
{
    // Arrange.
    auto inputValue = "//[\n]\n1001\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration170()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration171()
{
    // Arrange.
    auto inputValue = "//[\n]\n0\n0\n0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration172()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n0\n0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration173()
{
    // Arrange.
    auto inputValue = "//[\n]\n0\n1\n0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration174()
{
    // Arrange.
    auto inputValue = "//[\n]\n0\n0\n1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration175()
{
    // Arrange.
    auto inputValue = "//[\n]\n0\n0\n1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration176()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n0\n1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration177()
{
    // Arrange.
    auto inputValue = "//[\n]\n0\n1\n1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration178()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n1001\n1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration179()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n2\n3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration180()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration181()
{
    // Arrange.
    auto inputValue = "//[-]\n0-0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration182()
{
    // Arrange.
    auto inputValue = "//[-]\n1-0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration183()
{
    // Arrange.
    auto inputValue = "//[-]\n0-1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration184()
{
    // Arrange.
    auto inputValue = "//[-]\n0-1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration185()
{
    // Arrange.
    auto inputValue = "//[-]\n1-1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration186()
{
    // Arrange.
    auto inputValue = "//[-]\n1-1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration187()
{
    // Arrange.
    auto inputValue = "//[-]\n1001-1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration188()
{
    // Arrange.
    auto inputValue = "//[-]\n1-2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration189()
{
    // Arrange.
    auto inputValue = "//[-]\n0-0-0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration190()
{
    // Arrange.
    auto inputValue = "//[-]\n1-0-0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration191()
{
    // Arrange.
    auto inputValue = "//[-]\n0-1-0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration192()
{
    // Arrange.
    auto inputValue = "//[-]\n0-0-1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration193()
{
    // Arrange.
    auto inputValue = "//[-]\n0-0-1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration194()
{
    // Arrange.
    auto inputValue = "//[-]\n1-0-1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration195()
{
    // Arrange.
    auto inputValue = "//[-]\n0-1-1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration196()
{
    // Arrange.
    auto inputValue = "//[-]\n1-1001-1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration197()
{
    // Arrange.
    auto inputValue = "//[-]\n1-2-3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration198()
{
    // Arrange.
    auto inputValue = "//[-]\n1-2-3-4-5-6-7-8-9-10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration199()
{
    // Arrange.
    auto inputValue = "//[-1]\n0-10";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration200()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration201()
{
    // Arrange.
    auto inputValue = "//[-1]\n0-11";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration202()
{
    // Arrange.
    auto inputValue = "//[-1]\n0-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration203()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration204()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-11001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration205()
{
    // Arrange.
    auto inputValue = "//[-1]\n1001-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration206()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-12";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration207()
{
    // Arrange.
    auto inputValue = "//[-1]\n0-10-10";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration208()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-10-10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration209()
{
    // Arrange.
    auto inputValue = "//[-1]\n0-11-10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration210()
{
    // Arrange.
    auto inputValue = "//[-1]\n0-10-11";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration211()
{
    // Arrange.
    auto inputValue = "//[-1]\n0-10-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration212()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-10-11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration213()
{
    // Arrange.
    auto inputValue = "//[-1]\n0-11-11001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration214()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-11001-11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration215()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-12-13";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration216()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-12-13-14-15-16-17-18-19-110";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration217()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-10";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration218()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration219()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-11";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration220()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration221()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration222()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-11001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration223()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1001-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration224()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-12";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration225()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-20";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration226()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-20";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration227()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-21";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration228()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration229()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-21000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration230()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-21001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration231()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1001-21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration232()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-22";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration233()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-10-20";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration234()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-10-20";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration235()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-11-20";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration236()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-10-21";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration237()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-10-21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration238()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-10-21000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration239()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n0-11-21001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration240()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-11001-21000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration241()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-12-23";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration242()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-12-23-14-25-16-27-18-29-110";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration243()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0*0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration244()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration245()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0*1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration246()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0*1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration247()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration248()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration249()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1001*1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration250()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration251()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0%0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration252()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration253()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0%1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration254()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0%1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration255()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration256()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration257()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1001%1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration258()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration259()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0*0%0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration260()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*0%0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration261()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0*1%0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration262()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0*0%1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration263()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0*0%1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration264()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*0%1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration265()
{
    // Arrange.
    auto inputValue = "//[*][%]\n0*1%1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration266()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*1001%1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration267()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*2%3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration268()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*2%3*4%5*6%7*8%9*10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration269()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0**0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration270()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration271()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0**1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration272()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0**1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration273()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration274()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration275()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1001**1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration276()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration277()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0%%0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration278()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration279()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0%%1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration280()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0%%1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration281()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration282()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration283()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1001%%1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration284()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration285()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0**0%%0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration286()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**0%%0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration287()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0**1%%0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration288()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0**0%%1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration289()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0**0%%1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration290()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**0%%1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration291()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n0**1%%1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration292()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**1001%%1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration293()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**2%%3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration294()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**2%%3**4%%5**6%%7**8%%9**10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration295()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep10";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration296()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration297()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep11";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration298()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration299()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration300()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep11001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration301()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1001sep11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration302()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep12";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration303()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep20";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration304()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep20";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration305()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep21";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration306()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration307()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep21000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration308()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep21001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration309()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1001sep21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration310()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep22";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration311()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep10sep20";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration312()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep10sep20";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration313()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep11sep20";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration314()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep10sep21";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration315()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep10sep21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration316()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep10sep21000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration317()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n0sep11sep21001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration318()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep11001sep21000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration319()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep12sep23";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration320()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep12sep23sep14sep25sep16sep27sep18sep29sep110";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration321()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0[0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration322()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration323()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0[1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration324()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0[1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration325()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration326()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration327()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1001[1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration328()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration329()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0]0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration330()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1]0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration331()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0]1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration332()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0]1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration333()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1]1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration334()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1]1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration335()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1001]1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration336()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1]2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration337()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0[0]0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration338()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[0]0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration339()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0[1]0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration340()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0[0]1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration341()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0[0]1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration342()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[0]1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration343()
{
    // Arrange.
    auto inputValue = "//[[][]]\n0[1]1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration344()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[1001]1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration345()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[2]3";
    auto expectedResult = 6;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration346()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[2]3[4]5[6]7[8]9[10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration347()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration348()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration349()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration350()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration351()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration352()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration353()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1001+1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration354()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration355()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0!0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration356()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1!0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration357()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0!1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration358()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0!1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration359()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1!1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration360()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1!1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration361()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1001!1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration362()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1!2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration363()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0#0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration364()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1#0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration365()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0#1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration366()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0#1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration367()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1#1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration368()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1#1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration369()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1001#1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration370()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1#2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration371()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+0!0#0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration372()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+0!0#0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration373()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+1!0#0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration374()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+0!1#0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration375()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+0!0#1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration376()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+0!1000#0";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration377()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+0!1000#0";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration378()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n0+1!1001#0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration379()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+1001!1000#0";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration380()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+2!3#4";
    auto expectedResult = 10;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration381()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+2!3#4+5!6#7+8!9#10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration382()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration383()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration384()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration385()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration386()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration387()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration388()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1001++1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration389()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration390()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0!!0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration391()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1!!0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration392()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0!!1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration393()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0!!1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration394()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1!!1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration395()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1!!1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration396()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1001!!1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration397()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1!!2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration398()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0##0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration399()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1##0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration400()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0##1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration401()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0##1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration402()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1##1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration403()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1##1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration404()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1001##1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration405()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1##2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration406()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++0!!0##0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration407()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++0!!0##0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration408()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++1!!0##0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration409()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++0!!1##0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration410()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++0!!0##1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration411()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++0!!1000##0";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration412()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++0!!1000##0";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration413()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n0++1!!1001##0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration414()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++1001!!1000##0";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration415()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++2!!3##4";
    auto expectedResult = 10;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration416()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++2!!3##4++5!!6##7++8!!9##10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration417()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-10";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration418()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration419()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-11";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration420()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration421()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration422()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-11001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration423()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1001-11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration424()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-12";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration425()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-20";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration426()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-20";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration427()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-21";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration428()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration429()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-21000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration430()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-21001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration431()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1001-21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration432()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-22";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration433()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-30";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration434()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration435()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-31";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration436()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-31000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration437()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-31000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration438()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-31001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration439()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1001-31000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration440()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-32";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration441()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-10-20-30";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration442()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-10-20-30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration443()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-11-20-30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration444()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-10-21-30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration445()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-10-20-31";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration446()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-10-21000-30";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration447()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-10-21000-30";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration448()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n0-11-21001-30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration449()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-11001-21000-30";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration450()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-12-23-34";
    auto expectedResult = 10;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration451()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-12-23-34-15-26-37-18-29-310";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration452()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep10";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration453()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep10";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration454()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep11";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration455()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration456()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep11000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration457()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep11001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration458()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1001sep11000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration459()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep12";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration460()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep20";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration461()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep20";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration462()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep21";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration463()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration464()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep21000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration465()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep21001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration466()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1001sep21000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration467()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep22";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration468()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep30";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration469()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration470()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep31";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration471()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep31000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration472()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep31000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration473()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep31001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration474()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1001sep31000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration475()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep32";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration476()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep10sep20sep30";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration477()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep10sep20sep30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration478()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep11sep20sep30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration479()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep10sep21sep30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration480()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep10sep20sep31";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration481()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep10sep21000sep30";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration482()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep10sep21000sep30";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration483()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n0sep11sep21001sep30";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration484()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep11001sep21000sep30";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration485()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep12sep23sep34";
    auto expectedResult = 10;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration486()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep12sep23sep34sep15sep26sep37sep18sep29sep310";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration487()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration488()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration489()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration490()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration491()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration492()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration493()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1001?1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration494()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration495()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0??0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration496()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1??0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration497()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0??1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration498()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0??1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration499()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1??1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration500()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1??1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration501()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1001??1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration502()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1??2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration503()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0???0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration504()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1???0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration505()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0???1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration506()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0???1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration507()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1???1000";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration508()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1???1001";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration509()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1001???1000";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration510()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1???2";
    auto expectedResult = 3;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration511()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?0??0???0";
    auto expectedResult = 0;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration512()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?0??0???0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration513()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?1??0???0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration514()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?0??1???0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration515()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?0??0???1";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration516()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?0??1000???0";
    auto expectedResult = 1000;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration517()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?0??1000???0";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration518()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n0?1??1001???0";
    auto expectedResult = 1;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration519()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?1001??1000???0";
    auto expectedResult = 1001;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration520()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?2??3???4";
    auto expectedResult = 10;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should return the sum of the input when called with a multiple positive integer numbers up to 1000.
void StringCalculatorTests::Test_Add_Should_ReturnSum_When_CalledWithTwoOrMoreIntegersWithCustomSeparatorDeclaration521()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?2??3???4?5??6???7?8??9???10";
    auto expectedResult = 55;

    // Act.
    auto actualResult = this->Act_Add(inputValue);

    // Assert.
    Assert::AreEqual(expectedResult, actualResult);
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator1()
{
    // Arrange.
    auto inputValue = "1;";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception &ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator2()
{
    // Arrange.
    auto inputValue = "1;2;";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator3()
{
    // Arrange.
    auto inputValue = "1\n";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator4()
{
    // Arrange.
    auto inputValue = "1\n2\n";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator5()
{
    // Arrange.
    auto inputValue = "1;2\n";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparator6()
{
    // Arrange.
    auto inputValue = "1\n2;";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration1()
{
    // Arrange.
    auto inputValue = "//$\n1$";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration2()
{
    // Arrange.
    auto inputValue = "//$\n1$2$";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration3()
{
    // Arrange.
    auto inputValue = "//$$\n1$$";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration4()
{
    // Arrange.
    auto inputValue = "//$$\n1$$2$$";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration5()
{
    // Arrange.
    auto inputValue = "//sep\n1sep";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration6()
{
    // Arrange.
    auto inputValue = "//sep\n1sep2sep";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration7()
{
    // Arrange.
    auto inputValue = "//\n\n1\n";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration8()
{
    // Arrange.
    auto inputValue = "//\n\n1\n2\n";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration9()
{
    // Arrange.
    auto inputValue = "//-\n1-";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration10()
{
    // Arrange.
    auto inputValue = "//-\n1-2-";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration11()
{
    // Arrange.
    auto inputValue = "//-1\n1-1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration12()
{
    // Arrange.
    auto inputValue = "//-1\n1-12-1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration13()
{
    // Arrange.
    auto inputValue = "//[$]\n1$";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration14()
{
    // Arrange.
    auto inputValue = "//[$]\n1$2$";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration15()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration16()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$2$$";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration17()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration18()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep2sep";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration19()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration20()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n2\n";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration21()
{
    // Arrange.
    auto inputValue = "//[-]\n1-";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration22()
{
    // Arrange.
    auto inputValue = "//[-]\n1-2-";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration23()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration24()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-12-1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration25()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration26()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-2";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration27()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-12-2";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration28()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-22-1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration29()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration30()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration31()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*2%";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration32()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%2*";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration33()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration34()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration35()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**2%%";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration36()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%2**";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration37()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration38()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep2";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration39()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep12sep2";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration40()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep22sep1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration41()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration42()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1]";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration43()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[2]";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration44()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1]2[";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration45()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration46()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1!";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration47()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1#";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration48()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+2!3#";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration49()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration50()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1!!";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration51()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1##";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration52()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++2!!3##";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration53()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration54()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-2";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration55()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-3";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration56()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-12-23-3";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration57()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep1";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration58()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep2";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration59()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep3";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration60()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep12sep23sep3";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration61()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration62()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1??";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration63()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1???";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input ending with a separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputEndingWithSeparatorWithCustomSeparatorDeclaration64()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?2??3???";
    auto errorMessage = L"Number expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber1()
{
    // Arrange.
    auto inputValue = "-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber2()
{
    // Arrange.
    auto inputValue = "-1;2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber3()
{
    // Arrange.
    auto inputValue = "1;-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber4()
{
    // Arrange.
    auto inputValue = "-1;-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber5()
{
    // Arrange.
    auto inputValue = "-1\n2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber6()
{
    // Arrange.
    auto inputValue = "1\n-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber7()
{
    // Arrange.
    auto inputValue = "-1\n-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumber8()
{
    // Arrange.
    auto inputValue = "-1\n-2;-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration1()
{
    // Arrange.
    auto inputValue = "//$\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration2()
{
    // Arrange.
    auto inputValue = "//$\n-1$2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration3()
{
    // Arrange.
    auto inputValue = "//$\n1$-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration4()
{
    // Arrange.
    auto inputValue = "//$\n-1$-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration5()
{
    // Arrange.
    auto inputValue = "//$$\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration6()
{
    // Arrange.
    auto inputValue = "//$$\n-1$$2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration7()
{
    // Arrange.
    auto inputValue = "//$$\n1$$-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration8()
{
    // Arrange.
    auto inputValue = "//$$\n-1$$-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration9()
{
    // Arrange.
    auto inputValue = "//sep\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration10()
{
    // Arrange.
    auto inputValue = "//sep\n-1sep2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration11()
{
    // Arrange.
    auto inputValue = "//sep\n1sep-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration12()
{
    // Arrange.
    auto inputValue = "//sep\n-1sep-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration13()
{
    // Arrange.
    auto inputValue = "//\n\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration14()
{
    // Arrange.
    auto inputValue = "//\n\n-1\n2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration15()
{
    // Arrange.
    auto inputValue = "//\n\n1\n-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration16()
{
    // Arrange.
    auto inputValue = "//\n\n-1\n-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration17()
{
    // Arrange.
    auto inputValue = "//-1\n-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration18()
{
    // Arrange.
    auto inputValue = "//-1\n-2-13";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration19()
{
    // Arrange.
    auto inputValue = "//-1\n2-1-3";
    auto errorMessage = L"Negatives not allowed : -3";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration20()
{
    // Arrange.
    auto inputValue = "//-1\n-2-1-2";
    auto errorMessage = L"Negatives not allowed : -2, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration21()
{
    // Arrange.
    auto inputValue = "//[$]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration22()
{
    // Arrange.
    auto inputValue = "//[$]\n-1$2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration23()
{
    // Arrange.
    auto inputValue = "//[$]\n1$-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration24()
{
    // Arrange.
    auto inputValue = "//[$]\n-1$-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration25()
{
    // Arrange.
    auto inputValue = "//[$$]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration26()
{
    // Arrange.
    auto inputValue = "//[$$]\n-1$$2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration27()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration28()
{
    // Arrange.
    auto inputValue = "//[$$]\n-1$$-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration29()
{
    // Arrange.
    auto inputValue = "//[sep]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration30()
{
    // Arrange.
    auto inputValue = "//[sep]\n-1sep2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration31()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sep-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration32()
{
    // Arrange.
    auto inputValue = "//[sep]\n-1sep-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration33()
{
    // Arrange.
    auto inputValue = "//[\n]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration34()
{
    // Arrange.
    auto inputValue = "//[\n]\n-1\n2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration35()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration36()
{
    // Arrange.
    auto inputValue = "//[\n]\n-1\n-1";
    auto errorMessage = L"Negatives not allowed : -1, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration37()
{
    // Arrange.
    auto inputValue = "//[-1]\n-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration38()
{
    // Arrange.
    auto inputValue = "//[-1]\n-2-13";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration39()
{
    // Arrange.
    auto inputValue = "//[-1]\n2-1-3";
    auto errorMessage = L"Negatives not allowed : -3";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration40()
{
    // Arrange.
    auto inputValue = "//[-1]\n-2-1-2";
    auto errorMessage = L"Negatives not allowed : -2, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration41()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-3";
    auto errorMessage = L"Negatives not allowed : -3";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration42()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-3-14";
    auto errorMessage = L"Negatives not allowed : -3";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration43()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-3-24";
    auto errorMessage = L"Negatives not allowed : -3";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration44()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n3-1-4";
    auto errorMessage = L"Negatives not allowed : -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration45()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n3-2-4";
    auto errorMessage = L"Negatives not allowed : -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration46()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-3-1-4";
    auto errorMessage = L"Negatives not allowed : -3, -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration47()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-3-2-4";
    auto errorMessage = L"Negatives not allowed : -3, -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration48()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-3-1-4-2-3";
    auto errorMessage = L"Negatives not allowed : -3, -4, -3";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration49()
{
    // Arrange.
    auto inputValue = "//[*][%]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration50()
{
    // Arrange.
    auto inputValue = "//[*][%]\n-1*2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration51()
{
    // Arrange.
    auto inputValue = "//[*][%]\n-1%2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration52()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration53()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration54()
{
    // Arrange.
    auto inputValue = "//[*][%]\n-1*-2";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration55()
{
    // Arrange.
    auto inputValue = "//[*][%]\n-1%-2";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration56()
{
    // Arrange.
    auto inputValue = "//[*][%]\n-1*-2%-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration57()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration58()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n-1**2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration59()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n-1%%2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration60()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration61()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration62()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n-1**-2";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration63()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n-1%%-2";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration64()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n-1**-2%%-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration65()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration66()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n-1sep12";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration67()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n-1sep22";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration68()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep1-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration69()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep2-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration70()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n-1sep1-2";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration71()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n-1sep2-2";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration72()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n-1sep1-2sep2-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration73()
{
    // Arrange.
    auto inputValue = "//[[][]]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration74()
{
    // Arrange.
    auto inputValue = "//[[][]]\n-1[2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration75()
{
    // Arrange.
    auto inputValue = "//[[][]]\n-1]2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration76()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration77()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1]-2";
    auto errorMessage = L"Negatives not allowed : -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration78()
{
    // Arrange.
    auto inputValue = "//[[][]]\n-1[-2";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration79()
{
    // Arrange.
    auto inputValue = "//[[][]]\n-1]-2";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration80()
{
    // Arrange.
    auto inputValue = "//[[][]]\n-1[-2]-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration81()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration82()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1+2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration83()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1!2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration84()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1#2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration85()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1+-2!3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration86()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1!-2#3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration87()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1#-2+3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration88()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1+-2!-3#-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -3, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration89()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration90()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1++2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration91()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1!!2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration92()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1##2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration93()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1++-2!!3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration94()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1!!-2##3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration95()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1##-2++3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration96()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1++-2!!-3##-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -3, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration97()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4";
    auto errorMessage = L"Negatives not allowed : -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration98()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4-15";
    auto errorMessage = L"Negatives not allowed : -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration99()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4-25";
    auto errorMessage = L"Negatives not allowed : -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration100()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4-35";
    auto errorMessage = L"Negatives not allowed : -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration101()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4-1-5-26";
    auto errorMessage = L"Negatives not allowed : -4, -5";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration102()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4-2-5-36";
    auto errorMessage = L"Negatives not allowed : -4, -5";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration103()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4-3-5-16";
    auto errorMessage = L"Negatives not allowed : -4, -5";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration104()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4-1-5-2-6-3-4";
    auto errorMessage = L"Negatives not allowed : -4, -5, -6, -4";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration105()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration106()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1sep12";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration107()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1sep22";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration108()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1sep32";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration109()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1sep1-2sep23";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration110()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1sep2-2sep33";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration111()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1sep3-2sep13";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration112()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1sep1-2sep2-3sep3-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -3, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration113()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration114()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1?2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration115()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1??2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration116()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1???2";
    auto errorMessage = L"Negatives not allowed : -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration117()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1?-2??3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration118()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1??-2???3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration119()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1???-2?3";
    auto errorMessage = L"Negatives not allowed : -1, -2";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing at least one negative number.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainingNegativeNumberWithCustomSeparatorDeclaration120()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1?-2??-3???-1";
    auto errorMessage = L"Negatives not allowed : -1, -2, -3, -1";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparator()
{
    // Arrange.
    auto inputValue = "1$2";
    auto errorMessage = L"';' or '\n' expected but '$' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration1()
{
    // Arrange.
    auto inputValue = "//$\n1;2";
    auto errorMessage = L"'$' expected but ';' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration2()
{
    // Arrange.
    auto inputValue = "//$$\n1;2";
    auto errorMessage = L"'$$' expected but ';' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration3()
{
    // Arrange.
    auto inputValue = "//sep\n1|2";
    auto errorMessage = L"'sep' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration4()
{
    // Arrange.
    auto inputValue = "//\n\n1|2";
    auto errorMessage = L"'\n' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration5()
{
    // Arrange.
    auto inputValue = "//-\n1|2";
    auto errorMessage = L"'-' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration6()
{
    // Arrange.
    auto inputValue = "//-1\n1|2";
    auto errorMessage = L"'-1' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration7()
{
    // Arrange.
    auto inputValue = "//[$]\n1;2";
    auto errorMessage = L"'$' expected but ';' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration8()
{
    // Arrange.
    auto inputValue = "//[$$]\n1;2";
    auto errorMessage = L"'$$' expected but ';' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration9()
{
    // Arrange.
    auto inputValue = "//[sep]\n1|2";
    auto errorMessage = L"'sep' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration10()
{
    // Arrange.
    auto inputValue = "//[\n]\n1|2";
    auto errorMessage = L"'\n' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration11()
{
    // Arrange.
    auto inputValue = "//[-]\n1|2";
    auto errorMessage = L"'-' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration12()
{
    // Arrange.
    auto inputValue = "//[-1]\n1|2";
    auto errorMessage = L"'-1' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration13()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1|2";
    auto errorMessage = L"'-1' or '-2' expected but '|' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration14()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1=2";
    auto errorMessage = L"'*' or '%' expected but '=' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration15()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1=2";
    auto errorMessage = L"'**' or '%%' expected but '=' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration16()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1del2";
    auto errorMessage = L"'sep1' or 'sep2' expected but 'del' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration17()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1{2";
    auto errorMessage = L"'[' or ']' expected but '{' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration18()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1=2";
    auto errorMessage = L"'+' or '!' or '#' expected but '=' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration19()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1=2";
    auto errorMessage = L"'++' or '!!' or '##' expected but '=' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration20()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1=2";
    auto errorMessage = L"'-1' or '-2' or '-3' expected but '=' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration21()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1=2";
    auto errorMessage = L"'sep1' or 'sep2' or 'sep3' expected but '=' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing an unspecified separator.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsUnsupportedSeparatorWithCustomSeparatorDeclaration22()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1=2";
    auto errorMessage = L"'???' or '??' or '?' expected but '=' found at position 1.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext1()
{
    // Arrange.
    auto inputValue = ";1;2";
    auto errorMessage = L"Number expected but ';' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext2()
{
    // Arrange.
    auto inputValue = "1;;2";
    auto errorMessage = L"Number expected but ';' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext3()
{
    // Arrange.
    auto inputValue = "\n1\n2";
    auto errorMessage = L"Number expected but '\n' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext4()
{
    // Arrange.
    auto inputValue = "1\n\n2";
    auto errorMessage = L"Number expected but '\n' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext5()
{
    // Arrange.
    auto inputValue = ";1\n2";
    auto errorMessage = L"Number expected but ';' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext6()
{
    // Arrange.
    auto inputValue = "\n1;2";
    auto errorMessage = L"Number expected but '\n' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext7()
{
    // Arrange.
    auto inputValue = "1\n;2";
    auto errorMessage = L"Number expected but ';' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNext8()
{
    // Arrange.
    auto inputValue = "1;\n2";
    auto errorMessage = L"Number expected but '\n' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration1()
{
    // Arrange.
    auto inputValue = "//$\n$1$2";
    auto errorMessage = L"Number expected but '$' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration2()
{
    // Arrange.
    auto inputValue = "//$\n1$$2";
    auto errorMessage = L"Number expected but '$' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration3()
{
    // Arrange.
    auto inputValue = "//$$\n$$1$$2";
    auto errorMessage = L"Number expected but '$$' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration4()
{
    // Arrange.
    auto inputValue = "//$$\n1$$$$2";
    auto errorMessage = L"Number expected but '$$' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration5()
{
    // Arrange.
    auto inputValue = "//sep\nsep1sep2";
    auto errorMessage = L"Number expected but 'sep' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration6()
{
    // Arrange.
    auto inputValue = "//sep\n1sepsep2";
    auto errorMessage = L"Number expected but 'sep' found at position 4.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration7()
{
    // Arrange.
    auto inputValue = "//\n\n\n1\n2";
    auto errorMessage = L"Number expected but '\n' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration8()
{
    // Arrange.
    auto inputValue = "//\n\n1\n\n2";
    auto errorMessage = L"Number expected but '\n' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration9()
{
    // Arrange.
    auto inputValue = "//-\n-1-2";
    auto errorMessage = L"Number expected but '-' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration10()
{
    // Arrange.
    auto inputValue = "//-\n1--2";
    auto errorMessage = L"Number expected but '-' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration11()
{
    // Arrange.
    auto inputValue = "//-1\n-11-12";
    auto errorMessage = L"Number expected but '-1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration12()
{
    // Arrange.
    auto inputValue = "//-1\n1-1-12";
    auto errorMessage = L"Number expected but '-1' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration13()
{
    // Arrange.
    auto inputValue = "//[$]\n$1$2";
    auto errorMessage = L"Number expected but '$' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration14()
{
    // Arrange.
    auto inputValue = "//[$]\n1$$2";
    auto errorMessage = L"Number expected but '$' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration15()
{
    // Arrange.
    auto inputValue = "//[$$]\n$$1$$2";
    auto errorMessage = L"Number expected but '$$' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration16()
{
    // Arrange.
    auto inputValue = "//[$$]\n1$$$$2";
    auto errorMessage = L"Number expected but '$$' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration17()
{
    // Arrange.
    auto inputValue = "//[sep]\nsep1sep2";
    auto errorMessage = L"Number expected but 'sep' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration18()
{
    // Arrange.
    auto inputValue = "//[sep]\n1sepsep2";
    auto errorMessage = L"Number expected but 'sep' found at position 4.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration19()
{
    // Arrange.
    auto inputValue = "//[\n]\n\n1\n2";
    auto errorMessage = L"Number expected but '\n' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration20()
{
    // Arrange.
    auto inputValue = "//[\n]\n1\n\n2";
    auto errorMessage = L"Number expected but '\n' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration21()
{
    // Arrange.
    auto inputValue = "//[-]\n-1-2";
    auto errorMessage = L"Number expected but '-' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration22()
{
    // Arrange.
    auto inputValue = "//[-]\n1--2";
    auto errorMessage = L"Number expected but '-' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration23()
{
    // Arrange.
    auto inputValue = "//[-1]\n-11-12";
    auto errorMessage = L"Number expected but '-1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration24()
{
    // Arrange.
    auto inputValue = "//[-1]\n1-1-12";
    auto errorMessage = L"Number expected but '-1' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration25()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-11-12";
    auto errorMessage = L"Number expected but '-1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration26()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-1-12";
    auto errorMessage = L"Number expected but '-1' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration27()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-21-22";
    auto errorMessage = L"Number expected but '-2' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration28()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-2-22";
    auto errorMessage = L"Number expected but '-2' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration29()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-11-22";
    auto errorMessage = L"Number expected but '-1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration30()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-21-12";
    auto errorMessage = L"Number expected but '-2' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration31()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-2-12";
    auto errorMessage = L"Number expected but '-1' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration32()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n1-1-22";
    auto errorMessage = L"Number expected but '-2' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration33()
{
    // Arrange.
    auto inputValue = "//[*][%]\n*1*2";
    auto errorMessage = L"Number expected but '*' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration34()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1**2";
    auto errorMessage = L"Number expected but '*' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration35()
{
    // Arrange.
    auto inputValue = "//[*][%]\n%1%2";
    auto errorMessage = L"Number expected but '%' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration36()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%%2";
    auto errorMessage = L"Number expected but '%' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration37()
{
    // Arrange.
    auto inputValue = "//[*][%]\n*1%2";
    auto errorMessage = L"Number expected but '*' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration38()
{
    // Arrange.
    auto inputValue = "//[*][%]\n%1*2";
    auto errorMessage = L"Number expected but '%' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration39()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1%*2";
    auto errorMessage = L"Number expected but '*' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration40()
{
    // Arrange.
    auto inputValue = "//[*][%]\n1*%2";
    auto errorMessage = L"Number expected but '%' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration41()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n**1**2";
    auto errorMessage = L"Number expected but '**' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration42()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1****2";
    auto errorMessage = L"Number expected but '**' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration43()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n%%1%%2";
    auto errorMessage = L"Number expected but '%%' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration44()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%%%2";
    auto errorMessage = L"Number expected but '%%' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration45()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n**1%%2";
    auto errorMessage = L"Number expected but '**' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration46()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n%%1**2";
    auto errorMessage = L"Number expected but '%%' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration47()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1%%**2";
    auto errorMessage = L"Number expected but '**' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration48()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n1**%%2";
    auto errorMessage = L"Number expected but '%%' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration49()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\nsep11sep12";
    auto errorMessage = L"Number expected but 'sep1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration50()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep1sep12";
    auto errorMessage = L"Number expected but 'sep1' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration51()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\nsep21sep22";
    auto errorMessage = L"Number expected but 'sep2' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration52()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep2sep22";
    auto errorMessage = L"Number expected but 'sep2' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration53()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\nsep11sep22";
    auto errorMessage = L"Number expected but 'sep1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration54()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\nsep21sep12";
    auto errorMessage = L"Number expected but 'sep2' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration55()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep2sep12";
    auto errorMessage = L"Number expected but 'sep1' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration56()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n1sep1sep22";
    auto errorMessage = L"Number expected but 'sep2' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration57()
{
    // Arrange.
    auto inputValue = "//[[][]]\n[1[2";
    auto errorMessage = L"Number expected but '[' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration58()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[[2";
    auto errorMessage = L"Number expected but '[' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration59()
{
    // Arrange.
    auto inputValue = "//[[][]]\n]1]2";
    auto errorMessage = L"Number expected but ']' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration60()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1]]2";
    auto errorMessage = L"Number expected but ']' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration61()
{
    // Arrange.
    auto inputValue = "//[[][]]\n[1]2";
    auto errorMessage = L"Number expected but '[' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration62()
{
    // Arrange.
    auto inputValue = "//[[][]]\n]1[2";
    auto errorMessage = L"Number expected but ']' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration63()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1][2";
    auto errorMessage = L"Number expected but '[' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration64()
{
    // Arrange.
    auto inputValue = "//[[][]]\n1[]2";
    auto errorMessage = L"Number expected but ']' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration65()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n+1+2";
    auto errorMessage = L"Number expected but '+' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration66()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1++2";
    auto errorMessage = L"Number expected but '+' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration67()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n!1!2";
    auto errorMessage = L"Number expected but '!' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration68()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1!!2";
    auto errorMessage = L"Number expected but '!' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration69()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n#1#2";
    auto errorMessage = L"Number expected but '#' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration70()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1##2";
    auto errorMessage = L"Number expected but '#' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration71()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n+1!2";
    auto errorMessage = L"Number expected but '+' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration72()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n!1#2";
    auto errorMessage = L"Number expected but '!' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration73()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n#1+2";
    auto errorMessage = L"Number expected but '#' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration74()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1+!2";
    auto errorMessage = L"Number expected but '!' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration75()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1!#2";
    auto errorMessage = L"Number expected but '#' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration76()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n1#+2";
    auto errorMessage = L"Number expected but '+' found at position 2.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration77()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n++1++2";
    auto errorMessage = L"Number expected but '++' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration78()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++++2";
    auto errorMessage = L"Number expected but '++' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration79()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n!!1!!2";
    auto errorMessage = L"Number expected but '!!' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration80()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1!!!!2";
    auto errorMessage = L"Number expected but '!!' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration81()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n##1##2";
    auto errorMessage = L"Number expected but '##' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration82()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1####2";
    auto errorMessage = L"Number expected but '##' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration83()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n++1!!2";
    auto errorMessage = L"Number expected but '++' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration84()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n!!1##2";
    auto errorMessage = L"Number expected but '!!' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration85()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n##1++2";
    auto errorMessage = L"Number expected but '##' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration86()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1++!!2";
    auto errorMessage = L"Number expected but '!!' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration87()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1!!##2";
    auto errorMessage = L"Number expected but '##' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration88()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n1##++2";
    auto errorMessage = L"Number expected but '++' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration89()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-11-12";
    auto errorMessage = L"Number expected but '-1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration90()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-1-12";
    auto errorMessage = L"Number expected but '-1' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration91()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-21-22";
    auto errorMessage = L"Number expected but '-2' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration92()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-2-22";
    auto errorMessage = L"Number expected but '-2' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration93()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-31-32";
    auto errorMessage = L"Number expected but '-3' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration94()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-3-32";
    auto errorMessage = L"Number expected but '-3' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration95()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-11-22";
    auto errorMessage = L"Number expected but '-1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration96()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-21-32";
    auto errorMessage = L"Number expected but '-2' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration97()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-31-12";
    auto errorMessage = L"Number expected but '-3' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration98()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-1-22";
    auto errorMessage = L"Number expected but '-2' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration99()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-2-32";
    auto errorMessage = L"Number expected but '-3' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration100()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n1-3-12";
    auto errorMessage = L"Number expected but '-1' found at position 3.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration101()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\nsep11sep12";
    auto errorMessage = L"Number expected but 'sep1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration102()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep1sep12";
    auto errorMessage = L"Number expected but 'sep1' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration103()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\nsep21sep22";
    auto errorMessage = L"Number expected but 'sep2' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration104()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep2sep22";
    auto errorMessage = L"Number expected but 'sep2' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration105()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\nsep31sep32";
    auto errorMessage = L"Number expected but 'sep3' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration106()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep3sep32";
    auto errorMessage = L"Number expected but 'sep3' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration107()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\nsep11sep22";
    auto errorMessage = L"Number expected but 'sep1' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration108()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\nsep21sep32";
    auto errorMessage = L"Number expected but 'sep2' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration109()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\nsep31sep12";
    auto errorMessage = L"Number expected but 'sep3' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration110()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep1sep22";
    auto errorMessage = L"Number expected but 'sep2' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration111()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep2sep32";
    auto errorMessage = L"Number expected but 'sep3' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration112()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n1sep3sep12";
    auto errorMessage = L"Number expected but 'sep1' found at position 5.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration113()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n?1?2";
    auto errorMessage = L"Number expected but '?' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration114()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n??1??2";
    auto errorMessage = L"Number expected but '??' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration115()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1????2";
    auto errorMessage = L"Number expected but '?' found at position 4.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration116()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n???1???2";
    auto errorMessage = L"Number expected but '???' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration117()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1??????2";
    auto errorMessage = L"Number expected but '???' found at position 4.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration118()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n?1??2";
    auto errorMessage = L"Number expected but '?' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration119()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n??1???2";
    auto errorMessage = L"Number expected but '??' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration120()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n???1?2";
    auto errorMessage = L"Number expected but '???' found at position 0.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration121()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1?????2";
    auto errorMessage = L"Number expected but '??' found at position 4.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input starting with a separator or containing multiple separators following each other.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsTwoOrMoreSeparatorsNextWithCustomSeparatorDeclaration122()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n1????2";
    auto errorMessage = L"Number expected but '?' found at position 4.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrors()
{
    // Arrange.
    auto inputValue = "-1\n;|2;";
    auto errorMessage = L"Negatives not allowed : -1\n';' or '\n' expected but ' | ' found at position 4.\nNumber expected but ';' found at position 3.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration1()
{
    // Arrange.
    auto inputValue = "//$\n-1$$|2$";
    auto errorMessage = L"Negatives not allowed : -1\n'$' expected but '|' found at position 4.\nNumber expected but '$' found at position 3.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration2()
{
    // Arrange.
    auto inputValue = "//$$\n-1$$$$|2$$";
    auto errorMessage = L"Negatives not allowed : -1\n'$$' expected but '|' found at position 6.\nNumber expected but '$$' found at position 4.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration3()
{
    // Arrange.
    auto inputValue = "//sep\n-1sepsep|2sep";
    auto errorMessage = L"Negatives not allowed : -1\n'sep' expected but '|' found at position 8.\nNumber expected but 'sep' found at position 5.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration4()
{
    // Arrange.
    auto inputValue = "//\n\n-1\n\n|2\n";
    auto errorMessage = L"Negatives not allowed : -1\n'\n' expected but '|' found at position 4.\nNumber expected but '\n' found at position 3.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration5()
{
    // Arrange.
    auto inputValue = "//-1\n-2-1-1|2-1";
    auto errorMessage = L"Negatives not allowed : -2\n'-1' expected but '|' found at position 6.\nNumber expected but '-1' found at position 4.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration6()
{
    // Arrange.
    auto inputValue = "//[$]\n-1$$|2$";
    auto errorMessage = L"Negatives not allowed : -1\n'$' expected but '|' found at position 4.\nNumber expected but '$' found at position 3.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration7()
{
    // Arrange.
    auto inputValue = "//[$$]\n-1$$$$|2$$";
    auto errorMessage = L"Negatives not allowed : -1\n'$$' expected but '|' found at position 6.\nNumber expected but '$$' found at position 4.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration8()
{
    // Arrange.
    auto inputValue = "//[sep]\n-1sepsep|2sep";
    auto errorMessage = L"Negatives not allowed : -1\n'sep' expected but '|' found at position 8.\nNumber expected but 'sep' found at position 5.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration9()
{
    // Arrange.
    auto inputValue = "//[\n]\n-1\n\n|2\n";
    auto errorMessage = L"Negatives not allowed : -1\n'\n' expected but '|' found at position 4.\nNumber expected but '\n' found at position 3.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration10()
{
    // Arrange.
    auto inputValue = "//[-1]\n-2-1-1|2-1";
    auto errorMessage = L"Negatives not allowed : -2\n'-1' expected but '|' found at position 6.\nNumber expected but '-1' found at position 4.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration11()
{
    // Arrange.
    auto inputValue = "//[-1][-2]\n-3-2-1|2-2";
    auto errorMessage = L"Negatives not allowed : -3\n'-1' or '-2' expected but '|' found at position 6.\nNumber expected but '-1' found at position 4.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration12()
{
    // Arrange.
    auto inputValue = "//[*][%]\n-1%*|2%";
    auto errorMessage = L"Negatives not allowed : -1\n'*' or '%' expected but '|' found at position 4.\nNumber expected but '*' found at position 3.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration13()
{
    // Arrange.
    auto inputValue = "//[**][%%]\n-1%%**|2%%";
    auto errorMessage = L"Negatives not allowed : -1\n'**' or '%%' expected but '|' found at position 6.\nNumber expected but '**' found at position 4.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration14()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2]\n-1sep2sep1|2sep2";
    auto errorMessage = L"Negatives not allowed : -1\n'sep1' or 'sep2' expected but '|' found at position 10.\nNumber expected but 'sep1' found at position 6.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration15()
{
    // Arrange.
    auto inputValue = "//[[][]]\n-1][|2]";
    auto errorMessage = L"Negatives not allowed : -1\n'[' or ']' expected but '|' found at position 4.\nNumber expected but '[' found at position 3.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration16()
{
    // Arrange.
    auto inputValue = "//[+][!][#]\n-1#!|2+";
    auto errorMessage = L"Negatives not allowed : -1\n'+' or '!' or '#' expected but '|' found at position 4.\nNumber expected but '!' found at position 3.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration17()
{
    // Arrange.
    auto inputValue = "//[++][!!][##]\n-1##!!|2++";
    auto errorMessage = L"Negatives not allowed : -1\n'++' or '!!' or '##' expected but '|' found at position 6.\nNumber expected but '!!' found at position 4.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration18()
{
    // Arrange.
    auto inputValue = "//[-1][-2][-3]\n-4-3-2|2-1";
    auto errorMessage = L"Negatives not allowed : -4\n'-1' or '-2' or '-3' expected but '|' found at position 6.\nNumber expected but '-2' found at position 4.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration19()
{
    // Arrange.
    auto inputValue = "//[sep1][sep2][sep3]\n-1sep3sep2|2sep1";
    auto errorMessage = L"Negatives not allowed : -1\n'sep1' or 'sep2' or 'sep3' expected but '|' found at position 10.\nNumber expected but 'sep2' found at position 6.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// The Add method should throw an exception when called with an input containing multiple errors.
void StringCalculatorTests::Test_Add_Should_ThrowException_When_CalledWithInputContainsMultipleErrorsWithCustomSeparatorDeclaration20()
{
    // Arrange.
    auto inputValue = "//[?][??][???]\n-1?????|2?";
    auto errorMessage = L"Negatives not allowed : -1\n'???' or '??' or '?' expected but '|' found at position 7.\nNumber expected but '??' found at position 5.\nNumber expected but EOF found.";
    auto functionCall = [this, inputValue]
    {
        this->Act_Add(inputValue);
    };

    try
    {
        // Act.
        this->Act_Add(inputValue);
    }
    catch (exception& ex)
    {
        // Assert.
        Assert::Fail(errorMessage, LINE_INFO());
    }
}

// Invokes the Add method with the provided test input.
int StringCalculatorTests::Act_Add(string input)
{
	auto stringCalculator = new StringCalculator();

	return stringCalculator->Add(input);
}
