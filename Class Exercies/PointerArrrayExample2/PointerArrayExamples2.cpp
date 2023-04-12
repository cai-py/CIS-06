#include <iostream>

using namespace std;

int main() {
    int y;
    int x[5] = {10, 20, 30, 40, 50};
    int* px;

    for (int i = 0; i < 10; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "x = " << x << endl;

    px = x;

    cout << "px = " << px << endl;


    cout << "1 ----> " << endl;
    for (int i = 0; i < 5; i++) {
        cout << px[i] << " ";
    }
    cout << endl;

    cout << "2 ----> " << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(x + i) << " ";
    }
    cout << endl;


}