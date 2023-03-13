// Project3B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double points;
    char grade;

    cout << "How many points did you earn for this course?" << endl;
    cin >> points;

    if (points >= 90) {
        grade = 'A';
    }
    else if (points >= 80 && points < 90) {
        grade = 'B';
    }
    else if (points >= 70 && points < 80) {
        grade = 'C';
    }
    else if (points >= 60 && points < 70) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;
    cout << "Message: ";

    switch (grade) {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Very Good" << endl;
        break;
    case 'C':
        cout << "Good" << endl;
        break;
    case 'D':
        cout << "Try Harder Next Time" << endl;
        break;
    case 'F':
        cout << "Try Harder Next Time" << endl;
        break;
    }

    return 0;
}

/*
OUTPUTS
----------------------
How many points did you earn for this course?
98
Grade: A
Message: Excellent

----------------------
How many points did you earn for this course?
86
Grade: B
Message: Very Good

----------------------
How many points did you earn for this course?
73
Grade: C
Message: Good

----------------------
How many points did you earn for this course?
64
Grade: D
Message: Try Harder Next Time

----------------------
How many points did you earn for this course?
57
Grade: F
Message: Try Harder Next Time

*/