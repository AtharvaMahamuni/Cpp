#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    //FIXME: 1 byte = 8 bits

    printf("Size of this data type is %ld bits\n", sizeof(int) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(long) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(long long int) * 8);

    printf("Size of this data type is %ld bits\n", sizeof(int64_t) * 8);
    printf("Size of this data type is %ld bits\n", sizeof(uint_fast64_t) * 8);

    puts("**********************");

    puts("Values of 22 in different forms: \n");
    //we can also store the values in different forms
    //such as decimal, binary and hexadecimal
    //this things come very handy sometimes in competitive programming
    int fun = 0x16; //22 in hexadecimal
    cout << "fun value is: " << fun << endl;

    fun = 0b00010110; //22 in binary
    cout << "fun value is: " << fun << endl;

    fun = 22; //22 in decimal
    cout << "fun value is: " << fun << endl;

    return 0;
}

//Integers:

/* for signed values*/
// short int
// int
// int long int
// long long int

/*for unsigned values*/
//unsigned short int
//unsigned int
//unsigned long int
//unsigned long long int
