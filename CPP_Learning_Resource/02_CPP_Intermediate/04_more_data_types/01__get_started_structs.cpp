#include <iostream>
using namespace std;

//struct is keyword for structure
//It is like a blue print
struct User
{
    //It is impossible to initialize variablies in structure.
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main()
{
    User mickey = {001, "mickey", "mickey@cartoon.com", 2};
    User donald = {002, "donald", "donald@cartoon.com", 3};

    cout << mickey.email << endl;

    donald.course_count = 4; //We can vary value of course_count because it is not a constant.

    cout << "----------Changing email of donald----------" << endl;
    cout << donald.email << endl;
    donald.email = "donaldy@123.com";
    cout << donald.email << endl;
    //Here it is possible to change the email because we have not
    //fixed the value we just fixed the pointer variable
    cout << "----------Changing email of donald----------l" << endl;

    // donald.uId = 221; //Here we can't change uId it is constant.

    User *d = &donald;               //Here we have used pointer *d to store the refernce of donald.{*This concept is very important for linked lists.}
    cout << d->course_count << endl; //This is how we can access donald using d.

    return 0;
}

//Structures are every were when classes are not used.
//Refer structures here:
// https://www.geeksforgeeks.org/structures-in-cpp/