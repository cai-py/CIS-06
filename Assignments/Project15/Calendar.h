#pragma once
#include <iostream>
#include <string>
#include "Appointment.h"

class Calendar {
private:
	Appointment apps[100];
	int num;
	Person owner;

public:
	Calendar();
	Calendar(Person);

	void addAppointment(Appointment);
	Appointment getAppointment(Time);
	Appointment* getDayAppointments(Date);
	void cancelAppointment(Time);
	void cancelDayAppointments(Date);
	void printAll();

};


