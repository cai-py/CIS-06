// Project4B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number you want to reverse: ";
    cin >> num;
    
    string numString = to_string(num);
    int stringLength = numString.length();

    for (int i = 0; i <= numString.length(); i++) {
        cout << numString[stringLength];
        stringLength = stringLength - 1;
    }
    cout << endl;
}

/*
OUTPUT: 

---------------------
Enter a number you want to reverse: 12345
54321

---------------------
Enter a number you want to reverse: 987654321
123456789

*/