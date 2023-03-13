// Project5B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the nth fibonacci number you'd like to find: ";
    cin >> n;


    int nth, n1, n2;
    nth = 0;
    n1 = 0;
    n2 = 1;

    if (n == 0 || n == 1) {
        nth = n;
    }
    else {
        for (int i = 2; i <= n; i++) {
            nth = n1 + n2;
            n1 = n2;
            n2 = nth;
        }
    }

    cout << "The nth fibonacci number is: " << nth << endl;



}

/*
Write a program to compute the nth Fibonacci number.  Fibonacci numbers are defined as
follows:

fo = 0
f1 = 1
fk = fk-1 + fk-2

where fi is the ith Fibonacci number.

(The zeroth and first Fibbnocci numbers are defined as 0 and 1, respectively.  Knowing
the first two Fibonacci numbers we can calculate the second using the formula f2 = f1 + f0
= 1, and so on.)

-------------------
OUTPUT

Enter the nth fibonacci number you'd like to find: 5
The nth fibonacci number is: 5

-------------------
Enter the nth fibonacci number you'd like to find: 8
The nth fibonacci number is: 21

-------------------
Enter the nth fibonacci number you'd like to find: 20
The nth fibonacci number is: 6765

*/