#include <iostream>
#include <string>
#include "Date.h"


Date::Date() {}
Date::Date(int d, int m, int y) {
    date = d;
    month = m;
    year = y;
}
Date::Date(int d, string m, int y) {
    string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    date = d;
    month = getMonth(m);
    year = y;
}

void Date::setYear(int y) {
    year = y;
}
void Date::setMonth(int m) {
    month = m;
}
void Date::setMonth(string m) {
    month = getMonth(m);
}
void Date::setDate(int d) {
    date = d;
}

int Date::getYear() {
    return year;
}
string Date::getMonthName() {
    return months[month - 1];
}
int Date::getMonth() {
    return month;
}
int Date::getDate() {
    return date;
}

void Date::print() {
    cout << date;
    cout << month;
    cout << year;
}






int Date::getMonth(string s) {
    
    for (int i = 0; i < 12; i++) {
        if (s == months[i]) {
            month = i + 1;
            break;
        }
    }
    return -1;
}