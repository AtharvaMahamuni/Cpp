#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int bin;
	int newNum = 0, decimalNo = 0;

	for (int i = 0; num != 0; i++)
	{
		bin = pow(2, i);

		decimalNo = decimalNo + (bin * (num % 10));
		num = num / 10;
	}

	for (int i = 1; decimalNo != 0; i = i * 10)
	{
		newNum = (decimalNo % 8) * i + newNum;
		decimalNo = decimalNo / 8;
	}

	cout << newNum << endl;

	return 0;
}
