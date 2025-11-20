EXPERIMENT – PROGRAM TO IMPLEMENT SIGNAL (INTERRUPTS) HANDLING IN C++
AIM:
To implement signal handling (interrupt handling) in C++ using the signal() function.

ALGORITHM:
Start the program.

Include the <csignal> header for signal handling.

Define a signal handler function that executes when a signal is received.

Use the signal() function to connect the signal (e.g., SIGINT) to the handler function.

Use an infinite loop to keep the program running and allow interrupt detection.

When the user presses Ctrl + C, the signal handler gets executed.

Display an appropriate message from inside the handler.

Exit the program after the signal is caught.

End the program.

SOURCE CODE:
#include <iostream>
#include <csignal>
#include <cstdlib>
using namespace std;

// Signal handler function
void signalHandler(int signum) {
    cout << "\nInterrupt signal (" << signum << ") received.\n";
    cout << "Exiting the program safely...\n";
    exit(signum);
}

int main() {
    // Register signal handler for Ctrl + C
    signal(SIGINT, signalHandler);

    cout << "Program running... Press Ctrl + C to generate an interrupt.\n";

    // Infinite loop for demonstration
    while (true) {
    }

    return 0;
}

OUTPUT:

Before interrupt:

Program running... Press Ctrl + C to generate an interrupt.


When user presses Ctrl + C:

Interrupt signal (2) received.
Exiting the program safely...

RESULT:

Signal handling was successfully implemented using signal() and a user-defined handler function. The program detected and processed interrupts 
such as Ctrl + C (SIGINT) effectively.

