// Project4D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int rows, stars, spaces, totalSpaces;
    stars = 2;
    rows = 12;
    spaces = rows / 2;
    totalSpaces = 34;
    char star = '*';

    for (int i = 0; i < rows / 2; i++) {
        for (int j = 0; j < totalSpaces - (stars / 2); j++) {
            cout << " ";
        }
        for (int j = 0; j < stars; j++) {
            cout << star;
        }
        cout << endl;
        stars = stars * 2;
    }
    stars = stars / 2;
    for (int i = 0; i < rows / 2; i++) {
        /*spaces = spaces + 1;
        stars = stars - 2;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }*/
        stars = stars / 2;
        for (int j = 0; j < totalSpaces - (stars / 2); j++) {
            cout << " ";
        }
        for (int j = 0; j < stars && stars > 1; j++) {
            cout << star;
        }
        cout << endl;
    }
}

/*
OUTPUT
------------------------------------------------------------------------------
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




PLAYGROUND
------------------------------------------------------------------------------

                                 **                                  33 | 34
                                ****                                 32 | 34
                              ********                               30 | 34
                          ****************                           26 | 34
                  ********************************                   18 | 34
****************************************************************     0  | 34
                  ********************************
                          ****************
                              ********
                                ****
                                 **
*/