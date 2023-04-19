#include <iostream>

using namespace std;

int nthFib(int);

int main() {
    int n;
    cout << "Enter the nth number in the fibonacci sequence you want to find: ";
    cin >> n;
    cout << "The " << n << "th fibonacci number is: " << nthFib(n) << endl;

}

int nthFib(int n) {
    // if not found
    if (n <= 1) {
        return n;
    }else {
        return nthFib(n-1) + nthFib(n-2);
    }

    return -1;
}