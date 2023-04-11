#include <iostream>

using namespace std;

void sortNames(string [], int);

int main() {
    const int arrLength = 20;
    string names[arrLength];

    // Input up to 20 names
    string name;
    for (int i = 0; i < arrLength; i++) {
        cout << "Enter a name: ";
        cin >> name;
        names[i] = name;
    }

    // Sort the names in alphabetical order
    sortNames(names, arrLength);

    // Output the sorted names
    cout << endl << "***** Sorted names *****" << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}


void sortNames(string names[], int n) {
    // insertion sort
    for (int i = 1; i < n; i++) {
        // check each element in the list agains all the ones before it
        for (int j = i; j >= 1; j--) {
            if (names[j] < names[j - 1]) {
                // Swap the two elements
                string temp = names[j];
                names[j] = names[j - 1];
                names[j - 1] = temp;
            }
            else {
                // The element is in its correct position
                break;
            }
        }
    }
}


/*
***** OUTPUT *****
Enter a name: zack
Enter a name: tayor 
Enter a name: miguel
Enter a name: jessie
Enter a name: quin
Enter a name: xen  
Enter a name: victor
Enter a name: guy
Enter a name: justin
Enter a name: alan
Enter a name: mason
Enter a name: nellie
Enter a name: yoko
Enter a name: fred
Enter a name: maya
Enter a name: danny 
Enter a name: ben
Enter a name: reily
Enter a name: cece
Enter a name: rachel

***** Sorted names *****
alan
ben
cece
danny
fred
guy
jessie
justin
mason
maya
miguel
nellie
quin
rachel
reily
tayor
victor
xen
yoko
zack

***** NOTES *****

* insertion sort algorithm 
void intsertionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j > 0; j--) {
            if (arr[j] < arr[j - 1]){
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {
                break;
            }
        }
    }
}
*/

