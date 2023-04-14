#include <iostream>

using namespace std;

double findMedian(double *, int);
void sort(double *, int);

int main() {
    int n = 7;
    //double arr[10] = {5,3,6,2,7,3,5,3,7,8}; // test data
    double arr[7] = { 0 };

    // GET USER DATA
    // -----------------
    for (int i = 0; i < n; i++) {
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    // -----------------
    sort(arr,n);
    cout << "The numbers you entered are: {";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n-1) {
            cout << ", ";
        }
    }
    cout << "}." << endl;
    cout << "The mode is: " << findMedian(arr, n) << endl;

}

double findMedian(double *arr, int n) {
    // sort numbers
    sort(arr, n);
    // calculate median
    int halfPoint = n / 2;
    // special case
    if (n % 2 == 0) {
        // take average of two middle integers
        double mode = (arr[halfPoint - 1] + arr[halfPoint]) / 2;
        return mode;
    }else {
        // find middle integer
        double mode = arr[halfPoint];
        return mode;
    }
    
}

void sort(double *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j > 0; j--) {
            if (*(arr + j) < *(arr + j - 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j - 1);
                *(arr + j - 1) = temp;
            }
            else {
                break;
            }
        }
    }
}

/*
---------- OUTPUT ----------
// with 10 inputs
Enter a number: 234
Enter a number: 6
Enter a number: 4
Enter a number: 43
Enter a number: 25
Enter a number: 36
Enter a number: 47
Enter a number: 534
Enter a number: 2543
Enter a number: 7
The numbers you entered are: {4, 6, 7, 25, 36, 43, 47, 234, 534, 2543}.
The mode is: 39.5

// with 7 inputs
Enter a number: 234
Enter a number: 52
Enter a number: 423
Enter a number: 23
Enter a number: 63
Enter a number: 79
Enter a number: 100
The numbers you entered are: {23, 52, 63, 79, 100, 234, 423}.
The mode is: 79
*/