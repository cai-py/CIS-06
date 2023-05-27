// Calendar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"
#include "Date.h"
#include "Calendar.h"
#include "Appointment.h"
#include "Person.h"

using namespace std;


int main()
{
    Time t1, t2, t3(10, -15, 300);
    Date d1, d2(1, 5, 2023), d3(1, "May", 2023);

    t2.print();
    t3.print();

    //t1.hour = 10;
    t1.setHour(10);

    cout << "T1 Hour = " << t1.getHour() << endl;

    t1.setHour(-45);
    cout << "T1 Hour = " << t1.getHour() << endl;

    t1.setMinute(45);
    t1.setSecond(30);

    t1.print();

    t1.addHour(12);
    t1.print();

    t1.addHour(12);
    t1.print();

    t1.addHour(50);
    t1.print();

    t1.addMinute(10);
    t1.print();

    t1.addMinute(20);
    t1.print();

    t1.addMinute(200);
    t1.print();

    t1.addSecond(15);
    t1.print();

    t1.addSecond(45);
    t1.print();

    t1.addSecond(2000);
    t1.print();

    t1.addHour(-20);
    t1.print();

    d1.print();
    d2.print();
    d3.print();

    d1.setDate(1);
    d1.setMonth("May");
    d1.setYear(2023);
    d1.print();
}

