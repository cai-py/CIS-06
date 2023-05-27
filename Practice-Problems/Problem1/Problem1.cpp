/*
Create a class named 'Student' with a string variable 'name' and an 
integer variable 'roll_no'. 
Assign the value of roll_no as '2' and that of name as "John" by 
creating an object of the class Student.
*/

#include <iostream>

using namespace std;

class Student {
    private:
        string name;
        int roll_no;
        int phone;
        string address;

    public: 
        // constructors 
        Student() {};
        Student(string nm, int rn, int phnum, string addy) {
            name = nm;
            roll_no = rn;
            phone = phnum;
            address = addy;
        }

};

int main() {
    Student s1("Sam", 1, 1234567890, "123 street");
    Student s2("John", 2, 2234567890, "456 street");
}