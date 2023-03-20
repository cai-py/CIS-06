#include <iostream>

using namespace std;

int sum(int);
int sum(int, int);
int sum(int, int, int);
void F2(int&);
void F3(const int&);


int main() {
    cout << "1 -- > sum = " << sum(10) << endl;
    cout << "2 -- > sum = " << sum(10, 20) << endl;
    cout << "3 -- > sum = " << sum(10, 20, 30) << endl;
}

int sum(int x) {
    return x;
}

int sum(int x, int y) {
    return x + y;
}

int sum(int x, int y, int z) {
    return x + y + z;
}

void F2(int &x) {
    x = 2 * x;
}

void F3(const int& x) {
    x = 2 * x;
}