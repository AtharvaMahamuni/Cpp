#include <iostream>
using namespace std;

//call by refernce
//#1
void lifeUp(int *life)
{
    ++(*life);
}

//call by refernce
//#2
void lifeUp_2(int &life)
{
    ++life;
}

//call by value
float addme(float a, float b)
{
    return a + b;
}

int main()
{
    int life = 3;
    lifeUp(&life);
    cout << life << endl;

    lifeUp_2(life);
    cout << life << endl;

    int v1 = 3;
    int v2 = 4;
    float v3 = 5.3;
    float v4 = 7.2;

    cout << addme(v3, v4) << endl;

    return 0;
}

//BluePrint of function:
/*
    what_I_will_give_back  function_name(what_you_have_to_give_me)
    {
        what_I_will_do.
    
        return whatever_I_can_give_back;
        //nothing execute after return
    }
*/

//Call by Value:
//Call by reference:

//More about functions here: https://www.geeksforgeeks.org/functions-in-c/
//Types of functions: https://www.programiz.com/cpp-programming/user-defined-function-types