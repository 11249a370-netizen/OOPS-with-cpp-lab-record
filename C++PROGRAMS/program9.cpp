EXPERIMENT – FRIEND CLASS AND FRIEND FUNCTION
AIM:
To illustrate the use of a friend class and a friend function in C++.

ALGORITHM:
Start the program.

Create a class Sample with a private data member.

Declare another class Display as a friend class of Sample.

Inside Display, define a member function that accesses the private data of Sample.

Also create a friend function that can access the private data of Sample.

In main(), create objects of both classes.

Call the member function of the friend class to display private data.

Call the friend function to display the same private data.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

class Sample {
    int data;

public:
    Sample(int x) {
        data = x;
    }

    // friend class declaration
    friend class Display;

    // friend function declaration
    friend void showData(Sample s);
};

// Friend class
class Display {
public:
    void printData(Sample s) {
        cout << "Accessing through friend class: " << s.data << endl;
    }
};

// Friend function definition
void showData(Sample s) {
    cout << "Accessing through friend function: " << s.data << endl;
}

int main() {
    Sample obj(100);
    Display d;

    d.printData(obj);       // using friend class
    showData(obj);          // using friend function

    return 0;
}

OUTPUT:
Accessing through friend class: 100
Accessing through friend function: 100

RESULT:
The concepts of friend class and friend function were successfully demonstrated. Both were able to
access the private data of another class, proving their special access privileges.
