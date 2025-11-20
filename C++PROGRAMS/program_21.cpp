EXPERIMENT – PROGRAM TO IMPLEMENT EXCEPTION HANDLING IN C++
AIM:
To implement exception handling in C++ using try, catch, and throw statements.

ALGORITHM:
Start the program.

Prompt the user to enter two numbers.

Place the division operation inside a try block.

Check if the denominator is zero.

If denominator is zero, throw an exception.

Catch the thrown exception using a catch block.

Display an appropriate error message to the user.

If no exception occurs, display the division result.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw b;   // Throwing exception
        }
        cout << "Result = " << (a / b) << endl;
    }
    catch (int x) {
        cout << "Exception caught: Division by zero is not allowed!" << endl;
    }

    return 0;
}

OUTPUT:

Case 1 (Valid Division):

Enter two numbers: 10 2
Result = 5


Case 2 (Exception Case):

Enter two numbers: 10 0
Exception caught: Division by zero is not allowed!

RESULT:
Exception handling was successfully implemented using try, catch, and throw, ensuring safe execution of division operations.
