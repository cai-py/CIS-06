#include <iostream>
#include <ctime>

using namespace std;

double randomNum();

// initialize counters to zero
int C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, C6 = 0, C7 = 0, C8 = 0, C9 = 0, C10 = 0;

int main() {
    // SEED
    srand(time(NULL));

    // LOOP 10000 TIMES
    for (int i = 0; i < 100; i++) {
        double temp = randomNum();
        cout << temp;
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
    cout << C1 << endl;
    cout << C2 << endl;
    cout << C3 << endl;
    cout << C4 << endl;
    cout << C5 << endl;
    cout << C6 << endl;
    cout << C7 << endl;
    cout << C8 << endl;
    cout << C9 << endl;
    cout << C10 << endl;
}

// generate a random number between 0-1;

double randomNum() {
    double temp, num;
    temp = rand() % 100;
    num = temp / 100;
    return num;
}



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