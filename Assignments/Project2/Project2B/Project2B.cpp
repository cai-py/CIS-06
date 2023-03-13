// Project2B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double due, received, change;
    int hundered, twenty, ten, five, one, c25, c10, c5, c1;

    cout << "How much money was due? " << endl;
    cin >> due;

    cout << "How much money was received? " << endl;
    cin >> received;

    change = received - due;
    cout << "Your change is $" << change << endl;

    hundered = change / 100;
    change = change - (hundered * 100);
    cout << hundered << ": $100 bills" << endl;

    twenty = change / 20;
    change = change - (twenty * 20);
    cout << twenty << ": $20 bills" << endl;

    ten = change / 10;
    change = change - (ten * 10);
    cout << ten << ": $10 bills" << endl;

    five = change / 5;
    change = change - (five * 5);
    cout << five << ": $5 bills" << endl;

    one = change;
    change = change - one;
    cout << one << ": $1 bills" << endl;

    c25 = change / 0.25;
    change = change - (c25 * 0.25);
    cout << c25 << ": 25c coins" << endl;

    c10 = change / 0.1;
    change = change - (c10 * 0.1);
    cout << c10 << ": 10c coins" << endl;

    c5 = change / 0.05;
    change = change - (c5 * 0.05);
    cout << c5 << ": 5c coins" << endl;

    c1 = change / 0.01;
    change = change - (c1 * 0.01) + 1;
    cout << c1 << ": 1c coins" << endl;

}

/*
OUTPUT:

How much money was due?
230.27
How much money was received?
500
Your change is $269.73
2: $100 bills
3: $20 bills
0: $10 bills
1: $5 bills
4: $1 bills
2: 25c coins
2: 10c coins
0: 5c coins
3: 1c coins
*/