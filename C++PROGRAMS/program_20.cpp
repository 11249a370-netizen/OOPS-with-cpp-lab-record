EXPERIMENT – TO IMPLEMENT FILE HANDLING
AIM:
To implement basic file handling operations in C++ such as writing data to a file and reading data from a file.

ALGORITHM:
Start the program.

Include the <fstream> header for file operations.

Create an ofstream object to write data into a file.

Open a text file in write mode.

Write sample text/data into the file.

Close the file.

Create an ifstream object to read data from the file.

Open the same file in read mode.

Read the contents of the file and display them on the screen.

Close the file.

End the program.

SOURCE CODE:
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file
    ofstream fout;
    fout.open("data.txt");

    if (!fout) {
        cout << "Error opening file for writing!\n";
        return 0;
    }

    fout << "Hello, this is a file handling example.\n";
    fout << "We are writing and reading from a file in C++.\n";
    fout.close();

    // Reading from a file
    ifstream fin;
    fin.open("data.txt");

    if (!fin) {
        cout << "Error opening file for reading!\n";
        return 0;
    }

    cout << "Contents of the file:\n";
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    return 0;
}

OUTPUT:
Contents of the file:
Hello, this is a file handling example.
We are writing and reading from a file in C++.

RESULT:
The file handling operations were successfully implemented using C++, demonstrating writing data to a file and reading data from a file.
