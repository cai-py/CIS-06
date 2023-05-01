/*
Write a class Sphere with the following properties:
Private attributes:
(1) X,Y, Z coordinates of the center
(2) Radius
Accessor and mutator methods to
• Set and get the X, Y, and Z coordinates
• Set and get the radius
• Get the volume and surface area of a sphere.
For a sphere,
volume = 4Π r3 / 3
surface area = 4Π r2
Write a main program to test the Sphere class.
*/

#include <iostream>

using namespace std;

class Sphere {
    private:
        double x;
        double y;
        double z;
        double r;
    public:
        // Contstructors 
        Sphere() {
            x = 0;
            y = 0;
            z = 0;
            r = 0;
        }
        Sphere(double xVal, double yVal, double zVal, double rVal) {
            x = xVal;
            y = yVal;
            z = zVal;
            r = rVal;
        }

        // set / get methods
        void setX(double xVal) {x = xVal;}
        void setY(double yVal) {y = yVal;}
        void setZ(double zVal) {z = zVal;}
        void setR(double rVal) {r = rVal;}

        double getX() {return x;}
        double getY() {return y;}
        double getZ() {return z;}
        double getR() {return r;}

        // volume 
        double getVolume() {
            double v = (4 * (3.1415 * (r*r*r)))/3;
            return v;
        }

        // surface area
        double getSurfaceArea() {
            double surfArea = 4 * (3.1415 * (r*r));
            return surfArea;
        }

};

int main() {
    Sphere s1(0,0,0,10);

    // test set/get methods
    cout << "1--> ----- Set/Get methods -----" << endl;
    s1.setX(10);
    cout << "X: " << s1.getX() << endl;
    s1.setY(5);
    cout << "Y: " << s1.getY() << endl;
    s1.setZ(8);
    cout << "Z: " << s1.getZ() << endl;

    // test volume
    cout << "2--> ----- Volume Method -----" << endl;
    double volume = s1.getVolume();
    cout << "Volume: " << volume << endl;

    // test surface area
    cout << "3--> ----- Surface Area Method -----" << endl;
    double surfArea = s1.getSurfaceArea();
    cout << "Surface Area: " << surfArea << endl;

    return 0;
}

/*
--------- OUTPUT ---------
1--> ----- Set/Get methods -----
X: 10
Y: 5
Z: 8
2--> ----- Volume Method -----
Volume: 4188.67
3--> ----- Surface Area Method -----
Surface Area: 1256.6
*/