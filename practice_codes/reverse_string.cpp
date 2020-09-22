#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string s = "veryVeryVeryVeryveryverybigwordorstring";
    stack<char> temp;

    for (char i : s)
    {
        temp.push(i);
    }

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = temp.top();
        temp.pop();
    }
    cout << s << endl;

    return 0;
}