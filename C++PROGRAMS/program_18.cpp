EXPERIMENT – TO IMPLEMENT THE USE OF CLASS TEMPLATE
AIM:
To implement and demonstrate the use of class templates in C++ for creating generic classes.

ALGORITHM:
Start the program.

Define a class template using the template<typename T> syntax.

Declare data members of type T so the class becomes generic.

Define member functions inside the template class to perform operations.

In the main() function, create objects of the template class with different data types (e.g., int, float).

Call member functions using each object.

Display the results to show template flexibility.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

// Class template
template <class T>
class Demo {
    T a, b;

public:
    Demo(T x, T y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "Values: " << a << " and " << b << endl;
    }

    T add() {
        return a + b;
    }
};

int main() {
    Demo<int> d1(10, 20);
    Demo<float> d2(5.5, 4.5);

    cout << "Integer Template Object:\n";
    d1.display();
    cout << "Addition = " << d1.add() << endl;

    cout << "\nFloat Template Object:\n";
    d2.display();
    cout << "Addition = " << d2.add() << endl;

    return 0;
}

OUTPUT:
Integer Template Object:
Values: 10 and 20
Addition = 30

Float Template Object:
Values: 5.5 and 4.5
Addition = 10

RESULT:
Class templates were successfully implemented, demonstrating the ability to create generic classes that work with multiple data types.
