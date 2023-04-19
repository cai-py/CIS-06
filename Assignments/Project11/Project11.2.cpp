
#include <iostream>

using namespace std;

bool paliCheck(string, int);

int main() {
    string pdString;

    // get user data
    cout << "Enter a word or phrase to check if it is a palindrome: ";
    cin >> pdString;


    int stringLength = pdString.length();
    if (paliCheck(pdString, stringLength)) {
        cout << pdString << ", is a palindrome!!" << endl;
    }else {
        cout << pdString << ", is not a palindrome. :(" << endl;
    }

    return 0;
}

bool paliCheck(string str, int n) {
    // if it loops all the way through the string and all the outer characters match return true
    if (n <= 1) {
        return true;
    }

    // check if outer characters dont match
    if (str[0] != str[n-1]) {
        return false;
    }

    // remove outermost characters and call function again 
    string newStr = str.substr(1, n-2);
    int newLength = n - 2;
    return paliCheck(newStr, newLength);
}

/*
----- OUTPUT -----
Enter a word or phrase to check if it is a palindrome: Computer
Computer, is not a palindrome. :(
------------------
Enter a word or phrase to check if it is a palindrome: level
level, is a palindrome!!
*/