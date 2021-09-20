#include <iostream>
using namespace std;

int main()
{

    string given_string;
    cin >> given_string;

    char letter_to_move;
    cin >> letter_to_move;

    int read_stream, write_stream;
    read_stream = write_stream = given_string.length() - 1;

    while (read_stream >= 0)
    {
        if (given_string[read_stream] == letter_to_move)
            read_stream--;
        else
        {
            given_string[write_stream] = given_string[read_stream];
            write_stream--;
            read_stream--;
        }
    }

    while (write_stream >= 0)
    {
        given_string[write_stream] = letter_to_move;
        write_stream--;
    }

    cout << given_string;

    return 0;
}