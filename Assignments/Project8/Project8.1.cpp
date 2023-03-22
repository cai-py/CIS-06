#include <iostream>

using namespace std;

int search(int arr[7], int n, int val);
int* reverse(int arr[7], int n);
int* oddFirst(int arr[7], int n);

int main() {
    int arr[] = {1, 4, 6, 5, 2, 7, 10};

    // search()
    arr[7] = search(arr, 7, 6);// returns: 1, 4, 6, 5, 2, 7, 10
    cout << "Search(): ";
    for (int y : arr) {
        cout << y << ", ";
    }
    cout << endl;

    // reverse()
    int* revArr = reverse(arr, 7);// returns: 10, 7, 2, 5, 6, 4, 1 - needs to be assigned to a variable type 'int*'
    cout << "revArr(): ";
    for (int i = 0; i < 7; i++) {
        cout << revArr[i] << ", ";
    }
    cout << endl;

    // oddFirst()
    int * oddFirstArr = oddFirst(arr, 7);// returns: 1, 5, 7, 4, 6, 2, 10 - needs to be assigned to a variable type 'int*'
    cout << "oddFirst(): ";
    for (int i = 0; i < 7; i++) {
        cout << oddFirstArr[i] << ", ";
    }
    cout << endl;
}

int search(int arr[7], int n, int val) {
  for (int i = 0; i < 7; i++) {
    if (arr[i] == val) {
        return i;
    }
  }
  return -1;
}

int* reverse(int arr[7], int n) {
    int* revArr = new int [7];
    int counter = 0;
    // loop through arr[] backwards 
    for (int i = 6; i >= 0; i--) {
        // cout << arr[i];   
        revArr[counter] = arr[i];
        counter++;
    }
    return revArr;
}

int* oddFirst(int arr[7], int n) {
    int counter = 0;
    int* oddFirstArr = new int [7];
    // add odd number to new array
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 != 0) {
            oddFirstArr[counter] = arr[i];
            counter++;
        }
    }
    // add even number to new array
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 0) {
            oddFirstArr[counter] = arr[i];
            counter++;
        }
    }

    return oddFirstArr;
}

/*
Search(): 1, 4, 6, 5, 2, 7, 10, 
revArr(): 10, 7, 2, 5, 6, 4, 1, 
oddFirst(): 1, 5, 7, 4, 6, 2, 10,
*/