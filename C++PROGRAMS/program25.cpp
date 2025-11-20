EXPERIMENT – WEB PROGRAMMING WITH C++
AIM:
To demonstrate basic web programming using C++ by generating dynamic web content using a CGI (Common Gateway Interface) program.

ALGORITHM:
Start the program.

Include necessary C++ header files such as <iostream> and <string>.

Write the HTTP response header Content-type: text/html followed by a blank line.

Print HTML content such as headings, paragraphs, and user messages using cout.

Save the file with .cpp extension and compile it using a C++ compiler.

Place the compiled executable in the web server’s CGI directory (e.g., /cgi-bin).

Set execution permissions for the file.

Run the program through a web browser using a URL that points to the CGI script.

The browser displays dynamically generated HTML content.

End the program.

SOURCE CODE:
#include <iostream>
using namespace std;

int main() {
    // Mandatory HTTP header
    cout << "Content-type: text/html\n\n";

    // HTML output
    cout << "<html>\n";
    cout << "<head><title>C++ Web Programming</title></head>\n";
    cout << "<body>\n";
    cout << "<h1>Welcome to Web Programming with C++</h1>\n";
    cout << "<p>This page is generated dynamically using a C++ CGI program.</p>\n";
    cout << "<p>Hello from the server-side C++ code!</p>\n";
    cout << "</body>\n</html>\n";

    return 0;
}

OUTPUT:

Displayed in a web browser:

---------------------------------------------
|  Welcome to Web Programming with C++       |
|                                            |
|  This page is generated dynamically using  |
|  a C++ CGI program.                        |
|                                            |
|  Hello from the server-side C++ code!      |
---------------------------------------------


(Shown as formatted HTML on the browser)

RESULT:
Web programming using C++ was successfully implemented by generating dynamic HTML content through a CGI program running on a web server.
