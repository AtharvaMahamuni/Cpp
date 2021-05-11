#include <iostream>
using namespace std;

int main()
{
    int number; //More about int is written below
    printf("garbage number is %d\n", number);
    printf("address of number is %d\n", &number);
    cin >> number;
    printf("Your ID is %d", number + 4);
    return 0;
}

//int stands for integer and it allocate the 4 bytes of memory for variable in this case variable name is number
//cin take input it is from iostream and present in standard file as we saw for cout
//whatever numver we enter from command line it is going to be sotred in the variable number from the memory
//printf is also present in iostream and if you think it is still in c you need to refer previous programs again.
