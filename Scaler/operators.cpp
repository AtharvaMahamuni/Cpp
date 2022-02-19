#include <iostream>
using namespace std;

// int main()
// {
//     // bitwise NOT
//     cout << "~" << "10" << " is " << ~10 << endl;

//     // bitwise AND
//     cout << "4" << " & " << "5" << " is " << (4 & 5) << endl;

//     // bitwise OR
//     cout << "4" << " | " << "5" << " is " << (4 | 5) << endl;

//     // bitwise XOR
//     cout << "4" << " ^ " << "5" << " is " << (4 ^ 5) << endl;

//     // bitwise left shift
//     cout << "4" << " << " << "2" << " is " << (4 << 2) << endl;

//     // bitwise right shift
//     cout << "4" << " >> " << "2" << " is " << (4 >> 2) << endl;

//     return 0;
// }

// int main()
// {
//     // Logical NOT operator
//     cout << (!true) << endl;  // 0
//     cout << (!false) << endl; // 1

//     // Logical AND operator
//     cout << (false && false) << endl; // 0
//     cout << (false && true) << endl;  // 0
//     cout << (true && false) << endl;  // 0
//     cout << (true && true) << endl;   // 1

//     // Logical OR operator
//     cout << (false || false) << endl; // 0
//     cout << (false || true) << endl;  // 1
//     cout << (true || false) << endl;  // 1
//     cout << (true || true) << endl;   // 1

//     return 0;
// }

// int main()
// {
//     int a = 7;
//     int b = 3;

//     // Equal to
//     cout << a << " == " << b << " is " << (a == b) << endl;

//     // Not equal to
//     cout << a << " != " << b << " is " << (a != b) << endl;

//     // greater than
//     cout << a << " > " << b << " is " << (a > b) << endl;

//     // less than
//     cout << a << " < " << b << " is " << (a < b) << endl;

//     // greater than or equal to
//     cout << a << " >= " << b << " is " << (a >= b) << endl;

//     // less than or equal to
//     cout << a << " <= " << b << " is " << (a <= b) << endl;

//     return 0;
// }

// int main()
// {
//     int a = 5;
//     int b;

//     b = a;
//     cout << b << endl;

//     b += a;
//     cout << b << endl;

//     b -= a;
//     cout << b << endl;

//     b *= a;
//     cout << b << endl;

//     b /= a;
//     cout << b << endl;

//     b %= a;
//     cout << b << endl;

//     return 0;
// }

// int main()
// {
//     int num1 = 7;
//     int num2 = 3;

//     // Arithmetic Addition
//     cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

//     // Arithmetic Subtraction
//     cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

//     // Arithmetic Multiplication
//     cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

//     // Arithmetic Division
//     cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

//     // Arithmetic Modulus
//     cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

//     return 0;
// }

int main()
{
    int x;
    int a = 5;

    // post increament
    x = a++;
    cout << "value of x is " << x << ", value of a is " << a << endl;

    // pre increament
    x = ++a;
    cout << "value of x is " << x << ", value of a is " << a << endl;

    // post decrement
    x = a--;
    cout << "value of x is " << x << ", value of a is " << a << endl;

    // pre decrement
    x = --a;
    cout << "value of x is " << x << ", value of a is " << a << endl;

    return 0;
}