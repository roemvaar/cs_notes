// inheritance_udacity.cpp - Inheritance lecture from
// Udacity C++ Programming course
//
// In C++ we can derive a class from another class, called
// a base. The derived class can access members and functions
// of the base class. We say the derived class has inherited
// from the base class

#include <iostream>
#include <string>

using namespace std;

// Base class
class Student
{
    private:
        int id;
        
    public:
        void setId(int idIn);
        int getId();
        Student();
};

Student::Student()
{
    id = 000000000;
}

void Student::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

// Derived class
class GradStudent : public Student
{
    private:
        string degree;
    
    public:
        GradStudent();
        void setDegree(string degreeIn);
        string getDegree();
};

GradStudent::GradStudent()
{
    degree = "undeclared";
}

void GradStudent::setDegree(string degreeIn)
{
    degree = degreeIn;
}

string GradStudent::getDegree()
{
    return degree;
}

int main()
{
    // Create an instance of the derived class,
    // GradStudent
    GradStudent gs1;

    // Set the id of the grad student using the 
    // setter method from the base class
    gs1.setId(12345678);

    // Set the degree of the grad student using
    // the setter method from the derived class
    gs1.setDegree("MASc EE");

    cout << gs1.getId() << " " << gs1.getDegree() << endl;
    
    return 0;
}
