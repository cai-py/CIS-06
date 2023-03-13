// Project5A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string word;
    int vowels, consonants;
    vowels = 0;
    consonants = 0;

    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        //cout << word[i] << endl;
        char letter = (char)tolower(word[i]);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y') {
            vowels++;
        }
        else {
            consonants++;
        }
    }

    cout << endl << "The word contains " << vowels << " vowels and " << consonants << " consonants." << endl;
}

/*
-----------------
Write a program that reads a word and prints the number of vowels and consonants in the
word.  For this exercise assume that ‘a’, ‘e’, ‘i’, ‘o’, ‘u’, and ‘y’ are vowels.  For
example, if the user enters the input “Harry”, the program should print “The word
contains 2 vowels and 3 consonants”.

-----------------
OUTPUT
Enter a word: berkeleycitycollege

The word contains 9 vowels and 10 consonants.

*/