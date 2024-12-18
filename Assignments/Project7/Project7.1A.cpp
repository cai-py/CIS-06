#include <iostream>
#include <ctime>

using namespace std;

double randomNum();
void printLine(int);

// initialize counters to zero
int C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, C6 = 0, C7 = 0, C8 = 0, C9 = 0, C10 = 0;

int main() {
    // SEED
    srand(time(NULL));

    // loop 10000 times and update counters
    for (int i = 0; i < 10000; i++) {
        double temp = randomNum();
        if (temp >= 0 && temp < 0.1) {
            C1++;
        }else if (temp >= 0.1 && temp < 0.2) {
            C2++;
        }else if (temp >= 0.2 && temp < 0.3) {
            C3++;
        }else if (temp >= 0.3 && temp < 0.4) {
            C4++;
        }else if (temp >= 0.4 && temp < 0.5) {
            C5++;
        }else if (temp >= 0.5 && temp < 0.6) {
            C6++;
        }else if (temp >= 0.6 && temp < 0.7) {
            C7++;
        }else if (temp >= 0.7 && temp < 0.8) {
            C8++;
        }else if (temp >= 0.8 && temp < 0.9) {
            C9++;
        }else if (temp >= 0.9 && temp < 1) {
            C10++;
        }
    }
    cout << "0.0 <= x < 0.1 |";
    printLine(C1/10);
    cout << "0.1 <= x < 0.2 |";
    printLine(C2/10);
    cout << "0.2 <= x < 0.3 |";
    printLine(C3/10);
    cout << "0.3 <= x < 0.4 |";
    printLine(C4/10);
    cout << "0.4 <= x < 0.5 |";
    printLine(C5/10);
    cout << "0.5 <= x < 0.6 |";
    printLine(C6/10);
    cout << "0.6 <= x < 0.7 |";
    printLine(C7/10);
    cout << "0.7 <= x < 0.8 |";
    printLine(C8/10);
    cout << "0.8 <= x < 0.9 |";
    printLine(C9/10);
    cout << "0.9 <= x < 1.0 |";
    printLine(C10/10);

    cout << endl << "Each * character represents about 10 numbers that were generated" << endl;
}

// generate a random number between 0-1;
double randomNum() {
    double temp, num;
    temp = rand() % 100;
    num = temp / 100;
    return num;
}

// print a line for the histogram
void printLine(int n) {
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

/*
OUTPUT:
-------------------------------------------------------
0.0 <= x < 0.1 |***************************************************************************************************
0.1 <= x < 0.2 |**************************************************************************************************
0.2 <= x < 0.3 |*****************************************************************************************************
0.3 <= x < 0.4 |********************************************************************************************************
0.4 <= x < 0.5 |******************************************************************************************************
0.5 <= x < 0.6 |**************************************************************************************************
0.6 <= x < 0.7 |*******************************************************************************************************
0.7 <= x < 0.8 |***************************************************************************************************
0.8 <= x < 0.9 |***************************************************************************************************
0.9 <= x < 1.0 |*********************************************************************************************

Each * character represents about 10 numbers that were generated
-------------------------------------------------------
*/



/*
CODE GRAVEYARD

-------------------------------------------------------
// generate a random number between 0-1;
double randomNum() {
    double temp, num;
    srand(time(0));
    temp = rand() % 100;
    num = temp / 100;
    return num;
}
// ISSUE: because this uses time to generate a seemingly random number, it generates the same number when the program runs in only a few seconds
// RESOURCES: 
    - https://stackoverflow.com/questions/41875884/how-to-generate-random-numbers-in-c-without-using-time-as-a-seed
    -
// SOLUTION: seed "srand()" in the main function and set it to NULL
    - you dont need to seed it to "NULL" but from what i've seen, this is a common practice
-------------------------------------------------------


*/