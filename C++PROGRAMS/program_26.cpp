EXPERIMENT – SIMPLE PROGRAMS USING GRAPHICS CONCEPTS IN C++
AIM:
To implement simple graphics programs in C++ using basic drawing functions such as line, circle, and rectangle.

ALGORITHM:
Program 1: Drawing a Line

Start the program.

Include the graphics header file <graphics.h>.

Initialize the graphics mode using initgraph().

Use the function line(x1, y1, x2, y2) to draw a line.

Close the graphics mode using closegraph().

Program 2: Drawing a Circle

Start the program.

Initialize graphics mode.

Use the function circle(x, y, radius) to draw a circle.

Close the graphics window.

Program 3: Drawing a Rectangle

Start the program.

Initialize graphics mode.

Use the function rectangle(left, top, right, bottom) to draw a rectangle.

End the program.

SOURCE CODE:

Note: These programs work in Turbo C++ / WinBGIm graphics setup.

#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Drawing a line
    line(100, 100, 300, 100);
    outtextxy(120, 80, (char*)"Line Example");

    // Drawing a circle
    circle(200, 200, 50);
    outtextxy(170, 260, (char*)"Circle Example");

    // Drawing a rectangle
    rectangle(350, 150, 500, 250);
    outtextxy(360, 260, (char*)"Rectangle Example");

    getch();
    closegraph();
    return 0;
}

OUTPUT:

The graphics window will display:

[ A straight line ]
[ A circle ]
[ A rectangle ]


With labels:

“Line Example”

“Circle Example”

“Rectangle Example”
shown near the shapes.

RESULT:
Simple graphics programs were successfully implemented in C++ using basic
drawing functions such as line, circle, and rectangle with the graphics.h library.
