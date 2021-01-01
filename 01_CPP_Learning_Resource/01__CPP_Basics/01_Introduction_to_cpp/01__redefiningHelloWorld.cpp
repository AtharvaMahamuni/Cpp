#include <iostream>

using namespace std;

int main()
{
    //std::cout << "Hello, World" << std::endl;
    cout << "Hello, World" << endl;

    return 0;
    puts("This line never execute"); //nothing will execute after return.
}

//I don't think abouve code had gave you any surprise if you are already familiar with C++
//But one thing I want to cover here is namespace

//Now let's see what is the namespace by writing new code

//Look at line no.7 and 8 both will produce same output
//but here we need to write std:: before cout and endl which
//which indicates that both things are coming from std file which is already written code
//now to reduce the ambiguity we already declared that we are taking some things from
//std and for that we used namespace which reduce the conflicts.

//Take an example to make it more simple
//Suppose we have two files login and signup and both have on similar function getTicket()
//then whenever you use getTicket() function you need to specify from were you are taking it
//by writing signup::getTicket() or login::getTicket()
//suppose you want to use getTicket only from login so you can use
//using namespace login;
//And then after this line whenever you call getTicket() it is from login
//and yes now conflict is over :)