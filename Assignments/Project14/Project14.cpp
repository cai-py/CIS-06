#include <iostream>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string phoneNumber;

public:
    // constructors
    Person(){}
    Person(const string& fName, const string& lName, const string& number) {
        firstName = fName;
        lastName = lName;
        phoneNumber = number;
    }

    // access methods
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
    /*
    NOTES
    Using a pointer to a pointer allows for dynamic memory 
    allocation, where the size of the array can be determined 
    at runtime. In this case, it will be used to store the 
    collection of Person objects in the address book.

    Since persons is a double pointer, it can be used to point 
    to the start of the dynamic array. Each element in the array 
    will be a pointer to a Person object.
    */
    Person** persons;
    int capacity;
    int size;

public:
    AddressBook() : persons(nullptr), capacity(0), size(0) {}

    ~AddressBook() {
        for (int i = 0; i < size; ++i) {
            delete persons[i];
        }
        delete[] persons;
    }

    void addPerson(const Person& person) {
        if (size == capacity) {
            int newCapacity = (capacity == 0) ? 1 : capacity * 2;
            Person** newPersons = new Person*[newCapacity];
            for (int i = 0; i < size; ++i) {
                newPersons[i] = persons[i];
            }
            delete[] persons;
            persons = newPersons;
            capacity = newCapacity;
        }

        persons[size] = new Person(person.getFirstName(), person.getLastName(), person.getPhoneNumber());
        ++size;
    }

    void deletePerson(const Person& person) {
        for (int i = 0; i < size; ++i) {
            if (persons[i]->getFirstName() == person.getFirstName() &&
                persons[i]->getLastName() == person.getLastName() &&
                persons[i]->getPhoneNumber() == person.getPhoneNumber()) {
                delete persons[i];
                for (int j = i + 1; j < size; ++j) {
                    persons[j - 1] = persons[j];
                }
                --size;
                return;
            }
        }
    }

    void searchPerson(const string& searchTerm) {
        bool found = false;
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
        if (!found) {
            cout << "No matching persons found." << endl;
        }
    }
};

int main() {
    AddressBook addressBook;

    // Adding persons to the address book
    Person person1("John", "Doe", "1234567890");
    addressBook.addPerson(person1);

    Person person2("Jane", "Smith", "9876543210");
    addressBook.addPerson(person2);

    Person person3("Alice", "Johnson", "5555555555");
    addressBook.addPerson(person3);

    // Searching for a person
    cout << "Searching for persons with last name 'Doe': " << endl;
    addressBook.searchPerson("Doe");

    // Deleting a person
    cout << "Deleting person with phone number '9876543210': " << endl;
    Person personToDelete("Jane", "Smith", "9876543210");
    addressBook.deletePerson(personToDelete);

    // Searching after deletion
    cout << "Searching for persons with last name 'Smith': " << endl;
    addressBook.searchPerson("Smith");

    return 0;
}




/*
#include <iostream>

using namespace std;
class Person {
    private:
        string firstName;
        string lastName;
        int phoneNumber;
    public:
        // constructor 
        Person() {}
        Person(string fName, string lName, int number) {
            firstName = fName;
            lastName = lName;
            phoneNumber = number;
        }
        string getFrirstName() {
            return firstName;
        }
        string getLastName() {
            return lastName;
        }
        int getPhoneNumber() {
            return phoneNumber;
        }

};

class AddressBook {
    private:
        Person people[1000];


    public:
        AddressBook(){}
        AddressBook(Person P1) {
            people[1000] = P1;
        }
    
};

int main() {
    cout << "Hello" << endl;
}
*/
