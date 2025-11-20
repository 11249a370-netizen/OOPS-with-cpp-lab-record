EXPERIMENT – PROGRAM TO IMPLEMENT USER DEFINED NAMESPACE IN C++
AIM:
To implement and demonstrate the use of a user-defined namespace in C++.

ALGORITHM:
Start the program.

Create a custom namespace with a variable and a function.

Define the function inside the namespace.

Create another namespace to show multiple namespaces if needed.

In the main() function, access the namespace members using the scope resolution operator ::.

Demonstrate how naming conflicts are avoided using namespaces.

Display the output.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

// User-defined namespace
namespace Demo {
    int x = 10;

    void display() {
        cout << "Inside Demo Namespace, x = " << x << endl;
    }
}

// Another namespace for demonstration
namespace Sample {
    int x = 50;

    void display() {
        cout << "Inside Sample Namespace, x = " << x << endl;
    }
}

int main() {
    cout << "Accessing functions from user-defined namespaces:\n";

    Demo::display();
    Sample::display();

    cout << "\nAccessing variables directly:\n";
    cout << "Demo::x = " << Demo::x << endl;
    cout << "Sample::x = " << Sample::x << endl;

    return 0;
}

OUTPUT:
Accessing functions from user-defined namespaces:
Inside Demo Namespace, x = 10
Inside Sample Namespace, x = 50

Accessing variables directly:
Demo::x = 10
Sample::x = 50

RESULT:
User-defined namespaces were successfully implemented in C++, demonstrating how
namespaces help organize code and avoid naming conflicts.
