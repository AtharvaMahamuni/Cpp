#include <iostream>

struct User
{
    const int id;
    int age;

    User() : id(001), age(22) {} //default constructor.
};

int main()
{
    using namespace std; //we can use it inside main as well.

    //FIXME:This is STACK Part:
    //stack

    int score = 100;
    // User mike = {21,10};  //here we will not get any error because we are initializing values directly.
    User mike; //It will generate error if default constructor is not present in the structure.

    //FIXME:This is HEAP Part:
    //heap

    int *heap_score = new int;
    *heap_score = 200;

    User *nike = new User();

    delete heap_score;
    delete nike;

    return 0;
}

//Stack and Heap memory:
//They both are the part of memory and there working and fundamentals are same.
//Just the starting initialization of memory is different.

//STACK:
//Stack has predefined memory.
//It allocate the memory for variables and functions.
//Stack is the most fast memory in C++ and mostly used as well.

//HEAP:
//Heap is predefined memory but it can grow according to need.