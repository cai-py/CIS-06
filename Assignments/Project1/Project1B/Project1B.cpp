// Project1B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "///// DISTANCE FORMULA /////" << endl;

    // Declare variable and collect data from user
        // Is it better to use int or double here?
    double x1, y1, x2, y2;

    cout << "What is the x value of your first point?";
    cin >> x1;

    cout << "What is the y value of your first point?";
    cin >> y1;

    cout << "What is the x value of your second point?";
    cin >> x2;

    cout << "What is the y value of your second point?";
    cin >> y2;

    // Calculate Distance and return value 

    // Difference of point values
    double xDif, yDif;
    xDif = x1 - x2;
    yDif = y1 - y2;

    // Square them
    double xDifSq, yDifSq;
    xDifSq = xDif * xDif;
    yDifSq = yDif * yDif;

    // Add Them
    double xAndY;
    xAndY = xDifSq + yDifSq;

    // Find Square Root
    double answer;
    answer = sqrt(xAndY);

    cout << "The distance between these points is: " << answer << endl;
}

/*
 Use the program to calculate the distance between (2, 3) and (8, -5).

///// OUTPUT /////
///// DISTANCE FORMULA /////
What is the x value of your first point?2
What is the y value of your first point?3
What is the x value of your second point?8
What is the y value of your second point?-5
The distance between these points is: 10
*/

/*
How do you determine the distance between two points in a three-dimentional space?

The formula for finding distance between two points in an XY plane is...
D = sqrt ( (x1 – x2)^2 + (y1 –y2)^2 )

To find the distance in an XYZ or 3D plane each coordinate would need a third value z.
This value describes its position on the z axis.
To adapt the distance formula to an XYZ grid simply add (z1 - z2)^2 inside the square root of the previous formula.
It would look something like this...
D = sqrt ( (x1 – x2)^2 + (y1 –y2)^2 + (z1 - z2)^2)
*/