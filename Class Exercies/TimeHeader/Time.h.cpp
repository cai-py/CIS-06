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