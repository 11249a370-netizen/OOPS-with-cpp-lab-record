EXPERIMENT – TO DEMONSTRATE THE USE OF THIS POINTER & INLINE FUNCTION
AIM:
To demonstrate the use of the this pointer and inline function in C++.

ALGORITHM:
Start the program.

Create a class with data members and member functions.

Use the this pointer inside a setter function to differentiate between data members and parameters.

Declare a member function as inline to demonstrate inline function usage.

In the main function, create an object of the class.

Call the setter function to initialize values using the this pointer.

Call the inline function to display the values.

Display the output.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    // Using this pointer
    void setValue(int x) {
        this->x = x;   // this->x refers to class member x
    }

    // Inline function
    inline void display() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Demo obj;

    obj.setValue(20);   // Using this pointer inside function
    obj.display();      // Inline function call

    return 0;
}

OUTPUT:
Value of x = 20

RESULT:
The concept of the this pointer and inline function was successfully demonstrated in C++.
