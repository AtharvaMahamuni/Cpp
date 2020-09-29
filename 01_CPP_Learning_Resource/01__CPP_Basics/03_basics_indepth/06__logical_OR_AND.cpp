#include <iostream>
using namespace std;

int main()
{

    bool isFbUser = false;
    bool isGoogleUser = true;
    bool isAdmin = true;

    if ((isFbUser && isGoogleUser) || isAdmin) //(isFbUser && isAdmin)
    {
        puts("Welcome admin");
    }
    else
    {
        puts("No admin access");
    }

    if (isFbUser || isGoogleUser)
    {
        puts("Welcome user");
    }

    return 0;
}

//this logical AND and logical OR operators are used to
//evaluate some of the conditions from conditionals and from
//