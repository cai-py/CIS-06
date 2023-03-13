// Project5C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double principle, years, yearRate, monthRate, monthlyPayment;
    cout << "What is your principal amount? $";
    cin >> principle;
    cout << "How many years will your morgage be? ";
    cin >> years;
    double percentYearRate;
    cout << "What is your interest rate? %";
    cin >> percentYearRate;

    // turn rate into decimal 
    yearRate = percentYearRate / 100;

    // Calculate monthly interest rate
    monthRate = yearRate / 12;

    // Calculate monthly payment
    /*
                                 Principal x MonthlyInterestRate
    Monthly Payment =   ---------------------------------------------------
                         (1 - (1 / (1 + MonthlyInterestRate) Years x 12 ))
    */
    monthlyPayment = (principle * monthRate) / (1.0 - (1.0 / pow((1.0 + monthRate), (years * 12.0))));
    cout << "Your monthly payment will be $" << monthlyPayment << endl << endl;

    // Show amounts paid towards principal and monthly interest for the first three years

    cout.precision(2);
    cout << fixed;
    cout << "Month\tMonthly-Payment\tInterest\tTo-Principle\tPrinciple" << endl;

    double tempPrinciple;
    tempPrinciple = principle;
    for (int month = 1; month <= (12 * 3); month++) {
        
        double mInterest, mTotal;
        mInterest = tempPrinciple * monthRate;
        mTotal = monthlyPayment - mInterest;
        tempPrinciple = tempPrinciple - mTotal;
        
        cout << month << "\t$" << monthlyPayment << "\t$" << mInterest << "\t$" << mTotal << "\t\t$" << tempPrinciple  << endl;
    }
}



/*
Write a program that calculates the cost of a mortgage.  The program should prompt for
the initial values for the principal amount, the terms in years, and the interest rate.  The
program should output the mortgage amount per month, and show the amounts paid
towards the principal amount and the monthly interest for the first three years.  Determine
the principal amount after the end of the first three years.

Use the following formula to calculate the mortgage payment:

                             Principal x MonthlyInterestRate
Monthly Payment =   ---------------------------------------------------
                     (1 - (1 / (1 + MonthlyInterestRate) Years x 12 ))
Use the following input:
a) Principal Amount:  $250,000 Yearly Rate: 6% Number of Years: 30
b) Principal Amount:  $250,000 Yearly Rate: 7.5% Number of Years: 30


*************** OUTPUT ***************
What is your principal amount? $250000
How many years will your morgage be? 30
What is your interest rate? %6
Your monthly payment will be $1498.88

Month   Monthly-Payment Interest        To-Principle    Principle
1       $1498.88        $1250.00        $248.88         $249751.12
2       $1498.88        $1248.76        $250.12         $249501.00
3       $1498.88        $1247.51        $251.37         $249249.63
4       $1498.88        $1246.25        $252.63         $248997.00
5       $1498.88        $1244.99        $253.89         $248743.11
6       $1498.88        $1243.72        $255.16         $248487.95
7       $1498.88        $1242.44        $256.44         $248231.51
8       $1498.88        $1241.16        $257.72         $247973.80
9       $1498.88        $1239.87        $259.01         $247714.79
10      $1498.88        $1238.57        $260.30         $247454.49
11      $1498.88        $1237.27        $261.60         $247192.88
12      $1498.88        $1235.96        $262.91         $246929.97
13      $1498.88        $1234.65        $264.23         $246665.74
14      $1498.88        $1233.33        $265.55         $246400.20
15      $1498.88        $1232.00        $266.88         $246133.32
16      $1498.88        $1230.67        $268.21         $245865.11
17      $1498.88        $1229.33        $269.55         $245595.56
18      $1498.88        $1227.98        $270.90         $245324.66
19      $1498.88        $1226.62        $272.25         $245052.41
20      $1498.88        $1225.26        $273.61         $244778.80
21      $1498.88        $1223.89        $274.98         $244503.81
22      $1498.88        $1222.52        $276.36         $244227.46
23      $1498.88        $1221.14        $277.74         $243949.72
24      $1498.88        $1219.75        $279.13         $243670.59
25      $1498.88        $1218.35        $280.52         $243390.07
26      $1498.88        $1216.95        $281.93         $243108.14
27      $1498.88        $1215.54        $283.34         $242824.80
28      $1498.88        $1214.12        $284.75         $242540.05
29      $1498.88        $1212.70        $286.18         $242253.88
30      $1498.88        $1211.27        $287.61         $241966.27
31      $1498.88        $1209.83        $289.04         $241677.22
32      $1498.88        $1208.39        $290.49         $241386.73
33      $1498.88        $1206.93        $291.94         $241094.79
34      $1498.88        $1205.47        $293.40         $240801.39
35      $1498.88        $1204.01        $294.87         $240506.52
36      $1498.88        $1202.53        $296.34         $240210.18


--------------------------------------------------------------------
What is your principal amount? $250000
How many years will your morgage be? 30
What is your interest rate? %7.5
Your monthly payment will be $1748.04

Month   Monthly-Payment Interest        To-Principle    Principle
1       $1748.04        $1562.50        $185.54         $249814.46
2       $1748.04        $1561.34        $186.70         $249627.77
3       $1748.04        $1560.17        $187.86         $249439.91
4       $1748.04        $1559.00        $189.04         $249250.87
5       $1748.04        $1557.82        $190.22         $249060.65
6       $1748.04        $1556.63        $191.41         $248869.24
7       $1748.04        $1555.43        $192.60         $248676.64
8       $1748.04        $1554.23        $193.81         $248482.83
9       $1748.04        $1553.02        $195.02         $248287.81
10      $1748.04        $1551.80        $196.24         $248091.58
11      $1748.04        $1550.57        $197.46         $247894.11
12      $1748.04        $1549.34        $198.70         $247695.41
13      $1748.04        $1548.10        $199.94         $247495.47
14      $1748.04        $1546.85        $201.19         $247294.28
15      $1748.04        $1545.59        $202.45         $247091.84
16      $1748.04        $1544.32        $203.71         $246888.13
17      $1748.04        $1543.05        $204.99         $246683.14
18      $1748.04        $1541.77        $206.27         $246476.87
19      $1748.04        $1540.48        $207.56         $246269.32
20      $1748.04        $1539.18        $208.85         $246060.46
21      $1748.04        $1537.88        $210.16         $245850.31
22      $1748.04        $1536.56        $211.47         $245638.83
23      $1748.04        $1535.24        $212.79         $245426.04
24      $1748.04        $1533.91        $214.12         $245211.92
25      $1748.04        $1532.57        $215.46         $244996.46
26      $1748.04        $1531.23        $216.81         $244779.65
27      $1748.04        $1529.87        $218.16         $244561.48
28      $1748.04        $1528.51        $219.53         $244341.96
29      $1748.04        $1527.14        $220.90         $244121.06
30      $1748.04        $1525.76        $222.28         $243898.78
31      $1748.04        $1524.37        $223.67         $243675.11
32      $1748.04        $1522.97        $225.07         $243450.04
33      $1748.04        $1521.56        $226.47         $243223.57
34      $1748.04        $1520.15        $227.89         $242995.68
35      $1748.04        $1518.72        $229.31         $242766.37
36      $1748.04        $1517.29        $230.75         $242535.62








*************** GRAVEYARD ***************

    double amountStillOwed, monthlyInterest, totalInterest;
    amountStillOwed = principle;

    cout << amountStillOwed << endl;
    monthlyInterest = principle * monthRate;
    amountStillOwed = amountStillOwed - (monthlyPayment - monthlyInterest);
    cout << amountStillOwed << endl;


    double principlePaid = 0, interestPaid = 0;
        for (int month = 1; month <= 12; month++) {
            double monthlyInterest = principle * monthRate;
            double monthlyPrinciple = monthlyPayment - monthlyInterest;
            principle -= monthlyPrinciple;
            principlePaid += monthlyPrinciple;
            interestPaid += monthlyInterest;
        }
        totalInterest += interestPaid;
        //---------
*/