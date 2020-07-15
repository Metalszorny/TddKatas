#include "pch.h"
#include "framework.h"
#include "./StringCalculator.h"

// Initialises a new instance on the <see cref="StringCalculator"/> class.
StringCalculator::StringCalculator()
{
    this->Initialize();
}

// Terminates an instance on the <see cref="StringCalculator"/> class.
StringCalculator::~StringCalculator()
{
    this->numberSeparators.clear();
    this->substitutionCharacters.clear();
}

// Adds the provided numbers together.
int StringCalculator::Add(string numbers)
{
    // Return zero if the input is empty string or whitespace.
    if (this->isNullOrWhiteSpace(numbers))
    {
        return 0;
    }

    vector<string> errorMessages;

    // Detect and set any given custom separator.
    numbers = this->HandleCustomSeparators(numbers);

    // Detect any negative numbers in the input and create an error message if any are found.
    this->HandleNegativeNumbers(numbers, errorMessages);

    // Detect any unregistered or unsupported separators and create an error message if any are found.
    this->HandleUnregisteredSeparators(numbers, errorMessages);

    // Calculate the sum of the given numbers and detect and errors in the input.
    auto sum = this->ProcessNumbers(numbers, errorMessages);

    // Throw an exception if any errors were detected.
    if (!errorMessages.empty())
    {
        throw new exception(this->join("\n", errorMessages).c_str());
    }

    return sum;
}

// Initialise variables.
void StringCalculator::Initialize()
{
    // Initialize the default number separators.
    this->numberSeparators.push_back(";");
    this->numberSeparators.push_back("\n");
    this->substitutionCharacters.push_back(';');
    this->substitutionCharacters.push_back('\'');
    this->substitutionCharacters.push_back('"');
    this->substitutionCharacters.push_back('+');
    this->substitutionCharacters.push_back('!');
    this->substitutionCharacters.push_back('-');
    this->substitutionCharacters.push_back('%');
    this->substitutionCharacters.push_back('/');
    this->substitutionCharacters.push_back('=');
    this->substitutionCharacters.push_back('~');
    this->substitutionCharacters.push_back('(');
    this->substitutionCharacters.push_back(')');
    this->substitutionCharacters.push_back('*');
    this->substitutionCharacters.push_back('_');
    this->substitutionCharacters.push_back(':');
    this->substitutionCharacters.push_back(',');
    this->substitutionCharacters.push_back('?');
    this->substitutionCharacters.push_back('.');
    this->substitutionCharacters.push_back('{');
    this->substitutionCharacters.push_back('}');
    this->substitutionCharacters.push_back('@');
    this->substitutionCharacters.push_back('&');
    this->substitutionCharacters.push_back('#');
    this->substitutionCharacters.push_back('>');
    this->substitutionCharacters.push_back('<');
    this->substitutionCharacters.push_back('[');
    this->substitutionCharacters.push_back(']');
    this->substitutionCharacters.push_back('$');
    this->substitutionCharacters.push_back('\\');
    this->substitutionCharacters.push_back('|');
    this->substitutionCharacters.push_back('€');
    this->substitutionCharacters.push_back('÷');
    this->substitutionCharacters.push_back('¤');
    this->substitutionCharacters.push_back('^');
    this->substitutionCharacters.push_back('§');
}

// Detects any provided definition for custom number separators and sets them to be used.
string StringCalculator::HandleCustomSeparators(string numbers)
{
    // If any custom separators are given in the start of the input.
    if (this->startsWith(numbers, "//"))
    {
        // Clear the default number separators.
        this->numberSeparators.clear();

        // Get the custom separator definition.
        auto customSeparator = this->GetTheCustomSeparatorDefinitionFromTheInput(numbers);

        // Remove the custom separator definition from the input.
        this->replaceAll(numbers, "//" + customSeparator + "\n", "");

        // Process the custom separator definition.
        this->ProcessCustomSeparatorDefinition(customSeparator);
    }

    return numbers;
}

// Detects any provided negative numbers in the input.
void StringCalculator::HandleNegativeNumbers(string numbers, vector<string> errorMessages)
{
    numbers = this->ReplaceSeparatorsInInput(numbers);
    auto negativesFound = this->CollectNegativeNumbersFromInput(numbers);

    // If any negative numbers were found, create an error message.
    if (negativesFound.size() > 0)
    {
        errorMessages.push_back("Negatives not allowed : " + this->join(", ", negativesFound));
    }
}

// Detects any unsupported number separators in the input.
void StringCalculator::HandleUnregisteredSeparators(string numbers, vector<string> errorMessages)
{
    auto originalNumbers = numbers;
    auto substitutionCharacter = this->GetSubstitutionString(numbers);
    numbers = this->SubstituteSeparatorsInInput(numbers, substitutionCharacter);
    numbers = this->SubstituteNumbersInInput(numbers, substitutionCharacter);
    numbers = this->TruncateTextSubstitutionInInput(numbers, substitutionCharacter);

    if (this->isNullOrWhiteSpace(numbers))
    {
        return;
    }

    auto numberParts = this->split(numbers, string(1, substitutionCharacter));

    // If there's anything still remaining in the input, that's unsupported and an error should be added about it.
    for (auto numberPart : numberParts)
    {
        if (this->isNullOrWhiteSpace(numberPart))
        {
            continue;
        }

        auto indexOfUnsupportedSeparator = originalNumbers.find(numberPart);
        errorMessages.push_back("'" + this->join("' or '", this->numberSeparators) + "' expected but '" + numberPart + "' found at position " + to_string(indexOfUnsupportedSeparator) + ".");
    }
}

// Processes the input string's numbers and returns the sum of them.
int StringCalculator::ProcessNumbers(string numbers, vector<string> errorMessages)
{
    // Return zero if the numbers part is null, empty string or whitespace.
    if (this->isNullOrWhiteSpace(numbers))
    {
        return 0;
    }

    auto originalNumbers = numbers;
    auto substitutedNumbers = this->SubstituteSeparatorsInInput(numbers, ';');
    numbers = this->ReplaceSeparatorsInInput(numbers);
    auto numberParts = this->split(numbers, ";");
    auto sum = 0;
    int index;

    // Process the numbers from the input.
    for (index = 0; index < numberParts.size(); index++)
    {
        auto numberPart = numberParts[index];

        // If the current number is empty an error should be added.
        if (this->isNullOrWhiteSpace(numberPart))
        {
            // If the number is at the end of the input.
            if (index == numberParts.size() - 1)
            {
                errorMessages.push_back("Number expected but EOF found.");
            }
            else
            {
                auto indexOfUnexpected = 0;

                if (index > 0)
                {
                    auto previousNumber = numberParts[index - 1];
                    indexOfUnexpected = substitutedNumbers.find(previousNumber) + previousNumber.length();

                    for (auto numberSeparator : this->numberSeparators)
                    {
                        auto currentVersion = previousNumber + numberSeparator;

                        if (originalNumbers.find(currentVersion) != string::npos &&
                            originalNumbers.find(currentVersion) == indexOfUnexpected - previousNumber.length())
                        {
                            indexOfUnexpected += numberSeparator.length();
                            break;
                        }
                    }
                }

                auto nextNumberIndex = substitutedNumbers.find(numberParts[index + 1]);
                auto unexpectedSeparator = originalNumbers.substr(indexOfUnexpected, nextNumberIndex - indexOfUnexpected);
                errorMessages.push_back("Number expected but '" + unexpectedSeparator + "' found at position " + to_string(indexOfUnexpected) + ".");
            }
        }
        // If the number can be parsed and are up to 1000, add it to the sum.
        else if (this->intTryParse(numberPart) && stoi(numberPart) <= 1000)
        {
            sum += stoi(numberPart);
        }
    }

    return sum;
}

// Gets the custom delimiter definition from the input.
string StringCalculator::GetTheCustomSeparatorDefinitionFromTheInput(string numbers)
{
    auto customSeparator = numbers.substr(2);

    if (this->startsWith(numbers, "//["))
    {
        customSeparator = customSeparator.substr(0, customSeparator.find("]\n") + 1);
    }
    else if (this->startsWith(numbers, "//\n\n"))
    {
        customSeparator = "\n";
    }
    else
    {
        customSeparator = customSeparator.substr(0, customSeparator.find("\n"));
    }

    return customSeparator;
}

// Processes the custom delimiter definition from the input and adds them to the used separators.
void StringCalculator::ProcessCustomSeparatorDefinition(std::string customSeparator)
{
    // If there are multiple custom separators given.
    if (customSeparator.find("][") != string::npos)
    {
        do
        {
            auto currentPart = customSeparator.substr(0, customSeparator.find("][") + 1);
            this->replaceAll(customSeparator, currentPart, "");
            currentPart = this->RemoveSquareBracketsFromStartAndEnd(currentPart);
            this->numberSeparators.push_back(currentPart);
        } while (customSeparator.find("][") != string::npos);
    }

    customSeparator = this->RemoveSquareBracketsFromStartAndEnd(customSeparator);
    this->numberSeparators.push_back(customSeparator);
    sort(this->numberSeparators.begin(), this->numberSeparators.end(), greater<string>());
}

// Removes the square brackets from the given custom delimiter.
string StringCalculator::RemoveSquareBracketsFromStartAndEnd(string customSeparator)
{
    // If the custom separator is defined in squarely braces, remove them.
    if (this->startsWith(customSeparator, "[") &&
        this->endsWith(customSeparator, "]"))
    {
        customSeparator = customSeparator.substr(1);
        customSeparator = customSeparator.substr(0, customSeparator.length() - 1);
    }

    return customSeparator;
}

// Replaces the number separators with a single type in the input. This may shorten the length of the input.
string StringCalculator::ReplaceSeparatorsInInput(string numbers)
{
    // Process the supported number separators.
    for (auto numberSeparator : this->numberSeparators)
    {
        this->replaceAll(numbers, numberSeparator, ";");
    }

    return numbers;
}

// Replaces the number separators with the given character in the input, but keeps the length of the input.
string StringCalculator::SubstituteSeparatorsInInput(string numbers, char substitutionCharacter)
{
    // Process the supported number separators.
    for (auto numberSeparator : this->numberSeparators)
    {
        auto separatorSubstitution = "";

        for (auto i = 0; i < numberSeparator.length(); i++)
        {
            separatorSubstitution += substitutionCharacter;
        }

        this->replaceAll(numbers, numberSeparator, separatorSubstitution);
    }

    return numbers;
}

// Replaces the numbers with the given character in the input, but keeps the length of the input.
string StringCalculator::SubstituteNumbersInInput(string numbers, char substitutionCharacter)
{
    regex regularExpressionPattern("([0-9.,-]+)+");
    auto regexMatches = this->regexMatches(numbers, regularExpressionPattern);
    sort(regexMatches.begin(), regexMatches.end(), greater<string>());

    // Cut out each number from the input.
    for (auto regexMatch : regexMatches)
    {
        auto separatorSubstitution = "";

        for (auto i = 0; i < regexMatch.length(); i++)
        {
            separatorSubstitution += substitutionCharacter;
        }

        this->replaceAll(numbers, regexMatch, separatorSubstitution);
    }

    return numbers;
}

// Truncates the given character in the input if it contains multiple occurrences in one place.
string StringCalculator::TruncateTextSubstitutionInInput(string numbers, char substitutionCharacter)
{
    while (numbers.find(substitutionCharacter + substitutionCharacter) != string::npos)
    {
        this->replaceAll(numbers, string(1, substitutionCharacter) + string(1, substitutionCharacter), string(1, substitutionCharacter));
    }

    return numbers;
}

// Gets a character that is not used in the input and can be used to substitute all number delimiters.
char StringCalculator::GetSubstitutionString(string numbers)
{
    auto substitutionCharacter = (char)"";

    for (auto currentCharacter : this->substitutionCharacters)
    {
        if (numbers.find(currentCharacter) == string::npos)
        {
            substitutionCharacter = currentCharacter;
            break;
        }
    }

    return substitutionCharacter;
}

// Collects the negative numbers from the input.
vector<string> StringCalculator::CollectNegativeNumbersFromInput(string numbers)
{
    vector<string> negativesFound;
    regex regularExpressionPattern("([0-9.,-]+)+");
    auto regexMatches = this->regexMatches(numbers, regularExpressionPattern);

    // Check each number if it's negative and gather them up.
    for (auto regexMatch : regexMatches)
    {
        if (this->intTryParse(regexMatch) && stoi(regexMatch) < 0)
        {
            negativesFound.push_back(regexMatch);
        }
    }

    return negativesFound;
}

void StringCalculator::replaceAll(string& str, const string& from, const string& to)
{
    if (from.empty())
    {
        return;
    }

    auto start_pos = 0;

    while ((start_pos = str.find(from, start_pos)) != string::npos)
    {
        str.replace(start_pos, from.length(), to);
        // In case 'to' contains 'from', like replacing 'x' with 'yx'.
        start_pos += to.length();
    }
}

bool StringCalculator::endsWith(const string& str, const string& suffix)
{
    return str.size() >= suffix.size() && 0 == str.compare(str.size() - suffix.size(), suffix.size(), suffix);
}

bool StringCalculator::startsWith(const string& str, const string& prefix)
{
    return str.size() >= prefix.size() && 0 == str.compare(0, prefix.size(), prefix);
}

bool StringCalculator::isNullOrWhiteSpace(const string& str)
{
    if (str.empty() || str.find_first_not_of(' ') == string::npos)
    {
        return true;
    }

    return false;
}

string StringCalculator::join(string separator, vector<string> collection)
{
    string s;

    for (vector<string>::const_iterator i = collection.begin(); i != collection.end(); ++i)
    {
        s += *i;

        if (i != collection.end())
        {
            s += separator;
        }
    }

    return s;
}

vector<string> StringCalculator::split(const string& str, const string& delim)
{
    vector<string> tokens;
    auto prev = 0;
    auto pos = 0;

    do
    {
        pos = str.find(delim, prev);

        if (pos == string::npos)
        {
            pos = str.length();
        }

        auto token = str.substr(prev, pos - prev);

        if (!token.empty())
        {
            tokens.push_back(token);
        }

        prev = pos + delim.length();
    } while (pos < str.length() && prev < str.length());

    return tokens;
}

bool StringCalculator::intTryParse(const string& str)
{
    try
    {
        stoi(str);
        return true;
    }
    catch (const std::exception&)
    {
        return false;
    }
}

vector<string> StringCalculator::regexMatches(const string& str, const regex ptrn)
{
    vector<string> retVal;
    smatch sm;

    if (regex_search(str, sm, ptrn))
    {
        for (int i = 1; i < sm.size(); i++)
        {
            retVal.push_back(sm[i]);
        }
    }

    return retVal;
}
