#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int bin;
	int newNum = 0;

	for (int i = 0; num != 0; i++)
	{
		bin = pow(2, i);

		newNum = newNum + (bin * (num % 10));
		num = num / 10;
	}

	cout << newNum << endl;

	return 0;
}
