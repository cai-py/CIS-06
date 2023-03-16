#include <iostream>
#include <cmath>

using namespace std;

void printSet(int);
double calcSquare(int);
double calcSquareRoot(int);
void start();

int counter = 0;

int main() {
    // perfect square between 1 - 81: 4, 9, 16, 25, 36, 49, 64, 81

    start();

}

double calcSquare(int x) {
    double result = x * x;
    cout << result;
}

double calcSquareRoot(int x) {
    double result = sqrt(x);
    cout << result;
}

void printSet(int i) {
    // print number
    cout << "Number: " << i << endl;

    // print square 
    //printSquare(i, i);
    cout << "The square of " << i << " is ";
    calcSquare(i);
    cout << endl;

    //print square root
    cout << "The square root of " << i << " is ";
    calcSquareRoot(i);

    //
    cout << endl;
}

void start() {
    if (counter <= 81) {
        printSet(counter);
    }
    counter++;
    start();
}


/*
write it without the first loop
*/

/*
Number: 0
The square of 0 is 0
The square root of 0 is 0
Number: 1
The square of 1 is 1
The square root of 1 is 1
Number: 2
The square of 2 is 4
The square root of 2 is 1.41421
Number: 3
The square of 3 is 9
The square root of 3 is 1.73205
Number: 4
The square of 4 is 16
The square root of 4 is 2
Number: 5
The square of 5 is 25
The square root of 5 is 2.23607
Number: 6
The square of 6 is 36
The square root of 6 is 2.44949
Number: 7
The square of 7 is 49
The square root of 7 is 2.64575
Number: 8
The square of 8 is 64
The square root of 8 is 2.82843
Number: 9
The square of 9 is 81
The square root of 9 is 3
Number: 10
The square of 10 is 100
The square root of 10 is 3.16228
Number: 11
The square of 11 is 121
The square root of 11 is 3.31662
Number: 12
The square of 12 is 144
The square root of 12 is 3.4641
Number: 13
The square of 13 is 169
The square root of 13 is 3.60555
Number: 14
The square of 14 is 196
The square root of 14 is 3.74166
Number: 15
The square of 15 is 225
The square root of 15 is 3.87298
Number: 16
The square of 16 is 256
The square root of 16 is 4
Number: 17
The square of 17 is 289
The square root of 17 is 4.12311
Number: 18
The square of 18 is 324
The square root of 18 is 4.24264
Number: 19
The square of 19 is 361
The square root of 19 is 4.3589
Number: 20
The square of 20 is 400
The square root of 20 is 4.47214
Number: 21
The square of 21 is 441
The square root of 21 is 4.58258
Number: 22
The square of 22 is 484
The square root of 22 is 4.69042
Number: 23
The square of 23 is 529
The square root of 23 is 4.79583
Number: 24
The square of 24 is 576
The square root of 24 is 4.89898
Number: 25
The square of 25 is 625
The square root of 25 is 5
Number: 26
The square of 26 is 676
The square root of 26 is 5.09902
Number: 27
The square of 27 is 729
The square root of 27 is 5.19615
Number: 28
The square of 28 is 784
The square root of 28 is 5.2915
Number: 29
The square of 29 is 841
The square root of 29 is 5.38516
Number: 30
The square of 30 is 900
The square root of 30 is 5.47723
Number: 31
The square of 31 is 961
The square root of 31 is 5.56776
Number: 32
The square of 32 is 1024
The square root of 32 is 5.65685
Number: 33
The square of 33 is 1089
The square root of 33 is 5.74456
Number: 34
The square of 34 is 1156
The square root of 34 is 5.83095
Number: 35
The square of 35 is 1225
The square root of 35 is 5.91608
Number: 36
The square of 36 is 1296
The square root of 36 is 6
Number: 37
The square of 37 is 1369
The square root of 37 is 6.08276
Number: 38
The square of 38 is 1444
The square root of 38 is 6.16441
Number: 39
The square of 39 is 1521
The square root of 39 is 6.245
Number: 40
The square of 40 is 1600
The square root of 40 is 6.32456
Number: 41
The square of 41 is 1681
The square root of 41 is 6.40312
Number: 42
The square of 42 is 1764
The square root of 42 is 6.48074
Number: 43
The square of 43 is 1849
The square root of 43 is 6.55744
Number: 44
The square of 44 is 1936
The square root of 44 is 6.63325
Number: 45
The square of 45 is 2025
The square root of 45 is 6.7082
Number: 46
The square of 46 is 2116
The square root of 46 is 6.78233
Number: 47
The square of 47 is 2209
The square root of 47 is 6.85565
Number: 48
The square of 48 is 2304
The square root of 48 is 6.9282
Number: 49
The square of 49 is 2401
The square root of 49 is 7
Number: 50
The square of 50 is 2500
The square root of 50 is 7.07107
Number: 51
The square of 51 is 2601
The square root of 51 is 7.14143
Number: 52
The square of 52 is 2704
The square root of 52 is 7.2111
Number: 53
The square of 53 is 2809
The square root of 53 is 7.28011
Number: 54
The square of 54 is 2916
The square root of 54 is 7.34847
Number: 55
The square of 55 is 3025
The square root of 55 is 7.4162
Number: 56
The square of 56 is 3136
The square root of 56 is 7.48331
Number: 57
The square of 57 is 3249
The square root of 57 is 7.54983
Number: 58
The square of 58 is 3364
The square root of 58 is 7.61577
Number: 59
The square of 59 is 3481
The square root of 59 is 7.68115
Number: 60
The square of 60 is 3600
The square root of 60 is 7.74597
Number: 61
The square of 61 is 3721
The square root of 61 is 7.81025
Number: 62
The square of 62 is 3844
The square root of 62 is 7.87401
Number: 63
The square of 63 is 3969
The square root of 63 is 7.93725
Number: 64
The square of 64 is 4096
The square root of 64 is 8
Number: 65
The square of 65 is 4225
The square root of 65 is 8.06226
Number: 66
The square of 66 is 4356
The square root of 66 is 8.12404
Number: 67
The square of 67 is 4489
The square root of 67 is 8.18535
Number: 68
The square of 68 is 4624
The square root of 68 is 8.24621
Number: 69
The square of 69 is 4761
The square root of 69 is 8.30662
Number: 70
The square of 70 is 4900
The square root of 70 is 8.3666
Number: 71
The square of 71 is 5041
The square root of 71 is 8.42615
Number: 72
The square of 72 is 5184
The square root of 72 is 8.48528
Number: 73
The square of 73 is 5329
The square root of 73 is 8.544
Number: 74
The square of 74 is 5476
The square root of 74 is 8.60233
Number: 75
The square of 75 is 5625
The square root of 75 is 8.66025
Number: 76
The square of 76 is 5776
The square root of 76 is 8.7178
Number: 77
The square of 77 is 5929
The square root of 77 is 8.77496
Number: 78
The square of 78 is 6084
The square root of 78 is 8.83176
Number: 79
The square of 79 is 6241
The square root of 79 is 8.88819
Number: 80
The square of 80 is 6400
The square root of 80 is 8.94427
Number: 81
The square of 81 is 6561
The square root of 81 is 9
*/
