EXPERIMENT – ASSIGNMENT AND COMPARISON OF TWO STRINGS USING BINARY OPERATOR OVERLOADING
AIM:
To implement assignment and comparison of two strings using binary operator overloading in C++.

ALGORITHM:
Start the program.

Create a class named MyString to store a string.

Define a constructor to initialize the string.

Overload the assignment operator = to copy one string object to another.

Overload the comparison operator == to compare two string objects.

In main(), create two string objects with initial values.

Assign one object to another using the overloaded assignment operator.

Compare two objects using the overloaded comparison operator.

Display the results of assignment and comparison.

End the program.

SOURCE CODE:
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[50];

public:
    MyString() {
        strcpy(str, "");
    }

    MyString(const char s[]) {
        strcpy(str, s);
    }

    // Overloading assignment operator
    MyString operator=(MyString &s) {
        strcpy(str, s.str);
        return *this;
    }

    // Overloading comparison operator
    bool operator==(MyString &s) {
        return strcmp(str, s.str) == 0;
    }

    void display() {
        cout << str;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");
    MyString s3;

    cout << "Before assignment:\n";
    cout << "s1: "; s1.display(); cout << endl;
    cout << "s2: "; s2.display(); cout << endl;

    s3 = s1;  // using overloaded assignment operator

    cout << "\nAfter assignment (s3 = s1):\n";
    cout << "s3: "; s3.display(); cout << endl;

    cout << "\nComparing s1 and s2:\n";
    if (s1 == s2)
        cout << "Strings are equal\n";
    else
        cout << "Strings are not equal\n";

    return 0;
}

OUTPUT:
Before assignment:
s1: Hello
s2: World

After assignment (s3 = s1):
s3: Hello

Comparing s1 and s2:
Strings are not equal

RESULT:
The assignment (=) and comparison (==) binary operators were successfully overloaded to copy one string object to another and compare two string objects in C++.
