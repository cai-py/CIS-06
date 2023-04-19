#include <iostream>

using namespace std;

int fact(int n);
int factR(int n);
int binarySearch(int [], int, int);
int binarySearchR(int [], int, int, int);

int main() {
    int x = 5;
    int y;
    int arr[] = {5,7,9,11,14,21,23,26,35,44,51,65,71,75,77,81,88,91,95,99};

    cout << "1--> ---------- Factorials ----------" << endl;
    y = fact(x);
    cout << "Fact(" << x << ") = " << y << endl;

    x = 5;
    y = factR(x);
    cout << "FactR(" << x << ") = " << y << endl;

    cout << "2 --> ---------- Binary Search ----------" << endl;
    int val = 35;
    int index = binarySearch(arr, val, 20);
    if (index >= 0) {
        cout << val << " found at index " << index << endl;
    }else {
        cout << val << " not found" << endl;
    }

    cout << "2 --> ---------- Recursive Binary Search ----------" << endl;
    index = binarySearchR(arr, val, 0, 19);
    if (index >= 0) {
        cout << val << " found at index " << index << endl;
    }else {
        cout << val << " not found" << endl;
    }
}

int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int factR(int n) {
    int result;
    if (n > 0) {
        result = n * factR(n - 1);
    }else {
        result = 1;
    }
    return result;
}

int binarySearch(int arr[], int val, int n) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > val) {
            high = mid - 1;
        }else if (arr[mid] < val) {
            low = mid + 1;
        }else {
            return mid;
        }
    }
    return -1;
}

int binarySearchR(int arr[], int val, int start, int end) {
    if (start > end){
        return -1;
    }

    int mid = (start + end) / 2;
    if (arr[mid] == val) {
        return mid;
    }else if(arr[mid] > val) {
        return binarySearchR(arr, val, start, mid-1);
    }else {
        return binarySearchR(arr, val, mid + 1, end);
    }
}