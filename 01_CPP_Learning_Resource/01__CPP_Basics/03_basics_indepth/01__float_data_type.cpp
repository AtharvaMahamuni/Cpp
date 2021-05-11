#include <iostream>
using namespace std;

int main()
{
    cout << "-------Sizes---------" << endl;

    printf("Float size is %ld bits\n", sizeof(float) * 8);
    printf("Double size is %ld bits\n", sizeof(double) * 8);
    printf("Long double size is %ld bits\n", sizeof(long double) * 8);

    cout << "--------DEMO----------" << endl;
    float my_p_value = 20.2 + 20.2;
    printf("My P value is: %f in float\n", my_p_value);
    printf("My P value is: %.2f in float\n", my_p_value);

    if (my_p_value == 40.400002)
    {
        puts("Right!!!!");
    }
    else
    {
        puts("No it's wrong");
    }

    long double value = 20.2;
    printf("the value of value is: %f\n", value);
    //It is giving some unexpected results.

    return 0;
}

//Float datatypes
//It gives more precision over data
//FIXME:  20 and 20.0 are different for computer.
//Take caution while using float.

//Types of float data types
//1.float
//2.double
//3.long double

//TODO: Refer this resource:
//https://www.geeksforgeeks.org/precision-of-floating-point-numbers-in-c-floor-ceil-trunc-round-and-setprecision/
//http://www.cplusplus.com/reference/iomanip/setprecision/
//https://www.tutorialspoint.com/cpp_standard_library/cpp_setprecisiond.htm