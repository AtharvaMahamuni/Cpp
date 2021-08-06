#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	
	int sum1 = 0, sum2 = 0;
	
	for(int i = 1; i <= num1/2; i++)
	{
		if(num1 % i == 0)
			sum1 = sum1 + i;
	}
	
	for(int i = 1; i <= num2/2; i++)
	{
		if(num2 % i == 0)
			sum2 = sum2 + i;
	}		
	
	if(sum1 == num2 && sum2 == num1)
		cout << "Number is a friendly pair" << endl;
	else
		cout << "Number is not a friendly pair" << endl;

	return 0;
}
