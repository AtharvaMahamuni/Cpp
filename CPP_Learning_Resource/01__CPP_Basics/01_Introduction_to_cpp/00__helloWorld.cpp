
//(1)
#include <cstdio> //It is one of the library which contains C standard input output functions
// using namespace std;
int main()
{
    puts("Turn on computer"); //puts is the function from cstdio
    puts("Open code editor");
    printf("Start writing code"); //from cstdio
    return 0;                     //return will tell to stop the program and return the zero to the OS.
} //Actuall return will denote the success in program.
//The reason behind returning 0(we can use other integer also) is that return type of main is int suppose if it char then may we can return 'a' or any other character & if it is void then we can't return anything.
//Take note that void and zero are two differnt things void means nothing and zero is more towards indicating a number understand the difference

//Let's write one more C++ program.
//May be some of you started to argue that the above program is not C++ but it is C
//Then I will explain you

// //{2}
// #include<iostream> //It is one of the library from C++ known as input output stream

// int main() {
//     std::cout << "Hello, World!\n";
//     //cout is an object of iostream class & << it is an insertion operator which is overloaded
//     return 0;
// }

/*  Actually most of the c is included in c++ and until your g++ compiler
can execute the code then it is C++*/
/* As I said C is not entirely included in C++ read this answer on stack overflow.
https://stackoverflow.com/questions/31505402/does-c-contain-the-entire-c-language
*/

/* More about cout vs puts/printf  - https://stackoverflow.com/questions/2872543/printf-vs-cout-in-c  */
