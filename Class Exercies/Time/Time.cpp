#include <iostream>

using namespace std;

class Time {
    private:
    // when u mark something private, it protects it
        int hour;
        int min;
        int sec;
    public:
    Time();
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
// constructor 
Time() {
    hour = 0;
    min = 0;
    sec = 0;
}
// constructor w variables /Ex. Time t1(10,15,30);
Time(int h, int m, int s) {
    //hour = h;
    //min = m;
    //sec = s;
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void setHour(int h) {
    if (h > 0 && h < 24) {
        hour = h;
    }
}
int getHour() {
    return hour;
}
void setMinute(int m) {
    if (m > 0 && m < 60) {
        min = m;
    } 
}
int getMinute() {
    return min;
}
void setSecond(int s) {
    if (s > 0 && s < 60) {
        sec = s;
    } 
}
int getSecond() {
    return sec;
}
void print() {
    cout << "Time = " << hour << ":" << min << ":" << sec << endl;
}
void addHour(int h) {
    hour = (hour + h + 24) % 24;
}
void addMinute(int m) {
    addHour((min + m) / 60);
    min = (min + m) % 60;

}
void addSecond(int s) {
    addMinute((sec + s) / 60);
    sec = (sec + s) % 60;
}
*/

int main() {
    int numPeople = 3;



    Time t1, t2, t3(10, 15, 30);

    t2.print();
    t3.print();

    //t1.hour = 10;
    t1.setHour(10);
    //t1.min = 30;
    t1.setMinute(45);
    //t1.sec = 45;
    t1.setSecond(30);

    cout << "T1 Hour = " << t1.getHour() << endl;

    t1.setHour(-45);
    cout << "T1 Hour = " << t1.getHour() << endl;
    t1.print();

    t1.addHour(12);
    t1.print();

    t1.addHour(8);
    t1.print();

    t1.addHour(50);
    t1.print();

    t1.addMinute(50);
    t1.print();

    t1.addMinute(200);
    t1.print();

    t1.addSecond(45);
    t1.print();

    t1.addSecond(200);
    t1.print();

    t1.addHour(-20);
    t1.print();
}