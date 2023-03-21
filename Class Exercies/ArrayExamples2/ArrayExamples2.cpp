#include <iostream>

using namespace std;

int main() {
    int x[5] = {1,2,3,4,5};

    // prints "1 2 3 4 5"
    cout << "1 --> ----------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
    cout << endl << endl;

    // prints "1 2 3 4 5"
    cout << "2 --> ----------------" << endl;
    for (int y : x) {
        cout << y << " ";
    }
    cout << endl << endl;

    // prints "1 2 3 4 5"
    cout << "3 --> ----------------" << endl;
    for (int i = 0; i < 5; i++) {
        int y = x[i];
        cout << y << " ";
    }
    cout << endl << endl;

    // reset using index of elements
    // OUTPUT: 10 10 10 10 10 
    for (int i = 0; i < 5; i++) {
        x[i] = 10;
    }
    cout << endl << endl;
    cout << "4 --> ----------------" << endl;
    for (int i = 0; i < 5; i++) {
        int y = x[i];
        cout << y << " ";
    }
    cout << endl << endl;

    // reset using the for-each loop
    // OUTPUT: 10 10 10 10 10 
    for (int y : x) {
        y = 20;
    }
    cout << endl << endl;
    cout << "5 --> ----------------" << endl;
    for (int i = 0; i < 5; i++) {
        int y = x[i];
        cout << y << " ";
    }
    cout << endl << endl;

    // reset using for-each loop -- B
    // OUTPUT: 30 30 30 30 30
    for (int& y : x) {
        y = 30;
    }
    cout << endl << endl;
    cout << "6 --> ----------------" << endl;
    for (int i = 0; i < 5; i++) {
        int y = x[i];
        cout << y << " ";
    }
    cout << endl << endl;
}