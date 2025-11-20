EXPERIMENT – ARRAY OF OBJECTS
AIM:
To illustrate the use of an array of objects in C++.

ALGORITHM:
Start the program.

Create a class named Student.

Declare data members such as name and marks.

Define member functions to:

input values for each student

display the stored values

In main(), declare an array of objects of the class.

Use a loop to accept values for each object.

Use another loop to display the details of each object.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s[3];  // array of objects

    cout << "Enter details of 3 students:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].getData();
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}

OUTPUT:
Enter details of 3 students:

Student 1:
Enter name: Ravi
Enter marks: 85

Student 2:
Enter name: Kumar
Enter marks: 92

Student 3:
Enter name: Pavan
Enter marks: 78

--- Student Details ---
Name: Ravi, Marks: 85
Name: Kumar, Marks: 92
Name: Pavan, Marks: 78

RESULT:
The concept of using an array of objects was successfully demonstrated by storing and displaying information for multiple students.
