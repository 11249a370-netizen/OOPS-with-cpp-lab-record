
AIM:
To illustrate the concept of classes and objects in C++ by creating a class that stores and displays student details.

ALGORITHM:
Start the program.

Create a class named Student.

Declare data members such as name and roll.

Define member functions to:

input student details (getData)

display student details (displayData)

Inside main(), create an object of the Student class.

Call the member functions using the object.

Display the details entered.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;

public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
    }

    void displayData() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s;   // creating object
    s.getData(); // calling member functions
    s.displayData();
    return 0;
}

OUTPUT:
Enter Name: Pavan
Enter Roll Number: 27

--- Student Details ---
Name: Pavan
Roll Number: 27

RESULT:
The concept of classes and objects in C++ was successfully illustrated by creating a class with data members and member functions, and accessing them through an object.
