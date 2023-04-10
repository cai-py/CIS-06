#include <iostream>
#include <cstring>
using namespace std;

void getDate(int *dptr, int *mptr, int *yptr);

int main() {
    int day, month, year;
    getDate(&day, &month, &year);
    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;
    return 0;
}

void getDate(int *dptr, int *mptr, int *yptr) {
    // prompt user to enter the date string in the right format
    char dateStr[12];
    cout << "Enter date in the format dd-mmm-yyyy (e.g. 05-Apr-2103): ";
    cin >> dateStr;

    // initialize day month and year variables at their corresponding spot in the string
    char *day = dateStr;
    //cout << day << endl;
    char *month = day + 3;
    //cout << month << endl;
    char *year = month + 4;
    //cout << year << endl;

    // use "null-terminated string" to remove the "-" from the beginig of the string
    // not too sure how this works but will ask questions / research later
    // tutorialspoint.com/what-is-a-null-terminated-string-in-c-cplusplus#:~:text=The%20null%20terminated%20strings%20are,terminated%20strings%20by%20the%20compiler.
    *(month - 1) = '\0';
    *(year - 1) = '\0';

    // convert date and year into integer values and store their memory location in dptr and yptr
    // atoi() or aski to integer - https://www.simplilearn.com/tutorials/cpp-tutorial/atoi-in-cpp#:~:text=The%20atoi()%20function%20in,throwing%20any%20error%20or%20exception.
    // great video on how to diy an atoi() - https://www.youtube.com/watch?v=QyDE7cPycnU
    *dptr = atoi(day);
    //cout << "dptr: " << dptr << endl;
    *yptr = atoi(year);
    //cout << "yptr: " << yptr << endl;

    // last thing to do is to return a string with the month name
    const char* monthArray[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    // loop 12 times to compare 'month' to each element in the 'monthArray'
    for (int i = 0; i < 12; i++) {
        // compare using 'strcmp', if strcmp(month, monthArray[i]) == 0 it means they match
        // Documentation - https://cplusplus.com/reference/cstring/strcmp/
        if (strcmp(month, monthArray[i]) == 0) {
            // assign 'mptr' to i + 1 to get the right number of the month
            *mptr = i + 1;
            //cout << mptr << "<--------" << endl;
            break;
        }
    }
}

// using the memory locations of each of the variables and passing these to the main function you can print the answer directly from the main function

/* OUTPUT
Enter date in the format dd-mmm-yyyy (e.g. 05-Apr-2103): 04-Mar-2023
Day: 4
Month: 3
Year: 2023
*/