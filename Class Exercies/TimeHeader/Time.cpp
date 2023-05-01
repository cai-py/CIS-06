#include <iostream>
#include "Time.h"

using namespace std;


Time::Time(){
    hour = 0;
    min = 0;
    sec = 0;
}
Time::Time(int h, int m, int s) {
    //hour = h;
    //min = m;
    //sec = s;
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h) {
    if (h > 0 && h < 24) {
        hour = h;
    }
}
int Time::getHour() {
    return hour;
}
void Time::setMinute(int m) {
    if (m > 0 && m < 60) {
        min = m;
    } 
}
int Time::getMinute() {
    return min;
}
void Time::setSecond(int s) {
    if (s > 0 && s < 60) {
        sec = s;
    } 
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



/*
#include <iostream>

using namespace std;

class Time {
    private:
    // when u mark something private, it protects it
        int hour;
        int min;
        int sec;
    public:
        // constructor 
        Time();
        // constructor w variables /Ex. Time t1(10,15,30);
        Time(int h, int m, int s);

        void setHour(int h);
        int getHour();
        void setMinute(int m);
        int getMinute();
        void setSecond(int s);
        int getSecond();
        void print();
        void addHour(int h);
        void addMinute(int m);
        void addSecond(int s);
};

int main() {
    return 0;
}
*/