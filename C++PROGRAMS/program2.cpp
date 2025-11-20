EXPERIMENT – MEMBER FUNCTIONS DEFINED INSIDE AND OUTSIDE THE CLASS

AIM:
To implement and demonstrate member functions defined inside the class and outside the class in C++.

ALGORITHM:
Start the program.

Create a class named Calculator.

Define one member function inside the class (e.g., add).

Declare another member function inside the class but define it outside the class using scope resolution (::) (e.g., multiply).

In main(), create an object of the class.

Call both functions using the object.

Display the results.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {   // function defined inside the class
        return a + b;
    }

    int multiply(int a, int b);  // function prototype
};

// function defined outside the class using scope resolution operator
int Calculator::multiply(int a, int b) {
    return a * b;
}

int main() {
    Calculator c;

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << c.add(x, y) << endl;
    cout << "Multiplication: " << c.multiply(x, y) << endl;

    return 0;
}

OUTPUT:
Enter two numbers: 4 5
Addition: 9
Multiplication: 20

RESULT:
Member functions defined both inside and outside the class were successfully implemented and executed using the scope resolution operator.
