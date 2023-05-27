#include <iostream>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string phoneNumber;

public:
    // this type of constructor can create an object with the data passed to it from the pointer in the AddressBook object
    Person(const string& fName, const string& lName, const string& number) {
            firstName = fName;
            lastName = lName;
            phoneNumber = number;
        }

    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }
};

class AddressBook {
private:
    Person* persons[10000];
    int size;

public:
    AddressBook() {
        size = 0;
    }

    // add person method
    // takes the person object passed to it and adds it to the array of people in our AddressBook
    void addPerson(const Person& person) {
        // check size of address book
        if (size < 10000) {

            persons[size] = new Person(person.getFirstName(), person.getLastName(), person.getPhoneNumber());
            ++size;
        }
        else {
            cout << "Address book is full, delete a person to add more." << endl;
        }
    }

    // delete
    void deletePerson(const Person& person) {
        for (int i = 0; i < size; ++i) {
            // finds the person matching the exact parameter you want to delete
            if (persons[i]->getFirstName() == person.getFirstName() &&
                persons[i]->getLastName() == person.getLastName() &&
                persons[i]->getPhoneNumber() == person.getPhoneNumber()) {
                // deletes found person
                delete persons[i];
                --size;
                // restructure array
                for (int j = i; j < size; ++j) {
                    persons[j] = persons[j + 1];
                }
            }
        }
        cout << "Person not found in the address book." << endl;
    }

    void searchPerson(const string& searchTerm) {
        // create conditional statement
        bool found = false;
        // search array and print if found
        for (int i = 0; i < size; ++i) {
            if (persons[i]->getFirstName() == searchTerm ||
                persons[i]->getLastName() == searchTerm ||
                persons[i]->getPhoneNumber() == searchTerm) {
                cout << "First Name: " << persons[i]->getFirstName() << endl;
                cout << "Last Name: " << persons[i]->getLastName() << endl;
                cout << "Phone Number: " << persons[i]->getPhoneNumber() << endl << endl;
                found = true;
            }
        }
        // if not found print message 
        if (!found) {
            cout << "No matching persons found." << endl;
        }
    }
};

int main() {
    AddressBook addressBook;

    // Adding persons to the address book
    // create a person object and pass it into the addPerson() function in the AddressBook object.
    Person person1("Alex", "G", "1234567890");
    addressBook.addPerson(person1);

    Person person2("Tame", "Impala", "234567901");
    addressBook.addPerson(person2);

    Person person3("Alan", "Turing", "3456789012");
    addressBook.addPerson(person3);

    // Searching for a person
    cout << "Searching for persons with last name 'Turing': " << endl;
    addressBook.searchPerson("Turing");

    // Deleting a person
    cout << "Deleting person with phone number '1234567890': " << endl;
    // every parameter needs to match the person exactly
    Person personToDelete("Alex", "G", "1234567890");
    addressBook.deletePerson(personToDelete);

    // Searching after deletion
    cout << "Searching for persons with last name 'G': " << endl;
    addressBook.searchPerson("G");

    return 0;
}



/*
OUTPUT
Searching for persons with last name 'Turing': 
First Name: Alan
Last Name: Turing
Phone Number: 3456789012

Deleting person with phone number '1234567890': 
Person not found in the address book.
Searching for persons with last name 'G': 
No matching persons found.
*/