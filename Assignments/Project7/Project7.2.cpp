#include <iostream>
#include <cmath>

using namespace std;

double squareRoot(double);

int main() {
    double n;
    cout << "Enter the number you'd like to find the square root of: ";
    cin >> n;
    cout << "The square root is " << squareRoot(n) << endl;
    return 0;
}

double squareRoot(double n) {
    // declare the initial value of lg and calculate ng using the given formula
    double lg = 1.0;
    double ng = 0.5 * (lg + n/lg);
    // loop through calculating the next guess based on the last guess until the difference is less than 0.00001
    while (abs(ng - lg) >= 0.00001) {
        lg = ng;
        ng = 0.5 * (lg + n/lg);
    }
    return ng;
}

/*
OUTPUTS
-------------------------------------------------------
Enter the number you'd like to find the square root of: 25
The square root is 5
-------------------------------------------------------
Enter the number you'd like to find the square root of: 47
The square root is 6.85565
-------------------------------------------------------
Enter the number you'd like to find the square root of: 144
The square root is 12
-------------------------------------------------------
Enter the number you'd like to find the square root of: 2209
The square root is 47
-------------------------------------------------------
*/

/*
CODE GRAVEYARD 

-------------------------------------------------------
double squareRoot(double n) {
    // declare the initial value of lg and calculate ng using the given formula
    double lg = 1.0;
    double ng = 0.5 * (lg + n/lg);
    // loop through calculating the next guess based on the last guess until the difference is less than 0.00001
    while ((ng - lg) >= 0.00001) {
        lg = ng;
        ng = 0.5 * (lg + n/lg);
    }
    return ng;
}

ISSUE: gets the answer wrong idk why
    - I did the math by hand and found that the while loop was repeating the incorrect amount of times
SOLUTION: the while loop needs to depend on the absolute value of (ng - lg) being greater than or equal to 0.00001)
    - (abs(ng - lg) >= 0.00001)
-------------------------------------------------------
*/