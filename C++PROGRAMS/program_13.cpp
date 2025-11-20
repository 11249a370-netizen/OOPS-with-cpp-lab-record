EXPERIMENT – TO IMPLEMENT THE USE OF SINGLE PRIVATE AND PUBLIC INHERITANCE
AIM:
To implement single inheritance in C++ using both public and private modes of inheritance.

ALGORITHM:
Start the program.

Create a base class containing data members and member functions.

Create a derived class that inherits the base class publicly.

Create another derived class that inherits the base class privately.

Demonstrate access to base class members in both inheritance modes.

Create objects of the derived classes in main().

Call accessible functions to illustrate differences between public and private inheritance.

Display results.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "Base class function called\n";
    }
};

// Public inheritance
class PublicDerived : public Base {
public:
    void show() {
        cout << "PublicDerived accessing Base: ";
        displayBase();  // Allowed
    }
};

// Private inheritance
class PrivateDerived : private Base {
public:
    void show() {
        cout << "PrivateDerived accessing Base: ";
        displayBase();  // Allowed inside class
    }
};

int main() {
    PublicDerived p1;
    PrivateDerived p2;

    cout << "Public Inheritance:\n";
    p1.show();
    p1.displayBase();   // Allowed (public)

    cout << "\nPrivate Inheritance:\n";
    p2.show();
    // p2.displayBase();  // Not allowed (private), uncommenting causes error

    return 0;
}

OUTPUT:
Public Inheritance:
PublicDerived accessing Base: Base class function called
Base class function called

Private Inheritance:
PrivateDerived accessing Base: Base class function called

RESULT:
Single inheritance was successfully implemented using both public and private inheritance modes, demonstrating differences in member accessibility.
