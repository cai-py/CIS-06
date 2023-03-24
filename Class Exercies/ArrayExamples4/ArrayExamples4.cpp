#include <iostream>

using namespace std;

void printArray1D(int [], int);
void copyArray1D(int [], int [], int);
void printArray2D(int [][3], int);
void copyArray2D(int [][3], int [][3], int);

int main() {
    int x[5] = {10, 20, 30};
    int x1[5]; 

    // you need to specify the number of columns in a 2d Array
    int y[][3] = {
        {10,20,30},
        {40,50,60}
    };
    int y1[2][3];

    printArray1D(x, 5);
    copyArray1D(x, x1, 5);
    printArray1D(x1, 5);

    cout << "---------------" << endl;

    printArray2D(y, 2);
    copyArray2D(y, y1, 2);
    printArray2D(y1, 2);

}

void printArray1D(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copyArray1D(int src[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}


void printArray2D(int arr[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j  = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void copyArray2D(int src[][3], int dest[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j  = 0; j < 3; j++) {
            dest[i][j] = src[i][j];
        }
    }
}