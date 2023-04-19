
#include <iostream>

using namespace std;

bool paliCheck(string, int);

int main() {
    string pdString;

    cout << "Enter a word or phrase to check if it is a palindrome: ";
    cin >> pdString;

    int stringLength = pdString.length();
    if (paliCheck(pdString, stringLength)) {
        cout << "true";
    }else {
        cout << "false";
    }

    return 0;
}

bool paliCheck(string str, int n) {
    // reverse string 
    string revStr = "";
    for (int i = n -1; i >= 0; i--) {
        revStr += str[i];
    }
    

    // compare original string to reverse string
    // if match return true
    // if not matched return false
    if (str == revStr) {
        return true;
    }else {
        return false;
    }
}