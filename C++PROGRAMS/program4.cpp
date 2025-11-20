EXPERIMENT – PASSING OBJECT AS FUNCTION ARGUMENTS AND RETURNING OBJECT FROM FUNCTION
AIM:
To implement and demonstrate passing objects as function arguments and returning an object from a function in C++.

ALGORITHM:
Start the program.

Create a class named Complex to store real and imaginary parts of a complex number.

Define a member function add() that:

Accepts an object as an argument.

Adds the values of the current object with the passed object.

Returns the resulting object.

In main(), create two Complex objects and initialize them.

Call the function by passing the second object to the first.

Store the returned object and display the result.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void getData(int r, int i) {
        real = r;
        imag = i;
    }

    // Passing object as argument and returning object
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.getData(5, 4);
    c2.getData(3, 2);

    c3 = c1.add(c2);  // Passing object and returning object

    cout << "Result of addition: ";
    c3.display();

    return 0;
}

OUTPUT:
Result of addition: 8 + 6i

RESULT:
The concepts of passing an object as a function argument and returning an object from a function were successfully implemented and demonstrated using a Complex class.
