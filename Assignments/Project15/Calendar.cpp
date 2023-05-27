#include <iostream>
#include <string>
#include "Calendar.h"
#include "Appointment.h"

using namespace std;

Calendar::Calendar() {
    num = 0;
}

Calendar::Calendar(Person owner) {
    this->owner = owner;
    num = 0;
}

void Calendar::addAppointment(Appointment app) {
    if (num < 100) {
        apps[num] = app;
        num++;
        cout << "Appointment added to the calendar!" << endl;
    } else {
        cout << "Cannot add more appointments. Calendar is full." << endl;
    }
}

Appointment Calendar::getAppointment(Time time) {
    for (int i = 0; i < num; i++) {
        if (apps[i].getStartTime() == time || apps[i].getEndTime() == time) {
            return apps[i];
        }
    }
    cout << "No appointment found at the specified time." << endl;
    return Appointment(); // Return a default appointment if not found
}

Appointment* Calendar::getDayAppointments(Date date) {
    int count = 0;
    for (int i = 0; i < num; i++) {
        if (apps[i].getDate() == date) {
            count++;
        }
    }

    if (count == 0) {
        cout << "No appointments found on the specified date." << endl;
        return nullptr;
    }

    Appointment* dayAppointments = new Appointment[count];
    int index = 0;
    for (int i = 0; i < num; i++) {
        if (apps[i].getDate() == date) {
            dayAppointments[index] = apps[i];
            index++;
        }
    }
    return dayAppointments;
}

void Calendar::cancelAppointment(Time time) {
    for (int i = 0; i < num; i++) {
        if (apps[i].getStartTime() == time || apps[i].getEndTime() == time) {
            for (int j = i; j < num - 1; j++) {
                apps[j] = apps[j + 1];
            }
            num--;
            cout << "Appointment canceled!" << endl;
            return;
        }
    }
    cout << "No appointment found at the specified time." << endl;
}

void Calendar::cancelDayAppointments(Date date) {
    int count = 0;
    for (int i = 0; i < num; i++) {
        if (apps[i].getDate() == date) {
            count++;
        }
    }

    if (count == 0) {
        cout << "No appointments found on the specified date." << endl;
        return;
    }

    for (int i = 0; i < num; i++) {
        if (apps[i].getDate() == date) {
            for (int j = i; j < num - 1; j++) {
                apps[j] = apps[j + 1];
            }
            num--;
            i--; // Recheck the current index as the array shifted
        }
    }
    cout << "All appointments on the specified date canceled!" << endl;
}

void Calendar::printAll() {
    cout << "Calendar Owner: " << owner.getName() << endl;
    cout << "Number of Appointments: " << num << endl;

    for (int i = 0; i < num; i++) {
        cout << "Appointment " << i + 1 << ":" << endl;
        apps[i].print();
        cout << endl;
