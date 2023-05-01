#pragma once

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