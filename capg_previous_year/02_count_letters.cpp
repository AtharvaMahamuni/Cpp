#include <iostream>
using namespace std;

int main()
{

    string given_string;
    cin >> given_string;

    char letter_to_count = given_string[0];
    int count_of_letter = 0;

    for (int i = 0; i < given_string.length();)
    {
        while (given_string[i] == letter_to_count)
        {
            count_of_letter++;
            i++;
        }
        cout << letter_to_count;
        if (count_of_letter > 1)
            cout << count_of_letter;
        letter_to_count = given_string[i];
        count_of_letter = 0;
    }

    return 0;
}