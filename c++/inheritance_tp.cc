// inheritance_tp.cpp - Inheritance tutorial from
// https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
//
// Inheritance allows us to define a class in terms of
// another class, which makes it easier to create and
// maintain. This also provides the opportunity to reuse
// the code functionality and fast implementation time.

#include <iostream>

using namespace std;

// Base class
class Shape
{
    public:
        void setWidth(int w) {
            width = w;
        }

        void setHeight(int h) {
            height = h;
        }

    protected:
        int width;
        int height;
};

// Derived class
class Rectangle: public Shape
{
    public:
    int getArea() {
        return (width * height);
    }
};

int main(void)
{
    Rectangle Rect;

    Rect.setHeight(7);
    Rect.setWidth(5);

    // Print the area of the object
    cout << "Total area: " << Rect.getArea() << endl;

    return 0;
}
