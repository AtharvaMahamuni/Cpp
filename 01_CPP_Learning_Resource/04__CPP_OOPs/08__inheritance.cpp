//Not completed.

#include <iostream>
#include <string>
using namespace std;

class Man
{
    string _name;
    int _age;
    Man(){};

protected:
    Man(const string &name, const int &age) : _name(name), _age(age) {}
}

main()
{

    return 0;
}

//Inheritance:
/*
    Base class/ parent class.

    with which we can make 
    
    derived class/ child class.



ACCESS Table:
            Base class  derived class   Others

Public       *           *               *

Protected    *           *

Private      * 

*/