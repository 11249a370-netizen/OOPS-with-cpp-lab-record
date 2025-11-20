EXPERIMENT – UNARY OPERATOR OVERLOADING
AIM:
To implement and demonstrate unary operator overloading in C++.

ALGORITHM:
Start the program.

Create a class named Number with a private data member.

Define a constructor to initialize the value.

Overload the unary operator ++ to increment the value.

Overload the unary operator - to change the sign of the value.

In main(), create an object of the class.

Apply unary operators to the object.

Display the results.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    // Unary ++ operator overloading
    void operator++() {
        value++;
    }

    // Unary - operator overloading
    void operator-() {
        value = -value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n(10);

    cout << "Original ";
    n.display();

    ++n;   // using overloaded ++
    cout << "After ++ operator: ";
    n.display();

    -n;    // using overloaded - operator
    cout << "After - operator: ";
    n.display();

    return 0;
}

OUTPUT:
Original Value = 10
After ++ operator: Value = 11
After - operator: Value = -11

RESULT:
Unary operator overloading was successfully demonstrated by overloading the ++ and - operators to modify the value stored in an object.
