// Project4A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, answer;
    answer = 0;

    cout << "Enter the first number you want to multiply: ";
    cin >> num1;

    cout << "Enter the second number you want to multiply: ";
    cin >> num2;

    for (int i = 0; i < num1; i++) {
        answer = answer + num2;
    }

    cout << "The answer is: " << answer << endl;
}

/*
OUTPUTS
------------------------------
Enter the first number you want to multiply: 12
Enter the second number you want to multiply: 12
The answer is: 144

------------------------------
Enter the first number you want to multiply: 7
Enter the second number you want to multiply: 14
The answer is: 98

------------------------------
Enter the first number you want to multiply: 9
Enter the second number you want to multiply: 8
The answer is: 72

*/