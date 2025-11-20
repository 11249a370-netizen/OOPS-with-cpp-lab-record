EXPERIMENT – MEMORY MANAGEMENT OPERATORS (NEW AND DELETE)
AIM:
To illustrate the use of memory management operators new and delete in C++.

ALGORITHM:
Start the program.

Declare a pointer variable of type int.

Use the new operator to dynamically allocate memory for an integer.

Store a value in the allocated memory.

Display the stored value.

Use the delete operator to free the dynamically allocated memory.

Declare a pointer for a dynamically allocated array.

Allocate memory for an array using new[].

Input values into the array.

Display the values stored in the array.

Free the memory using delete[].

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

int main() {

    // Dynamic memory allocation for a single integer
    int *p = new int;     // allocating memory
    *p = 50;              // assigning value

    cout << "Value stored using dynamic allocation: " << *p << endl;

    delete p;             // freeing memory


    // Dynamic memory allocation for an array
    int n;
    cout << "\nEnter number of elements: ";
    cin >> n;

    int *arr = new int[n];  // allocating memory for array

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nValues stored in dynamically allocated array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;       // freeing memory for array

    return 0;
}

OUTPUT:
Value stored using dynamic allocation: 50

Enter number of elements: 5
Enter 5 integers:
10 20 30 40 50

Values stored in dynamically allocated array:
10 20 30 40 50

RESULT:
The memory management operators new, new[], delete, and delete[] were successfully demonstrated. Dynamic allocation 
and deallocation of memory for both single variables and arrays were implemented correctly.
