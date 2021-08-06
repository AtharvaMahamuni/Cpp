#include <iostream>
using namespace std;

int findGCD(int first, int second)
{
	if(second == 0)
		return first;
	return findGCD(second, first%second);
}

int main()
{
	int num1, num2;
	
	cin >> num1 >> num2;
	
	//cout << findGCD(num1, num2) << endl;
	cout << (num1*num2) / findGCD(num1, num2) << endl;

	return 0;
}
