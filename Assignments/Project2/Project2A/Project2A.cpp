// Project2A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double rad, pi;
    pi = 3.14;

    cout << "Give the radius you wish to calculate: ";
    cin >> rad;

    double circum, area, volume, surfArea;

    cout << "///// Radius Calculations ///// \n";

    //circle circumfrance
    circum = 2 * pi * rad;
    cout << "Circumference: " << circum << endl;

    //circle area
    //area = pi * (rad * rad);
    area = pi * pow(rad, 2);
    cout << "Area: " << area << endl;

    //sphere volume
    //volume = (4 * pi * (rad * rad * rad)) / 3;
    volume = (4 * pi * pow(rad, 3)) / 3;
    cout << "Volume: " << volume << endl;

    //circle surface area
    //surfArea = 4 * pi * (rad * rad);
    surfArea = 4 * pi * pow(rad, 2);
    cout << "Surface Area: " << surfArea << endl;

    cout << pow(2,2);
}

/*
OUTPUT:

Give the radius you wish to calculate: 7.5
///// Radius Calculations /////
Circumference: 47.1
Area: 176.625
Volume: 1766.25
Surface Area: 706.5
4
C:\Users\flore\Documents\Berkeley City College\Spring 2023\CIS_06\Project2A\x64\Debug\Project2A.exe (process 19484) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/