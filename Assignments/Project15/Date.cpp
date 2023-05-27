#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

Date::Date()
{
	date = 1;
	month = 1;
	year = 1970;
}

Date::Date(int d, int m, int y)
{
	date = d;
	month = m;
	year = y;
}


Date::Date(int d, string m, int y)
{
	date = d;
	month = getMonth(m);
	year = y;
	
}

void Date::setYear(int y)
{
	year = y;
}

void Date::setMonth(int m)
{
	month = m;
}

void Date::setMonth(string m)
{
	month = getMonth(m);
}

void Date::setDate(int d)
{
	date = d;
}

int Date::getYear()
{
	return year;
}

string Date::getMonthName()
{
	return months[month - 1];
}

int Date::getMonth()
{
	return month;
}

int Date::getDate()
{
	return date;
}

void Date::print()
{
	cout << "Date = " << month << "/" << date << "/" << year << endl;
}

int Date::getMonth(string s) {
	
	for (int i = 0; i < 12; i++) {
		if (s == months[i]) {
			return i + 1;
		}
	}
	return -1;
}
