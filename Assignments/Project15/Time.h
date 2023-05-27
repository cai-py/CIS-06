#pragma once

class Time {
private:
    int hour;
    int min;
    int sec;

public:
    Time();
    Time(int, int, int);

    void setHour(int);
    int getHour();

    void setMinute(int);
    int getMinute();
    void setSecond(int);
    int getSecond();
    void print();
    void addHour(int);
    void addMinute(int);
    void addSecond(int);

};
