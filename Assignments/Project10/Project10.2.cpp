#include <iostream>

using namespace std;

int findMode(int [], int);
void sort(int [], int);

int main() {
    int arrLength = 10;
    int arr[10] = {1, 4, 7, 8, 3, 4, 3, 6, 4, 9};
    cout << "The mode is: " << findMode(arr, arrLength) << endl;
}

int findMode(int arr[], int n) {
    // sort array
    sort(arr, n);

    int counter = 1; // counts how many times a number appears in the array
    int max = 0; // keeps track of the max amount of times a number appears in an array
    int mode = arr[0]; // updates each time on element of the array exceeds tha max
    // loop through each element in the array
    for (int i = 0; i < n - 1; i++) {
        // check each element agains the next 
        if (arr[i] == arr[i+1]) { 
            counter++; // increases every time arr[i] appears in arr
            if (counter > max) { // check if counter exceed that max from previouse numbers
                max = counter; // set max to current counter
                mode = arr[i]; // set mode to current max
            }
        }else {
            counter = 1; // reset counter
        }
    }

    // return mode
    return mode;
}

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j > 0; j--) {
            if (arr[j] < arr[j - 1]){
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {
                break;
            }
        }
    }
}