EXPERIMENT – CONSTRUCTORS (TYPES) AND DESTRUCTOR
AIM:
To demonstrate the use of constructors, their types (default, parameterized, copy constructor), and destructor in C++.

A destructor to display a message when an object is destroyed.

In main(), create objects using:

Default constructor

Parameterized constructor

Copy constructor

Display the values stored in each object.

Observe destructor calls at the end of the program.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Demo {
    int value;

public:
    // Default constructor
    Demo() {
        value = 0;
        cout << "Default Constructor Called\n";
    }

    // Parameterized constructor
    Demo(int v) {
        value = v;
        cout << "Parameterized Constructor Called\n";
    }

    // Copy constructor
    Demo(const Demo &obj) {
        value = obj.value;
        cout << "Copy Constructor Called\n";
    }

    // Member function to display value
    void display() {
        cout << "Value = " << value << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor Called for value: " << value << endl;
    }
};

int main() {
    Demo d1;          // default constructor
    Demo d2(10);      // parameterized constructor
    Demo d3 = d2;     // copy constructor

    cout << "\n--- Displaying Values ---\n";
    d1.display();
    d2.display();
    d3.display();

    return 0;
}

OUTPUT:
Default Constructor Called
Parameterized Constructor Called
Copy Constructor Called

--- Displaying Values ---
Value = 0
Value = 10
Value = 10

Destructor Called for value: 0
Destructor Called for value: 10
Destructor Called for value: 10

RESULT:
The use of different types of constructors (default, parameterized, and copy constructor) along with a destructor was successfully demonstrated in C++. The destructor was invoked automatically when objects went out of scope.
