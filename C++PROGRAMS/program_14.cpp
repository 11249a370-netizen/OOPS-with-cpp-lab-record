EXPERIMENT – TO IMPLEMENT THE USE OF MULTIPLE INHERITANCE
AIM:
To implement and demonstrate multiple inheritance in C++.

ALGORITHM:
Start the program.

Create two base classes with member functions.

Create a derived class that inherits from both base classes.

Define member functions inside each class to show functionality.

Create an object of the derived class in main().

Call the functions of both base classes through the derived class object.

Display the results.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Base1 {
public:
    void showBase1() {
        cout << "This is Base Class 1\n";
    }
};

class Base2 {
public:
    void showBase2() {
        cout << "This is Base Class 2\n";
    }
};

class Derived : public Base1, public Base2 {
public:
    void showDerived() {
        cout << "This is Derived Class (Multiple Inheritance)\n";
    }
};

int main() {
    Derived d;

    cout << "Calling functions from multiple base classes:\n";
    d.showBase1();
    d.showBase2();
    d.showDerived();

    return 0;
}

OUTPUT:
Calling functions from multiple base classes:
This is Base Class 1
This is Base Class 2
This is Derived Class (Multiple Inheritance)

RESULT:
Multiple inheritance was successfully implemented, demonstrating that a derived class can inherit features from more than one base class.
