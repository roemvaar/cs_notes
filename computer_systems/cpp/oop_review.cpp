// C++ - Object Oriented Programming review

#include <iostream>
#include <ctime>

using namespace std;

class MyClass {
    public:
        int myNum;
        string myString;
        
        MyClass() {
            cout << "This is a constructor" << endl;
        }

        void myMethod() {
            cout << "HELLO WORLD FROM INSIDE THE METHOD" << endl;
        }
};


class Car {
    public:
        string brand;
        string model;
        int year;

        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }

        void showCarAge();
        void isSlowOrFast(int maxSpeed);
   
    // It's a good practice to declare your class attributes as private
    // By default, all members of a class are private if you don't specify an
    // access specifier
    private:
        int price;

};

void Car::showCarAge() {
 
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "This car is " << 1900 + ltm->tm_year - year << " years old." << endl; 
}


void Car::isSlowOrFast(int maxSpeed) {
    
    if(maxSpeed > 200) cout << "This is a fast car" << endl;
    else cout << "Slow beast" << endl;
}


int main() {
    MyClass myObj;  // Create an object of MyClass

    Car lightningMcQueen("Ferrari", "Italia", 2002);
    Car towMater("Ford", "F150", 1969);

    // towMater.price = 3000;  // Not allowed (private)

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
    towMater.showCarAge();

    towMater.isSlowOrFast(50);
    lightningMcQueen.isSlowOrFast(250);

    return 0;

}

