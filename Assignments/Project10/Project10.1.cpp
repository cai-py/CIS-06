/*
Write a program that checks whether a given string is a palindrome. A palindrome is
defined as a word that reads identically backward and forward. For example, ‘madam’
and ‘level’ are palindromes.
Your program should a Boolean function that takes a string parameter and returns TRUE
if the string is a palindrome.
*/

#include <iostream>

using namespace std;

void paliCheck(string, int);

int main() {
    string pdString;

    cout << "Enter a word or phrase to check if it is a plindrome: ";
    cin >> pdString;

    int stringLength = pdString.length();
    paliCheck(pdString, stringLength);
}

void paliCheck(string str, int n) {
    // reverse string 
    string revStr;
    for (int i = 0; i < n; i++) {
        for (int j = n; j > 0; j--) {
            revStr[i] = str[j];
        }
    }
    cout << "Reverse: " << revStr << endl;

    // compare original string to reverse string
    // if match return true
    // if not matched return false
}