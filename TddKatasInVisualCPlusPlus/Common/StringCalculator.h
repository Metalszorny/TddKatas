#ifndef StringCalculator_h
#define StringCalculator_h

#include <string>
#include <vector>
#include <regex>

using namespace std;

class StringCalculator
{
public:
	StringCalculator();
	~StringCalculator();
	int Add(string numbers);
protected:
	vector<string> numberSeparators;
	vector<char>substitutionCharacters;
	void Initialize();
	string HandleCustomSeparators(std::string numbers);
	void HandleNegativeNumbers(string numbers, vector<string> errorMessages);
	void HandleUnregisteredSeparators(string numbers, vector<string> errorMessages);
	int ProcessNumbers(string numbers, vector<string> errorMessages);
	string GetTheCustomSeparatorDefinitionFromTheInput(string numbers);
	void ProcessCustomSeparatorDefinition(std::string customSeparator);
	string RemoveSquareBracketsFromStartAndEnd(string customSeparator);
	string ReplaceSeparatorsInInput(string numbers);
	string SubstituteSeparatorsInInput(string numbers, char substitutionCharacter);
	string SubstituteNumbersInInput(string numbers, char substitutionCharacter);
	string TruncateTextSubstitutionInInput(string numbers, char substitutionCharacter);
	char GetSubstitutionString(string numbers);
	vector<string> CollectNegativeNumbersFromInput(string numbers);
	void replaceAll(string& str, const string& from, const string& to);
	bool endsWith(const string& str, const string& suffix);
	bool startsWith(const string& str, const string& prefix);
	bool isNullOrWhiteSpace(const string& str);
	string join(string separator, vector<string> collection);
	vector<string> split(const string& str, const string& delim);
	bool intTryParse(const string& str);
	vector<string> regexMatches(const string& str, const regex ptrn);
};
#endif