EXPERIMENT – TO IMPLEMENT THE PURE VIRTUAL FUNCTION
AIM:
To implement and demonstrate the concept of pure virtual function and abstract class in C++.

ALGORITHM:
Start the program.

Create an abstract base class by declaring at least one pure virtual function.

Define regular member functions if needed inside the base class.

Create a derived class that inherits the abstract base class.

Override and define the pure virtual function in the derived class.

In the main() function, create a pointer of base class type.

Assign it to the object of the derived class.

Call the overridden function using the base class pointer.

Display the results.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Rectangle\n";
    }
};

int main() {
    Shape *ptr;

    Circle c;
    Rectangle r;

    cout << "Calling draw() using base class pointer:\n";

    ptr = &c;
    ptr->draw();

    ptr = &r;
    ptr->draw();

    return 0;
}

OUTPUT:
Calling draw() using base class pointer:
Drawing a Circle
Drawing a Rectangle

RESULT:
Pure virtual functions and abstract classes were successfully implemented, demonstrating runtime polymorphism using base class pointers.
