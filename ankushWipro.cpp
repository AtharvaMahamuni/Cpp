#include <iostream>
using namespace std;

int main()
{

    string input = "";

    cin >> input;
    int array[input.length()];

    for (int i = 0; i < input.length(); i++)
    {
        array[i] = int(input[i]);
    }

    int min = input[0];
    int max = input[0];

    for (int i = 0; i < input.length(); i++)
    {
        if (array[i] < min)
        {
            min = input[i];
        }
        if (array[i] > max)
        {
            max = input[i];
        }
    }

    cout << min + max;

    return 0;
}

// bool prime(int num)
// {
//     if (num == 1)
//         return false;
//     for (int i = 2; i <= (num / 2 + 1); i++)
//     {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     int leftBound, rightBound;

//     cin >> leftBound >> rightBound;

//     int sum = 0;

//     for (int i = leftBound; i < rightBound; i++)
//     {
//         if (prime(i))
//             sum += i;
//     }

//     cout << sum;

//     return 0;
// }

