#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Time.h"
#include "Person.h"

using namespace std;

class Appointment {
private:
	Time start, end;
	Date day;
	Person persons[10];
	int num;

public:
	Appointment();
	Appointment(Time, Time, Date);
	void addPerson(Person);
	void removePerson(int);
	void setStartTime(Time);
	void setEndTime(Time);
	void setDate(Date);
	void print();
	void sendReminder();
};
