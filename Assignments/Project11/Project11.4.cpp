#include <iostream>

using namespace std;

void reverse(int);

int main() {
    //int n = 537;
    int n;
    cout << "Enter an integer you would like to reverse: ";
    cin >> n;

    cout << n << " reversed is: ";
    reverse(n);

    return 0;
}

void reverse(int n) {
    // single digit ints
    if (n < 10) {
        cout << n;
    }else {
        cout << n % 10; // prints out the last digit of n
        reverse(n / 10); // removes the last digin in n and calls the function again with the new digit
    }
}

/*
---------- OUTPUT ----------
Enter an integer you would like to reverse: 123
123 reversed is: 321%   
----------
Enter an integer you would like to reverse: 2468
2468 reversed is: 8642%   
----------
Enter an integer you would like to reverse: 5318008
5318008 reversed is: 8008135% 
*/