#include <iostream>
using namespace std;

int main()
{

    int rating = 3;

    switch (rating) //this rating will get eveluated with cases from following block
    {
    case 1:
        puts("It is rated 1");
        break;

    case 2:
        puts("It is rated 2");
        break;

    case 3:
        puts("It is reated 3");
        break;

    case 4:
        puts("It is rated 4");
        break;

    case 5:
        puts("It is rated 5");
        break;

    default:
        puts("Wrong reating rate between 1 and 5");
    }

    return 0;
}