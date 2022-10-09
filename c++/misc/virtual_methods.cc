// Demonstrates the use of virtual functions

#include <iostream>
#include <string>
using namespace std;

class Animal
{
	private:
		string type;

	public:
		Animal(): type("Animal") {}
		
		virtual string getType() {
			return type;
		}

		virtual void run() = 0;	// pure virtual function
};

class Dog : public Animal
{
	private:
		string type;

	public:
		Dog(): type("Dog") {}

		string getType() override {
			return type;
		}

		void run() {
			std::cout << "Dog running" << std::endl;
		}
};

class Cat : public Animal
{
	private:
		string type;

	public:
		Cat() : type ("Cat"){}

		string getType() override {
			return type;
		}		

		void run() {
			std::cout << "Cat running" << std::endl;
		}
};


void print(Animal *animal)
{
	cout << "Animal: " << animal->getType() << endl;	
}

int main()
{
	//Animal* animal1 = new Animal();	// not allowed, bc Animal is an abstract class due to the pure virtual function
	Animal* dog1 = new Dog();
	Animal* cat1 = new Cat();

	//print(animal1);
	print(dog1);
	print(cat1);

	dog1->run();
	cat1->run();

	return 0;
}
