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
		decimalNo = decimalNo + ((num%10)*pow(8,i));
		num = num/10;
	}
	
	// cout << decimalNo << endl;
	int binNo = 0;
	for(int i = 1; decimalNo != 0; i = i * 10)
	{
		binNo = binNo + ((decimalNo%2)*i);
		decimalNo = decimalNo/2;
	}
	
	cout << binNo << endl;

	return 0;
}
