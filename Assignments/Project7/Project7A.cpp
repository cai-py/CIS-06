#include <iostream>
#include <ctime>

using namespace std;

double randomNum();

// initialize counters to zero
int C1 = 0;
int C2 = 0;
int C3 = 0;
int C4 = 0;
int C5 = 0;
int C6 = 0;
int C7 = 0;
int C8 = 0;
int C9 = 0;
int C10 = 0;

int main() {
    cout << randomNum() << endl;
}

// generate a random number between 0-1;
double randomNum() {
    double temp, num;
    srand(time(0));
    temp = rand() % 100;
    num = temp / 100;
    return num;
}