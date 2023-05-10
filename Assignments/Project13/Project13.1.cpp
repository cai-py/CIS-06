#include <iostream>

using namespace std;

class Odometer {
    private:
        double fuelEfficiency; // miles per gallon
        double mileage; // how many miles driven

    public:
        // constructors
        Odometer() {};
        Odometer(double f, double m) {
            fuelEfficiency = f; // miles per gallon
            mileage = m; // how many miles driven
        }

        // mutator methods
        // reset odometer
        void resetOdometer() {
            mileage = 0;
        }
        // set fuel efficiency
        void setFuelEfficiency(double n) {
            fuelEfficiency = n;
        }
        //add miles to odometer
        void addMiles(double n) {
            mileage += n;
        }
        
        // accessor method
        //gallons of gas consumed since last odometer reset
        double gasConsumed() {
            double temp = mileage / fuelEfficiency;
            return temp;
        }
};

int main() {
    // create car
    Odometer car;

    // set fuel efficiency 
    car.setFuelEfficiency(20);

    // drive 50 miles
    car.addMiles(80);

    // get gallons consumed
    cout << "Gallons consumed: " << car.gasConsumed() << endl;

    // reset
    car.resetOdometer();
    // add more miles
    car.addMiles(50);

    // get callons consumed
    cout << "Gallons consumed: " << car.gasConsumed() << endl;

    return 0;
}

/*
OUTPUT 
Gallons consumed: 4
Gallons consumed: 2.5
*/