EXPERIMENT – TO IMPLEMENT THE USE OF MULTI-LEVEL INHERITANCE
AIM:
To implement and demonstrate multi-level inheritance in C++.

ALGORITHM:
Start the program.

Create a base class with a member function.

Create a derived class that inherits from the base class.

Create another class that inherits from the derived class (third level).

Define functions in each class to show inheritance flow.

In main(), create an object of the third-level derived class.

Call functions of all three classes through this object.

Display the output.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "This is Class A (Base Class)\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "This is Class B (Derived from A)\n";
    }
};

class C : public B {
public:
    void showC() {
        cout << "This is Class C (Derived from B)\n";
    }
};

int main() {
    C obj;

    cout << "Accessing members in multi-level inheritance:\n";
    obj.showA();
    obj.showB();
    obj.showC();

    return 0;
}

OUTPUT:
Accessing members in multi-level inheritance:
This is Class A (Base Class)
This is Class B (Derived from A)
This is Class C (Derived from B)

RESULT:
Multi-level inheritance was successfully implemented, showing that features of one class can be passed through multiple levels of derived classes.
