// Project4C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int rows, starCounter;
    starCounter = 1;
    rows = 6;
    char star = '*';

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < starCounter; j++) {
            cout << star;
        }
        cout << endl;
        starCounter = starCounter * 2;
    }

    for (int i = 0; i < rows + 1; i++) {
        for (int j = starCounter; j > 0; j--) {
            cout << star;
        }
        cout << endl;
        starCounter = starCounter / 2;
    }
}

/*
OUTPUT
--------------------------
*
**
****
********
****************
********************************
****************************************************************
********************************
****************
********
****
**
*

*/