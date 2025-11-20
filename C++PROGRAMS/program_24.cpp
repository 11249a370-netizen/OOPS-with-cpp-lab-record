EXPERIMENT – SIMPLE PROGRAMS USING C++ STL
AIM:
To implement simple programs using basic components of the C++ Standard Template Library (STL) such as vectors, lists, and maps.

ALGORITHM:
Program 1: Using Vector

Start the program.

Include the <vector> header.

Declare a vector of integers.

Insert elements into the vector using push_back().

Display vector elements using a loop.

End the program.

Program 2: Using List

Start the program.

Include the <list> header.

Declare a list of integers.

Insert elements using push_back() and push_front().

Display list elements using an iterator.

End the program.

Program 3: Using Map

Start the program.

Include the <map> header.

Declare a map of string–int pairs.

Insert key–value pairs into the map.

Display map contents using an iterator.

End the program.

SOURCE CODE:
#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {

    // ---- VECTOR EXAMPLE ----
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector Elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;


    // ---- LIST EXAMPLE ----
    list<int> l;
    l.push_back(100);
    l.push_front(50);
    l.push_back(150);

    cout << "List Elements: ";
    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;


    // ---- MAP EXAMPLE ----
    map<string, int> m;
    m["Apple"] = 50;
    m["Mango"] = 40;
    m["Banana"] = 30;

    cout << "Map Elements (Fruit : Price):" << endl;
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}

OUTPUT:
Vector Elements: 10 20 30
List Elements: 50 100 150
Map Elements (Fruit : Price):
Apple : 50
Banana : 30
Mango : 40

RESULT:
Simple STL programs were successfully implemented using vector, list, and map, demonstrating 
the power and flexibility of the C++ Standard Template Library.
