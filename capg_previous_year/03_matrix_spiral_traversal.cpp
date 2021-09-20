#include <iostream>
using namespace std;

int main()
{

    int horizontal, vertical;
    cin >> horizontal >> vertical;

    int matrix[horizontal][vertical];

    for (int i = 0; i < vertical; i++)
    {
        for (int j = 0; j < horizontal; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // for (int i = 0; i < vertical; i++)
    // {
    //     for (int j = 0; j < horizontal; j++)
    //     {
    //         cout << matrix[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    int high_horizontal = horizontal - 1;
    int low_horizontal = 0;

    int high_vertical = vertical - 1;
    int low_vertical = 0;

    while (high_horizontal > low_horizontal && high_vertical > low_vertical)
    {
        for (int i = low_horizontal; i <= high_horizontal; i++)
        {
            cout << matrix[low_vertical][i] << " ";
        }
        low_vertical += 1;

        for (int i = low_vertical; i <= high_vertical; i++)
        {
            cout << matrix[i][high_horizontal] << " ";
        }
        high_horizontal -= 1;

        for (int i = high_horizontal; i >= low_horizontal; i--)
        {
            cout << matrix[high_vertical][i] << " ";
        }
        high_vertical -= 1;

        for (int i = high_vertical; i >= low_vertical; i--)
        {
            cout << matrix[i][low_horizontal] << " ";
        }
        low_horizontal += 1;
    }

    return 0;
}