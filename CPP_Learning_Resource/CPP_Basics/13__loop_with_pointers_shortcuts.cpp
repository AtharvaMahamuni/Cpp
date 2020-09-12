#include <iostream>
using namespace std;

int main()
{
    char my_string[] = "Atharva";
    char my_name[] = {'a', 't', 'h', 'a', 'r', 'v', 'a', 0};

    //printing my_string and my_name with both printf and cout.
    printf("my name is: %s\n", my_string);
    cout << "my name is: " << my_string << endl;
    printf("my name is: %s\n", my_name);
    cout << "my name is: " << my_name << endl;

    cout << "<<<<<<<<<<<<<>>>>>>>>>>>>>>>>" << endl;

    //printing my_string and my_name with loops
    for (char i : my_name)
    {
        if (i != 0)
            cout << "character is: " << i << endl;
    }

    cout << "-------------------------------------" << endl;
    for (char i : my_string)
    {

        cout << "character is: " << i << endl;
    }

    cout << "------Printing with pointer--------" << endl;
    //using pointer for looping
    for (char *cp = my_name; *cp != 0; cp++)
    {
        cout << "Character is: " << *cp << endl;
    }

    return 0;
}

//FIXME:
//Remember: Every single string will terminate with zero.