#include <iostream>
#include <string>
#include "Appointment.h"
#include "Date.h"
#include "Time.h"
#include "Person.h"

using namespace std;

Appointment::Appointment() {
    num = 0;
}

Appointment::Appointment(Time start, Time end, Date day) {
    this->start = start;
    this->end = end;
    this->day = day;
    num = 0;
}

void Appointment::addPerson(Person person) {
    if (num < 10) {
        persons[num] = person;
        num++;
        cout << "Person added to the appointment!" << endl;
    } else {
        cout << "Cannot add more persons. Appointment is full." << endl;
    }
}

void Appointment::removePerson(int index) {
    if (index >= 0 && index < num) {
        for (int i = index; i < num - 1; i++) {
            persons[i] = persons[i + 1];
        }
        num--;
        cout << "Person removed from the appointment!" << endl;
    } else {
        cout << "Invalid person index." << endl;
    }
}

void Appointment::setStartTime(Time start) {
    this->start = start;
}

void Appointment::setEndTime(Time end) {
    this->end = end;
}

void Appointment::setDate(Date day) {
    this->day = day;
}

void Appointment::print() {
    cout << "Appointment Date: ";
    day.print();
    cout << "Start Time: ";
    start.print();
    cout << "End Time: ";
    end.print();

    cout << "Persons in the Appointment:" << endl;
    for (int i = 0; i < num; i++) {
        cout << "Person " << i + 1 << ":" << endl;
        persons[i].print();
    }
}

void Appointment::sendReminder() {
    cout << "Sending reminder for the appointment on ";
    day.print();
    cout << "at ";
    start.print();
    cout << endl;
}
