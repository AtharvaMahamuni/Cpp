#include <iostream>
using namespace std;

// #define BOLD 3 //Preprocessor directive

//#1
// enum MsOffice
// {
//     BOLD,
//     ITALICS,
//     UNDERLINE,
//     COSSED
// };

//#2
enum MsOffice
{
    BOLD = 2,
    ITALICS,
    UNDERLINE,
    COSSED
};

int main()
{
    int myAttributes = UNDERLINE;
    cout << myAttributes << endl;
    //It will give output as 2 for 1st enum.
    //It will give output as 4 for 2nd enum.

    return 0;
}


//More about enums and preprocessors:
//For beginners:https://www.quora.com/what-is-the-difference-between-enum-and-define-in-c-language
//For others: https://docs.microsoft.com/en-us/cpp/cpp/enumerations-cpp?view=vs-2019
