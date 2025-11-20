EXPERIMENT – BINARY OPERATOR OVERLOADING
AIM:
To implement and demonstrate the use of binary operator overloading in C++.

ALGORITHM:
Start the program.

Create a class Complex with two data members: real part and imaginary part.

Define a constructor to initialize the values.

Overload the binary operator + to add two complex number objects.

Return the resulting complex number object.

In main(), create two complex number objects.

Use the overloaded + operator to add the objects.

Display the result.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overloading binary + operator
    Complex operator+(Complex c) {
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
    Complex c1(4, 5), c2(2, 3);

    cout << "First number: ";
    c1.display();

    cout << "Second number: ";
    c2.display();

    Complex c3 = c1 + c2;  // using overloaded +

    cout << "Result of addition: ";
    c3.display();

    return 0;
}

OUTPUT:
First number: 4 + 5i
Second number: 2 + 3i
Result of addition: 6 + 8i

RESULT:
Binary operator overloading was successfully implemented using the + operator to add two complex number objects and return the result.
