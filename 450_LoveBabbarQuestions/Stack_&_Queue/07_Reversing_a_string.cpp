#include <iostream>
#include <string.h>
using namespace std;

int top = -1;
string word;

string stack;

void push(char i)
{
}

char pop()
{
    char r;

    return r;
}

string reverse(string word)
{
    string revWord;

    for (char i = 0; i != '\0'; i++)
    {
        push(i);
    }

    return revWord;
}

int main()
{

    cout << "Enter the string: ";
    cin >> word;

    reverse(word);

    return 0;
}