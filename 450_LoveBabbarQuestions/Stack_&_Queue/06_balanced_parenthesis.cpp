#include <iostream>
using namespace std;

string stack;
int top = -1;

void push(char p)
{
    top++;
    stack[top] = p;
}

char pop()
{
    char c;

    c = stack[top];
    top--;

    return c;
}

char flip(char p)
{
    if (p == '(')
    {
        return ')';
    }
    else if (p == '[')
    {
        return ']';
    }
    else
    {
        return '}';
    }
}

bool checkParanthesis(string pattern)
{
    bool isIt = true;

    for (int i = 0; (pattern[i] == '(' || pattern[i] == '[' || pattern[i] == '{'); i++)
    {
        // cout << pattern[i] << endl;
        push(pattern[i]);
    }
    // cout << pattern << endl;

    //TODO: Write a code to pop and compare the paranthesis

    for (int i = (pattern.length() / 2); i < pattern.length(); i++)
    {
        // cout << flip(pop());
        if (pattern[i] != flip(pop()))
        {
            isIt = false;
            break;
        }
    }

    return isIt;
}

int main()
{
    string pattern;

    cout << "Enter the pattern of Paranthesis: ";
    cin >> pattern;

    if (checkParanthesis(pattern))
    {
        cout << "It is Balanced" << endl;
    }
    else
    {
        cout << "It is Unbalanced" << endl;
    }

    return 0;
}