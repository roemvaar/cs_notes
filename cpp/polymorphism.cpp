// OOP - Polymorphism
// Polymorphism means "many forms", and it occurs when we have many
// classes that are related to each other by inheritance

#include <iostream>

using namespace std;


// Base class
class Animal {
    public:
        void makesAnimalSound() {
            cout << "The animal makes a sound." << endl;
        }
};


// Derived class
class Pig : public Animal {
    public:
        void makesAnimalSound() {
            cout << "The pig says: wee wee" << endl;
        }
};


class Dog : public Animal {
    public: 
        void makesAnimalSound() {
            cout << "The dog says: bow wow" << endl;
        }
};


int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.makesAnimalSound();
    myPig.makesAnimalSound();
    myDog.makesAnimalSound();

}

