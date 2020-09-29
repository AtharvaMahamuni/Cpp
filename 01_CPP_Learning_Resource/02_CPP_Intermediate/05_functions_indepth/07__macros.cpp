#include <iostream>
#include <string>

using namespace std;

#define ENDMESSAGE cout << "Program ended" << endl;
#define END return 0

#define AMINT int8_t

#define console_log(a) cout << a << endl

int main()
{
    string str = "Hello world";
    cout << str << endl;

    cout << "Size of AMINT: " << sizeof(AMINT) << " byte/s" << endl;

    int score = 400;
    console_log(score); // this value is passed to the micro and again printed on the screen.

    string name = "atharva";
    console_log(name);

    ENDMESSAGE;
    END; // here we have replaced return 0 with end which is micro
}

//explination on micro: https://www.geeksforgeeks.org/cc-preprocessors/