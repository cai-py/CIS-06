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
    // this functions n index of the fibonacci sequence
    if (n <= 1) {
        // if n <= 1 return n / because the first two numbers are 0 and 1
        return n;
    }else {
        return nthFib(n-1) + nthFib(n-2);
    }

    return -1;
}


/* OUTPUT
----------
Enter the nth number in the fibonacci sequence you want to find: 21
The 21th fibonacci number is: 10946
----------
Enter the nth number in the fibonacci sequence you want to find: 7
The 7th fibonacci number is: 13

recursion tree nthfib(5)

                    (5)
                (4)     (3)
            (3)   (2)  (2)  (1)     
        (2) (1)                    

((1+1)+1)+(1+1) = 5
*/