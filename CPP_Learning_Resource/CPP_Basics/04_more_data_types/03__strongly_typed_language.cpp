#include <iostream>
#include <string>
using namespace std;

string api_call()
{
    return "got some data from web\n";
}

int another_api_call()
{
    return 5;
}

int main()
{
    auto response = api_call();           //We use auto when we don't know which data type is going to come.
    auto response_2 = another_api_call(); //We use auto when we don't know which data type is going to come.

    cout << "API CALL VALUE: " << response;
    cout << "ANOTHER API CALL VALUE: " << response_2 << endl;

    if (typeid(response) == typeid(string))
    {
        puts("Type of both ID matches");
    }

    if (typeid(response_2) == typeid(int))
    {
        puts("Type of both ID matches");
    }

    // response = another_api_call();

    return 0;
}

//FIXME:
//When it is very tricky to understand what type of data is coming with call we can
//use auto. Auto will give us that exact datatype which is required.
//But it it not recommended to use it when you already know what type of data is coming
//It is also not sure that it will always work.