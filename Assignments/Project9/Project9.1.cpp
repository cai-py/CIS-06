#include <iostream>

using namespace std;

void getDate(int *dptr, int *mptr, int *yptr);

int main() {
    // create 
    int day, month, year;
    
    // use reference variable to update these variables in getDate()
    getDate(&day, &month, &year);

    // print result to console
    cout << "Date: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;

}

void getDate(int *dptr, int *mptr, int *yptr) {
    // create an array to hold the character values of the user input
    char dateString[12];

    // get user input
    cout << "Enter a date in dd-mmm-yyy format (ex. 06-Mar-2023)";
    cin >> dateString;

    
}