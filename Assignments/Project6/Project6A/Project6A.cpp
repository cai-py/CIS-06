#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int);

int main() {
    ofstream primeNums;

    primeNums.open("primeNums.txt");

    for (int i = 0; i <= 100; i++) {
        bool prime = isPrime(i);
        if (prime) {
            primeNums << i << endl;
            cout << i << endl;
        }
    }
    primeNums.close();
}

bool isPrime(int num) {
    if (num <= 10) {
        if (num == 2 || num == 3 || num == 5 || num == 7) {
            return true;
        }
        return false;
    }else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
        return false;
    }else if (num % 1 == 0) {
        return true;
    }
}

/*
// Notes from Prof.
loop starts at 2 - line 13
ends at sqrt of n
and check every number after that

take the square root of the number
check every numver from 1 t0 the square root of that number
*/

/*
A prime number is a number that is only evenly divisible by itself and 1. For example,
the number 5 is prime because it can only be evenly divided by 1 and 5. The number 6,
however, is not prime because it can be divided evenly by 1, 2, 3, and 6.
Write a function name isPrime, which takes an integer as an argument and returns true if
the argument is a prime number, or false otherwise. Demonstrate the function in a
complete program.
Use the isPrime function that you wrote to determine the list of all the prime numbers
from 1 through 100 in a file.

2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97


*/

/*
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
*/