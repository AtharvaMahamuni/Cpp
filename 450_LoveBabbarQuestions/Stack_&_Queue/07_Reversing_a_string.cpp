#include <iostream>
#include <string.h>
using namespace std;

int top = -1;
// string word;

string stack;

void push(char c)
{
    top++;
    stack[top] = c;
}

char pop()
{
    char r;

    r = stack[top];
    top--;

    return r;
}

string reverse(string word)
{

    for (int i = 0; word[i] != '\0'; i++)
    {
        push(word[i]);
        // cout << word[i] << '\n';
    }

    // cout << stack[5];

    int k = top;
    for (int i = 0; i <= k; i++)
    {
        word[i] = pop();
        // cout << word[i] << '\n';
    }
    return word;
}

int main()
{

    string word;

    cout << "Enter the string: ";
    cin >> word;

    word = reverse(word);

    cout << "Reversed word: " << word;

    return 0;
}