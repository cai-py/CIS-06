#include <iostream>

using namespace std;

int* doubleArray(int arr[], int size);

int main() {
    // create the original array
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    // call function
    int* newArr = doubleArray(arr, size);

    // print result
    cout << "{";
    for (int i = 0; i < size * 2; i++) {
        cout << newArr[i] << ", ";
    }
    cout << "}" << endl;
    
    return 0;
}

int* doubleArray(int arr[], int size) {
    // create new array
    int* newArr = new int[size*2];

    // copy old array to new array
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // set the rest to 0
    for (int i = size; i < size * 2; i++) {
        newArr[i] = 0;
    }

    // return pointer to new array
    return newArr; // return pointer to new array
}

/*
----- OUTPUT -----
{1, 2, 3, 4, 5, 0, 0, 0, 0, 0, }
*/