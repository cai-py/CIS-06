#include <iostream>

void printArray(int[], int);
void copyArray(int [], int [], int);

void bubbleSort(int [], int);
void selectionSort(int [], int);
void intsertionSort(int [], int);

int sequentialSearch(int [], int, int);
int binarySearch(int [], int, int );

using namespace std;

int main() {
    int x[] = { 50, 35, 17, 99, 53, 7, 8, 23, 87, 5};
    int y[10];

    cout << "1--> ---------Print Array ------------" << endl;
    printArray(x, 10);

    cout << "2--> ---------Copy Array ------------" << endl;
    copyArray(y, x, 10);
    printArray(y, 10);

    cout << "3--> ---------Bubble Sort ------------" << endl;
    copyArray(y, x, 10);
    bubbleSort(y, 10);
    printArray(y, 10);

    cout << "4--> ---------Selection Sort ------------" << endl;
    copyArray(y, x, 10);
    selectionSort(y, 10);
    printArray(y, 10);

    cout << "5--> ---------Insertion Sort ------------" << endl;
    copyArray(y, x, 10);
    intsertionSort(y, 10);
    printArray(y, 10);

    cout << "6--> ---------Sequential Search ------------" << endl;
    int val = 99;
    int index = sequentialSearch(x, val, 10);
    if (index >= 0) {
        cout << val << " found at index: " << index << endl;
    }else {
        cout << val << " not found" << endl;
    }

    cout << "7--> ---------Sequential Search ------------" << endl;
    val = 90;
    index = sequentialSearch(x, val, 10);
    if (index >= 0) {
        cout << val << " found at index: " << index << endl;
    }else {
        cout << val << " not found" << endl;
    }

    cout << "8--> ---------Binary Search ------------" << endl;
    val = 99;
    index = binarySearch(y, val, 10);
    if (index >= 0) {
        cout << val << " found at index: " << index << endl;
    }else {
        cout << val << " not found" << endl;
    }

    cout << "9--> ---------Binary Search ------------" << endl;
    val = 90;
    index = binarySearch(y, val, 10);
    if (index >= 0) {
        cout << val << " found at index: " << index << endl;
    }else {
        cout << val << " not found" << endl;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copyArray(int dest[], int src[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void intsertionSort(int arr[], int n) {
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

int sequentialSearch(int arr[], int val, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            return i; // Found at index i
        }
    }
    return -1; // not found
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
            return mid; // found at index mid
        }
    }
    return -1; // not found
}