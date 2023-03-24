#include <iostream>
#include <ctime>

using namespace std;

const int N = 10;

int main() {
    // Declare and initialize arrays
    int x[N];
    int y[N] = { 0 };
    int z[N] = {1,2,3,4,5,6,7,8,9,10};

    int sum = 0;
    int max, min;
    int ave;

    srand(time(0));
    // Initialize array
    for (int i = 0; i < N; i++){
        //cout << "Enter grade for x[" << i + 1 << "]: " << endl;
        //cin >> x[i];
        x[i] = rand() % 100;
    }

    // Print array;
    for (int i = 0; i < N; i++) {
        cout << "Grade for x[" << i + 1 << "]: " << x[i] << endl;
    }

    for (int i = 0; i < N; i++) {
        cout << "y[" << i + 1 << "]: " << y[i] << endl;
    }

    for (int i = 0; i < N; i++) {
        cout << "z[" << i + 1 << "]: " << z[i] << endl;
    }
    // Sum Array
    for (int i = 0; i < N; i++) {
        sum = sum + x[i];
    }

    cout << "Sum = " << sum << endl;

    // find max and min and average
    max = x[0];
    min = x[0];

    for (int i = 1; i < N; i++) {
        if (x[i] > max) {
            max = x[i];
        }
        if (x[i] < min) {
            min = x[i];
        }
        cout << "Max = " << max << ", Min = " << min << endl;
    }

    cout << "1 --> Max = " << max << endl;
    cout << "2 --> Min = " << min << endl;

    ave = sum / N;

    cout << "Average = " << ave << endl;

    // Copy  Array
    for (int i = 0; i < N; i++) {
        y[i] = x[i];
    }

    // Print Array;
    for (int i = 0; i < N; i++) {
        cout << "y[" << i + 1 << "]: " << y[i] << endl;
    }

    // Swap array contents 
    for (int i = 0; i < N; i++) {
        int temp = x[i];
        x[i] = z[i];
        z[i] = temp;
    }

    // Print Array;
    for (int i = 0; i < N; i++) {
        cout << "x[" << i + 1 << "]: " << x[i] << 
        ", z[" << i + 1 << "]: " << z[i] << endl;
    }

    // Search in an array
    int s = 0;
    cout << "Enter search number: ";
    cin >> s;

    int index = -1;
    for (int i = 0; i < N; i++) {
        if (y[i] == s) {
            index = i;
            break;
        }
    }
    if (index >= 0) {
        cout << s << " found at index: " << index << endl;
    }else {
        cout << s << " not found" << endl;
    }


    // Count how many of each integer is in a long number

    for (int i = 0; i < N; i++) {
        z[i] = 0;
    }

    long long int num;
    cout << "Enter a long number: ";
    cin >> num;

    while (num > 0) {
        int temp = (int) (num % 10);
        z[temp]++;
        cout << "temp = " << temp << ", " << z[temp] << endl;
        num = num / 10L;
    }

    // Print Array;
    for (int i = 0; i < N; i++) {
        cout << "z[" << i  << "]: " << z[i] << endl;
    }


    // Count how many of each integer is in a long string of numbers

    for (int i = 0; i < N; i++) {
        z[i] = 0;
    }

    cin.ignore();

    string s1;
    cout << "Enter a long number string: ";
    cin >> s1;

    for (int i = 0; i < s1.length(); i++) {
        char ch = s1[i];
        int temp = ch - 48;
        z[temp]++;
    }

    // Print Array;
    for (int i = 0; i < N; i++) {
        cout << "z[" << i  << "]: " << z[i] << endl;
    }
}