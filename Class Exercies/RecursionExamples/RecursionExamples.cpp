#include <iostream>

using namespace std;

int fact(int n);
int factR(int n);

int main() {
    int x = 5;
    int y;

    y = fact(x);
    cout << "Fact(" << x << ") = " << y << endl;

    x = 5;
    y = factR(x);
    cout << "FactR(" << x << ") = " << y << endl;

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