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
        double randSum = 0;
        for (int j = 0; j < 10; j++) {
            double temp = randomNum();
            randSum += temp;
        }
        
        // add up 10 random numbers
        double temp = randSum;
        if (temp >= 0 && temp < 1) {
            C1++;
        }else if (temp >= 1 && temp < 2) {
            C2++;
        }else if (temp >= 2 && temp < 3) {
            C3++;
        }else if (temp >= 3 && temp < 4) {
            C4++;
        }else if (temp >= 4 && temp < 5) {
            C5++;
        }else if (temp >= 5 && temp < 6) {
            C6++;
        }else if (temp >= 6 && temp < 7) {
            C7++;
        }else if (temp >= 7 && temp < 8) {
            C8++;
        }else if (temp >= 8 && temp < 9) {
            C9++;
        }else if (temp >= 9 && temp < 1) {
            C10++;
        }
    }
    cout << "0 <= x < 1 |";
    printLine(C1/10);
    cout << "1 <= x < 2 |";
    printLine(C2/10);
    cout << "2 <= x < 3 |";
    printLine(C3/10);
    cout << "3 <= x < 4 |";
    printLine(C4/10);
    cout << "4 <= x < 5 |";
    printLine(C5/10);
    cout << "5 <= x < 6 |";
    printLine(C6/10);
    cout << "6 <= x < 7 |";
    printLine(C7/10);
    cout << "7 <= x < 8 |";
    printLine(C8/10);
    cout << "8 <= x < 9 |";
    printLine(C9/10);
    cout << "9 <= x < 1.0 |";
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
OUTPUT
-------------------------------------------------------
0 <= x < 1 |
1 <= x < 2 |
2 <= x < 3 |*************
3 <= x < 4 |**************************************************************************************************************************************
4 <= x < 5 |*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
5 <= x < 6 |*********************************************************************************************************************************************************************************************************************************************************************************************************************************************************************
6 <= x < 7 |******************************************************************************************************************
7 <= x < 8 |*************
8 <= x < 9 |
9 <= x < 1.0 |

Each * character represents about 10 numbers that were generated
-------------------------------------------------------
*/