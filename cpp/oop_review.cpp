// C++ - Object Oriented Programming review

#include <iostream>

using namespace std;

class MyClass {
    public:
        int myNum;
        string myString;

        void myMethod() {
            cout << "HELLO WORLD FROM INSIDE THE METHOD" << endl;
        }
};


class Car {
    public:
        string brand;
        string model;
        int year;
};


int main() {
    
    MyClass myObj;  // Create an object of MyClass

    Car lightningMcQueen;
    lightningMcQueen.brand = "Ferrari";
    lightningMcQueen.model = "Italia";
    lightningMcQueen.year = 2002;

    Car towMater;
    towMater.brand = "Ford";
    towMater.model = "F150";
    towMater.year = 1969;
    

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "My name is Skrillex";

    // Print attribute values
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    cout << lightningMcQueen.brand << " " << lightningMcQueen.model << " " << lightningMcQueen.year << endl;
    cout << towMater.brand << " " << towMater.model << " " << towMater.year << endl;

    // Call the methods
    myObj.myMethod();

    return 0;

}

