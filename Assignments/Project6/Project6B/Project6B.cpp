#include <iostream>

using namespace std;

void printDiagram(int);
void printLine(int);

int main() {
    int n = 6;
    printDiagram(n);
}

void printLine(int n) {
    if (n == 0) return;
    printLine(n - 1);
    cout << "*";
}

void printDiagram(int n) {
    if (n == 0) return;
    printDiagram(n - 1);
    printLine(1 << (n - 1));
    cout << std::endl;
}

/*
*
**
****
********
****************
********************************
*/