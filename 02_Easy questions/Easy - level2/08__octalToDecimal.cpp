#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int decimalNo = 0;
	
	for(int i = 0; num != 0; i++)
	{
		decimalNo = decimalNo + ((num%10)*pow(8, i));
		num = num/10;
	}
	
	cout << decimalNo << endl;

	return 0;
}
