C++ String Utility Class

A simple String Utility Class developed in C++ that provides different functions for working with and manipulating strings.

The project includes functions for counting words and letters, changing letter cases, splitting strings, trimming spaces, reversing words, replacing words, and removing punctuation.

Features

Count Words

Counts the number of words in a string.
Can be used with both static and non-static functions.

Print First Letter of Each Word

Prints the first letter of every word in a string.

Change Letter Case

Converts the first letter of each word to uppercase.
Converts the first letter of each word to lowercase.
Converts the whole string to uppercase.
Converts the whole string to lowercase.
Inverts the case of letters.

Count Letters

Counts all letters in a string.
Counts capital letters.
Counts small letters.
Counts a specific letter.
Counts vowels.

Split String

Splits a string using a specified delimiter.
Returns the result as a vector<string>.

Trim String

Removes spaces from the left side.
Removes spaces from the right side.
Removes spaces from both sides.

Reverse Words

Reverses the order of words in a string.

Replace Word

Replaces a specific word with another word.

Remove Punctuations

Removes punctuation characters from a string.
Technologies Used
C++
string
vector
Static Functions
Function Overloading
String Manipulation
Loops and Conditions
Classes and Objects
Project Structure

The project contains a clsString class with different functions for string operations.

Function	Description
CountWords()	Counts the number of words in a string
PrintFirstLetterOfEachWord()	Prints the first letter of each word
UpperFirstLetterOfEachWord()	Converts the first letter of each word to uppercase
LowerFirstLetterOfEachWord()	Converts the first letter of each word to lowercase
UpperAllString()	Converts the whole string to uppercase
LowerAllString()	Converts the whole string to lowercase
InvertLetterCase()	Inverts the case of a character
InvertAllLettersCase()	Inverts the case of all letters
CountLetters()	Counts letters based on the selected type
CountCapitalLetters()	Counts capital letters
CountSmallLetters()	Counts small letters
CountSpecificLetter()	Counts occurrences of a specific letter
CountVowels()	Counts vowels in a string
PrintVowels()	Prints the vowels in a string
Split()	Splits a string into words
TrimLeft()	Removes spaces from the left
TrimRight()	Removes spaces from the right
Trim()	Removes spaces from both sides
ReverseWords()	Reverses the order of words
ReplaceWord()	Replaces a word with another word
RemovePunctuations()	Removes punctuation characters
Example
clsString String3("hi how are you?");

String3.UpperAllString();

cout << String3.Value << endl;


Output:

HI HOW ARE YOU?


Another example:

String3.Value = "Abd Al-Rahman KH Abdallah";

String3.ReverseWords();

cout << String3.Value << endl;


Output:

Abdallah KH Al-Rahman Abd


The main.cpp file contains examples for testing the different functions available in the class.

Purpose

This project was created to practice different C++ programming concepts, including:

Classes and Objects
Encapsulation
Static Functions
Function Overloading
Strings
Vectors
String Manipulation
Loops
Conditional Statements
Basic Algorithms
Author

Abd Al-Rahman
