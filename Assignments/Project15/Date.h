#pragma once
#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	int date;
	int month;
	int year;

	int getMonth(string);

	string months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
					"Aug", "Sep", "Oct", "Nov", "Dec" };
public:
	Date();
	Date(int, int, int);
	Date(int, string, int);

	void setYear(int);
	void setMonth(int);
	void setMonth(string);
	void setDate(int);

	int getYear();
	string getMonthName();
	int getMonth();
	int getDate();

	void print();
};
