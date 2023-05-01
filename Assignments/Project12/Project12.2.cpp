/*
Write a Person class that contains the following fields and methods:
• First Name
• Last Name
• ID Number
• Necessary constructors.
• Methods to return last name, first name, full name, and ID Number
• Methods to print last name, first name, and ID Number
Write a main program to test your class.

*/

#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string firstName;
        string lastName;
        string idNumber;
    public:
        // empty constructor
        Person(){};
        // w/ parameters
        Person(string first, string last, string id){
            firstName = first;
            lastName = last;
            idNumber = id;
        }

        // get methods
        string getFirstName() {
            return firstName;
        }
        string getLastName() {
            return lastName;
        }
        string getFullName() {
            return firstName + " " + lastName;
        }
        string getID() {
            return idNumber;
        }

        // print methods 
        void printFirstName() {
            cout << "First Name: " << firstName << endl;
        }
        void printLastName() {
            cout << "Last Name: " << lastName << endl;
        }
        void printID() {
            cout << "ID Number : " << idNumber << endl;
        }
        void printInfo() {
            printFirstName();
            printLastName();
            printID();
        }
};

int main() {
    Person p1("John", "Doe", "1");

    cout << "1--> ----- Get methods -----" << endl;
    cout << p1.getFirstName() << endl;
    cout << p1.getLastName() << endl;
    cout << p1.getID() << endl;

    cout << "2--> ----- Print methods -----" << endl;
    p1.printFirstName();
    p1.printLastName();
    p1.printID();

    cout << "3--> ----- Print all -----" << endl;
    p1.printInfo();

    return 0;
}

/*
---------- OUTPUT ----------
1--> ----- Get methods -----
John
Doe
1
2--> ----- Print methods -----
First Name: John
Last Name: Doe
ID Number : 1
3--> ----- Print all -----
First Name: John
Last Name: Doe
ID Number : 1
*/