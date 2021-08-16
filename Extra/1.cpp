#include <iostream>
using namespace std;

void frequencyOfNonVowels(string input)
{
    int len = (sizeof(input) / sizeof(input[0])) - 1;
    int vowels = 0;

    string tempString = "";

    for (int i = 0; i <= len; i++)
    {
        if (input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u')
        {
            char temp = input[i];

            for (int j = 0; j <= i; j++)
            {
                if (temp != tempString[j])
                {
                    continue;
                }
            }

            int count = 0;
            for (int j = 0; j <= len; j++)
            {
                if (temp == input[j])
                {
                    count++;
                }
            }
            cout << temp << " = " << count << " ";
            tempString = tempString + temp;
        }
        else
            vowels++;
    }
}

int main()
{

    frequencyOfNonVowels("atharva");
    cout << endl;

    return 0;
}