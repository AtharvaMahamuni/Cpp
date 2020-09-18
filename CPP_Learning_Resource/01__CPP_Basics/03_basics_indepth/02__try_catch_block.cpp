#include <iostream>
using namespace std;

int main()
{

    // int call_api = 1;
    //float call_api = 1.0;
    char call_api = 'a';

    try
    {
        cout << "Trying to use API value\n";
        cout << "Did some testing with api value\n";
        throw call_api;
        cout << "This line will never execute.";
    }
    // catch (int x)
    // {
    //     cout << "Integer exception handled" << endl;
    // }
    // catch (float y)
    // {
    //     cout << "Float exception handled" << endl;
    // }
    catch (...)
    {
        cout << "Oops!!!! error is occured." << endl;
    }

    cout << "Keep on moving with rest of code\n"
         << endl;

    return 0;
}
