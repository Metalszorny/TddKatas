# TddKatas


## Description
This project contains implementations of TDD Kata exercises. 
These are very usefull to do when learning test driven development and can improove problem solving skills.
The exercises might not be the original ones that can be found online.

### Rules
- Try not to read ahead.
- Do one task at a time. The trick is to learn to work incrementally.
- Write code as simple as possible.
- After a functionality passed all tests, refactor it and repeat until it's at it's optimal state.


### Exercises

#### String Calculator
Since the decimal number separator character can be the comma or the period sign depending on the cultural setting and is a bit more difficult to properly test in all cultural settings it will be enough for the calculator to only handle integer numbers.
A varian of this exercise can be a function that will multiply the given numbers.
1. Create a simple string calculator with a function signature: int add(string numbers)
The method can take up to two numbers, separated by semicolons, and will return their sum.
An empty string it will return 0. It's also a good idea to return 0 for an input only containing whitespaces or null/nil/None.
Example inputs: “” or “1” or “1;2”.
>Hints:
>- Start with the simplest test case of an empty string and move to one and two numbers.
>- Remember to solve things as simply as possible so that you force yourself to write tests you did not think about.
>- Remember to refactor after each passing test.
2. Allow the Add method to handle an unknown amount of numbers.
3. Allow the Add method to handle new lines between numbers (instead of semicolons).
- The following input is ok: “1\n2;3” (will equal 6)
- The following input is NOT ok: “1;\n2” (this should return the message "Number expected but '\n' found at position 2.")
- The following input is NOT ok: ";1\n2" (this should return the message "Number expected but ';' found at position 0.")
- The following input is NOT ok: "1;" (this should return the message "Number expected but EOF found.")
4. Support different delimiters.
- To change a delimiter, the beginning of the string will contain a separate line that looks like this: “//[delimiter]\n[numbers…]” for example “//%\n1%2” should return three where the default delimiter is ‘%’.
-- "//;\n1;2" should return "3"
-- "//|\n1|2|3" should return "6"
-- "//sep\n2sep3" should return "5"
-- "//|\n1|2,3" is invalid and should return the message "'|' expected but ',' found at position 3."
- The first line is optional, all existing scenarios should still be supported.
5. Calling Add with a negative number will throw an exception “Negatives not allowed : ” - and the negative that was passed. 
If there are multiple negatives, show all of them in the exception message.
- "-1,2" is invalid and should return the message "Negatives not allowed : -1"
- "2,-4,-5" is invalid and should return the message "Negatives not allowed : -4, -5"
6. Calling add with multiple errors will return all error messages separated by newlines.
- "-1,,2" is invalid and return the message "Negative not allowed : -1\nNumber expected but ',' found at position 3."
7. Numbers bigger than 1000 should be ignored, so adding 2 + 1001 = 2.
8. Delimiters can be of any length with the following format: “//[delimiter]\n” for example: “//[+++]\n1+++2+++3” should return 6.
9. Allow multiple delimiters like this: “//[delim1][delim2]\n” for example “//[+][%]\n1+2%3” should return 6.
10. Make sure you can also handle multiple delimiters with length longer than one char.


## Used Languages
- Java
- JavaScript
- Php
- Python
- Ruby
- Visual C# Core
- Visual C++