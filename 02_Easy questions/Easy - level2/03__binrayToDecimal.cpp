#include <iostream>
using namespace std;

int main()
{

	int num;
	cin >> num;

	int bin = 1;
	int newNum = 0;

	while (num != 0)
	{
		newNum = newNum + (bin * (num % 10));
		bin = bin * 2;
		num = num / 10;
	}

	cout << newNum << endl;

	return 0;
}
