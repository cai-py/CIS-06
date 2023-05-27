#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person();
    Person(const string& name, int age);

    string getName() const;
    void setName(const string& name);
    int getAge() const;
    void setAge(int age);

    void print() const;
};

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
