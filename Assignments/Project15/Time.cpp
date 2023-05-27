#include <iostream>
#include "Time.h"

using namespace std;


Time::Time() {
    hour = 0;
    min = 0;
    sec = 0;
}

Time::Time(int h, int m, int s) :Time() {
    //hour = 0;
    //min = 0;
    //sec = 0;
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h) {
    if ((h >= 0) && (h < 24))
        hour = h;
}

int Time::getHour() {
    return hour;
}

void Time::setMinute(int m) {
    if ((m >= 0) && (m < 60))
        min = m;
}

int Time::getMinute() {
    return min;
}

void Time::setSecond(int s) {
    if ((s >= 0) && (s < 60))
        sec = s;
}

int Time::getSecond() {
    return sec;
}

void Time::print() {
    cout << "Time = " << hour << ":" << min << ":" << sec << endl;
}

void Time::addHour(int h) {
    hour = (hour + h + 24) % 24;
}

void Time::addMinute(int m) {
    addHour((min + m) / 60);
    min = (min + m) % 60;
}

void Time::addSecond(int s) {
    addMinute((sec + s) / 60);
    sec = (sec + s) % 60;
}
