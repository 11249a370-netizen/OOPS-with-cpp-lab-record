EXPERIMENT – STATIC DATA MEMBER AND STATIC MEMBER FUNCTION
AIM:
To illustrate the use of static data members and static member functions in C++.

ALGORITHM:

Start the program.

Create a class named Counter.

Declare a static data member to count the number of objects created.

Define a constructor that increments the static count value each time an object is created.

Define a static member function to display the current count.

In main(), create multiple objects of the class.

Call the static member function using the class name.

Display the total number of objects created.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Counter {
    static int count; // static data member

public:
    // Constructor increments count when object is created
    Counter() {
        count++;
    }

    // static member function
    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

// definition of static data member
int Counter::count = 0;

int main() {
    Counter c1, c2;   // creating two objects
    Counter::showCount();

    Counter c3;       // creating another object
    Counter::showCount();

    return 0;
}

OUTPUT:
Number of objects created: 2
Number of objects created: 3

RESULT:
The use of static data members and static member functions was successfully demonstrated. The static data member maintained a common value shared by all objects, and the static member function accessed it without needing an object.
