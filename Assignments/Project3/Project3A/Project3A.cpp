// Project3A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

class TaxBracket {
public:
	double upRange, lowRange, rate;

/*public:
	TaxBracket(double x, double y, double z) {
		x = upRange;
		y = lowRange;
		x = rate;
	}*/
};

int main()
{
	// declair tax brakets range and rate
	TaxBracket tbObj1;
	tbObj1.upRange = 30000;
	tbObj1.lowRange = 0;
	tbObj1.rate = 0;

	TaxBracket tbObj2;
	tbObj2.upRange = 50000;
	tbObj2.lowRange = 30000.01;
	tbObj2.rate = 0.1;

	TaxBracket tbObj3;
	tbObj3.upRange = 100000;
	tbObj3.lowRange = 50000.01;
	tbObj3.rate = 0.2;

	TaxBracket tbObj4;
	tbObj4.upRange = 200000;
	tbObj4.lowRange = 100000.01;
	tbObj4.rate = 0.3;

	TaxBracket tbObj5;
	tbObj5.upRange = 250000;
	tbObj5.lowRange = 200000.01;
	tbObj5.rate = 0.35;

	TaxBracket tbObj6;
	//tbObj6.upRange = 30000;
	tbObj6.lowRange = 250000.01;
	tbObj6.rate = 0.4;


	// prompt for income
	double income;
	cout << "How much did you make this year? " << endl;
	cin >> income;

	// Calculate and display the initial amount
	double deductedIncome, amountDeducted, prevBT;
	prevBT = 0;
	if (income <= tbObj1.upRange) {
		amountDeducted = 0;
		deductedIncome = income;
	}
	else if (income <= tbObj2.upRange) {
		amountDeducted = (income - tbObj1.upRange) * tbObj2.rate;
		deductedIncome = income - amountDeducted;
	}
	else if (income <= tbObj3.upRange) {
		prevBT = tbObj2.rate * (tbObj2.upRange - tbObj1.upRange);
		cout << "prevBT: " << prevBT << endl;
		amountDeducted = prevBT + (income - tbObj2.upRange) * tbObj3.rate;
		deductedIncome = income - amountDeducted;
	}
	else if (income <= tbObj4.upRange) {
		prevBT = tbObj3.rate * (tbObj3.upRange - tbObj2.upRange) + (tbObj2.rate * (tbObj2.upRange - tbObj1.upRange));
		cout << "prevBT: " << prevBT << endl;
		amountDeducted = prevBT + (income - tbObj3.upRange) * tbObj4.rate;
		deductedIncome = income - amountDeducted;
	}
	else if (income <= tbObj5.upRange) {
		prevBT = tbObj4.rate * (tbObj4.upRange - tbObj4.lowRange) + (tbObj3.rate * (tbObj3.upRange - tbObj2.upRange) + (tbObj2.rate * (tbObj2.upRange - tbObj1.upRange)));
		cout << "prevBT: " << prevBT << endl;
		amountDeducted = prevBT + (income - tbObj4.upRange) * tbObj5.rate;
		deductedIncome = income - amountDeducted;
	}
	else {
		prevBT = tbObj5.rate * (tbObj5.upRange - tbObj5.lowRange) + (tbObj4.rate * (tbObj4.upRange - tbObj4.lowRange) + (tbObj3.rate * (tbObj3.upRange - tbObj2.upRange) + (tbObj2.rate * (tbObj2.upRange - tbObj1.upRange))));
		cout << "prevBT: " << prevBT << endl;
		amountDeducted = prevBT + (income - tbObj5.upRange) * tbObj6.rate;
		deductedIncome = income - amountDeducted;
	}

	cout << "Total Income: $" << income << endl;
	cout << "After Deductions: $" << deductedIncome << endl;
	cout << "Amount Deducted: $" << amountDeducted << endl;

	return 0;
}

/*
OUTPUTS
-----------------------------------
How much did you make this year?
47000
Total Income: $47000
After Deductions: $45300
Amount Deducted: $1700

-----------------------------------
How much did you make this year?
53000
prevBT: 2000
Total Income: $53000
After Deductions: $50400
Amount Deducted: $2600

-----------------------------------
How much did you make this year?
123000
prevBT: 12000
Total Income: $123000
After Deductions: $104100
Amount Deducted: $18900

-----------------------------------
How much did you make this year?
234000
prevBT: 42000
Total Income: $234000
After Deductions: $180100
Amount Deducted: $53900

-----------------------------------
How much did you make this year?
278000
prevBT: 59500
Total Income: $278000
After Deductions: $207300
Amount Deducted: $70700

*/