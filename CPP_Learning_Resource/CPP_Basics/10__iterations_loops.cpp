#include <iostream>
using namespace std;

int main()
{

    int my_numbers[] = {4, 5, 6, 7, 8, 9, 0};

    int i = 0;
    while (i < 7)
    {
        if (i == 3)
            continue;
        if (i == 9)
            break;

        cout << my_numbers[i] << endl;
        i++;
    }

    return 0;
}

//When something needs to be done again and again then we need to use loops

//Somethings need to be tested or keep an eye on:
//1.Where the condition is getting tested
//2.What condition is getting tested
//3.Change the value that is getting tested
//4.Automatic change of value, that is getting tested.