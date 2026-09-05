#include <iostream>
#include "clsString.h"
using namespace std;

int main()

{
    clsString String1;


    clsString String2("Mohammed");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omer") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Mohammed Saqer Abu-Hadhoud") << endl;
    //----------------
        String1.PrintFirstLetterOfEachWord();
        cout << endl;
    //----------------
    clsString String3("hi how are you?");

    cout << "String 3 = " << String3.Value << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.UpperAllString();
    cout << String3.Value << endl;

    //----------------

    String3.LowerAllString();
    cout << String3.Value << endl;

    //----------------

    cout << "After inverting a : "
        << clsString::InvertLetterCase('a') << endl;

    //----------------

    String3.Value = "AbCdEfg";

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    //----------------

    cout << "Capital Letters count : "
        << clsString::CountLetters("Mohammed Abu-Hadhoud", clsString::CapitalLetters)
        << endl << endl;

    //----------------

    String3.Value = "Welcome to Jordan";
    cout << String3.Value << endl;

    cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

    //----------------

    cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

    //----------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.CountSpecificLetter('E') << endl;

    //----------------

    cout << "Words Count" << String3.CountWords()
        << endl;

    //----------------


    vector<string> vString;

    vString = String3.Split(" ");

    String3.Value = "    Abd Al-Rahman Abdallah     ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Abd Al-Rahman Abdallah     ";
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.Value;

    //----------------

    String3.Value = "    Abd Al-Rahman Abdallah     ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value;

    //----------------

    String3.Value = "    Abd Al-Rahman Abdallah     ";
    String3.Trim();
    cout << "\nTrim       = " << String3.Value;

    //----------------

    String3.Value = "Abd Al-Rahman KH Abdallah";
    cout << "\n\nString     = " << String3.Value;

    String3.ReverseWords();
    cout << "\nReverse Words : " << String3.Value
        << endl;

    //---------------

    String3.Value = "Abd Al-Rahman KH Abdallah";
    cout << "\nReplace : " << String3.ReplaceWord("Abdallah", "Ahmad")
        << endl;

    //---------------

    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\n\nString     = " << String3.Value;

    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.Value
        << endl;

    //---------------
    system("pause>0");
    return 0;
};
