# Modifiers in c++

## Introduction

:::section{.abstract}
#Abstract
:::

The range of integer datatype is from -2,147,483,647 to 2,147,483,647. This range is because integer is of size 4 bytes in the memory.

There are some situations where we need to modify the inbuilt data-types like int by increasing the size to store big numbers which aren't fit in given range or by decreasing the size to save some memory in program.

There are some modifiers as follows in C++ which allows us to alter the meaning of base types like int, char, and double.

1. signed
2. unsigned
3. long
4. short

In this article we will explore how to use this modifiers to modify or alter the meaning of base data-types in C++ to write more effective and memory saving code.

## Type modifier with Integer data-type

Suppose we are working with an application in C++ and there is a requirement to store the value 21474836478 which is not in range of normal int then we will get the value as follows:

#### Sample Code 1
```
#include <iostream>
using namespace std;

int main()
{
    int number = 2147483648;
    cout << "Value in number: " << number << endl;
    return 0;
}
```
The Output is -
```
Value in number: -2147483648
```
Now because the value in number is out of range we got the negative value which is next in range of integer.  

To store the value which is out of range we need to modify regular int to long long int or unsigned int so that it can store that value.

#### Sample code 2
```
#include <iostream>
using namespace std;

int main()
{
    long long int number1 = 2147483648;
    cout << "Value in number1: " << number1 << endl;

    unsigned int number2 = 2147483648
    cout << "Value in number2: " << number2 << endl;

    return 0;
}
```
The output is -
```
Value in number1: 2147483648
Value in number2: 2147483648
```

Similarly if we want to store small values in range of -32,768 to 32,767 we can use short int instead of int to save 2 bytes of memory space.

Below is the table to show the storage size and range of different modifiers with the int data type -

|       Data Type        | Storage Size |              Range              |
|:----------------------:|:------------:|:-------------------------------:|
|       short int        |   2 bytes    |        -32,768 to 32,767         |
|   unsigned short int   |   2 bytes    |           0 to 65,536           |
|      unsigned int      |   4 bytes    |       0 to 4,294,967,295        |
|          int           |   4 bytes    | -2,147,483,648 to 2,147,483,647 |
|        long int        |   4 bytes    | -2,147,483,648 to 2,147,483,647 |
|   unsigned long int    |   4 bytes    |       0 to 4,294,967,295        |
|     long long int      |   8 bytes    |       -(2^63) to (2^63)-1       |
| unsigned long long int |   8 bytes    | 0 to 18,446,744,073,709,551,615 |


## Type Modifiers with char data-type

|   Data Type   | Storage Size |    Range    |
|:-------------:|:------------:|:-----------:|
|     char      |    1 byte    | -128 to 127 |
|  signed char  |    1 byte    | -128 to 127 |
| unsigned char |    1 byte    |  0 to 255   |


|  Data Type  | Storage Size |                   Range                    |
|:-----------:|:------------:|:------------------------------------------:|
|    float    |   4 bytes    |   1.2E-38 to 3.4E+38 (6 decimal places)    |
|   double    |   8 bytes    |  2.3E-308 to 1.7E+308 (15 decimal places)  |
| long double |   12 bytes   | 3.4E-4932 to 1.1E+4932 (19 decimal places) |