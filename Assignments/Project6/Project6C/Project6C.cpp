#include <iostream>
#include <cmath>

using namespace std;

void printLine(int);
void printSquare(int, int);
void printSet(int);
int calcSquareRoot(int);

int main() {
    // perfect square between 1 - 81: 4, 9, 16, 25, 36, 49, 64, 81
    for (int i = 0; i < 81; i++) {
        printSet(i);
        cout << endl;
    }
}

void printLine(int n) {
    if (n == 0) return;
    printLine(n - 1);
    cout << "*";
}

void printSquare(int x, int y) {
    if (y == 0) return;
    printSquare(x, y - 1);
    printLine(x);
    cout << endl;
}

int calcSquareRoot(int x) {
    double result = sqrt(x);
    cout << result;
}

void printSet(int i) {
    // print number
    cout << "Number: " << i << endl;
    // print square 
    printSquare(i, i);
    //print square root
    cout << "The square root of " << i << " is ";
    calcSquareRoot(i);
    //
    cout << endl;
}



