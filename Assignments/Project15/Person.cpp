#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person() {
    name = "";
    age = 0;
}

Person::Person(const string& name, int age) {
    this->name = name;
    this->age = age;
}

string Person::getName() const {
    return name;
}

void Person::setName(const string& name) {
    this->name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::print() const {
    cout << "Name: " << name << ", Age: " << age << endl;
}
