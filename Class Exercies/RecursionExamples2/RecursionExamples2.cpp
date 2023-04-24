#include <iostream>

using namespace std;

int sum(int[], int);
int sumR(int [], int, int);

int max(int[], int);
int maxR(int [], int, int);

int main() {
    int x[] = {13,45,30,8,56,60,96,14,4};

    cout << "1--> Array Sum --------------" << endl;
    cout << "Array Sum = " << sum(x, 9) << endl;

    cout << "2--> Array SumR --------------" << endl;
    cout << "Array Sum = " << sumR(x, 0, 9) << endl;

    cout << "3--> Array Max --------------" << endl;
    cout << "Array Max = " << max(x, 9) << endl;

    cout << "4--> Array MaxR --------------" << endl;
    cout << "Array Max = " << maxR(x, 0, 9) << endl;

    return 0;
}

int sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int sumR(int arr[], int start, int n) {
    int sum = 0;
    if (start < n-1) {
        sum = arr[start] + sumR(arr, start + 1, n);
    }else {
        sum = arr[n-1];
    }
    return sum;
}

int max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        max = (max > arr[i])? max: arr[i];
    }
    return max;
}

int maxR(int arr[], int start, int n) {
    int max;
    if (start < n - 1) {
        int temp = maxR(arr, start + 1, n);
        max = (arr[start] > temp)? arr[start] : temp;
    }else {
        max = arr[n - 1];
    }
    return max;
}