// OOP - Inheritance 
// Inheritance is useful for code reusability: reuse attributes and methods
// of an existing class when you create a new class
// Derived class (child) - the class that inherits from another class
// Base class (parent) - the class being inherited from

#include <iostream>

using namespace std;

// Base class - parent
class Vehicle {
    protected:
        int cost;

    private:
        string brand = "Ford";
 
    public:
        void honk() {
            cout << "Tuut, tuut!" << endl;
        }

        void setBrand(string vehicleBrand) {
            brand = vehicleBrand;
        }

        string getBrand() {
            return brand;
        }
};


class Engine {
    
    public:
        int getNumberOfCylinders() {
            return (4);
        }
};


// Derived class - child
class Car: public Vehicle {
    
    private:
        string model = "Mustang";

    public: 
        void setModel(string carModel) {
            model = carModel;
        }

        string getModel() {
            return model;
        }

        void setCost(int carCost) {
            cost = carCost;
        }

        int getCost() {
            return cost;
        }
};


// Derived class - grandchild
class SportsCar: public Car, public Engine {
    public:
        SportsCar() {
            cout << "Congrats on your new sports car!" << endl;
        }

        int getNumberOfCylinders() {
            return(12);
        }
};


int main() {

    Car myCar;
    SportsCar myFerrari;
    myCar.honk();
    myFerrari.setCost(100000);
    cout << myCar.getBrand() + " " + myCar.getModel() << endl;
    cout << myFerrari.getNumberOfCylinders() << endl;
    cout << "My Ferrari cost is " << myFerrari.getCost() << endl;

    return 0;
}

