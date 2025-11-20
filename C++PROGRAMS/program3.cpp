EXPERIMENT – FUNCTION OVERLOADING USING MEMBER FUNCTIONS
AIM:
To demonstrate the concept of function overloading applied to the member functions in C++.

ALGORITHM:
Start the program.

Create a class named Area.

Overload the member function calculate() with different parameter lists:

One function to calculate the area of a square.

Another function to calculate the area of a rectangle.

Another function to calculate the area of a circle.

In main(), create an object of the Area class.

Call the overloaded functions with different arguments.

Display the results.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Area {
public:
    // Function to calculate area of a square
    int calculate(int side) {
        return side * side;
    }

    // Function to calculate area of a rectangle
    int calculate(int length, int breadth) {
        return length * breadth;
    }

    // Function to calculate area of a circle
    double calculate(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;

    cout << "Area of square (side = 5): " << a.calculate(5) << endl;
    cout << "Area of rectangle (4 x 6): " << a.calculate(4, 6) << endl;
    cout << "Area of circle (radius = 3.5): " << a.calculate(3.5) << endl;

    return 0;
}

OUTPUT:
Area of square (side = 5): 25
Area of rectangle (4 x 6): 24
Area of circle (radius = 3.5): 38.465

RESULT:
The concept of function overloading in member functions was successfully demonstrated by creating multiple functions with the same name but different parameters.
