#include <iostream>
using namespace std;

int main()
{
    unsigned int x = 6;
    unsigned int y = 7;

    unsigned int z = x & y;
    cout << "Value of z is: " << z << endl;

    z = x | y;
    cout << "Value of z is: " << z << endl;

    z = y << 1;
    cout << "Value of z is: " << z << endl;

    z = x >> 2;
    cout << "Value of z is: " << z << endl;

    return 0;
}

//To convert binary into deciaml or vice versa you can use:
//https://www.convertbinary.com/

//This is the good resource for doing calculations for
//bitwise operator: http://easyonlineconverter.com/converters/bitwise-calculator.html

//To learn more about bitwise refer this: https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/

//TODO: Bitwise operators are very handy for competitive programming and here are the resources which will
//help you out:
//1. https://www.geeksforgeeks.org/bitwise-hacks-for-competitive-programming/
//2. https://www.geeksforgeeks.org/bit-tricks-competitive-programming/
//3. https://www.topcoder.com/community/competitive-programming/tutorials/a-bit-of-fun-fun-with-bits/
//4. https://codeforces.com/blog/entry/73490