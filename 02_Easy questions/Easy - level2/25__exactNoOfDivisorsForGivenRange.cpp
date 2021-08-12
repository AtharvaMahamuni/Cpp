#include <iostream>
using namespace std;

int countOfDivisors(int num)
{
	int count = 1;
	
	for(int i = 1; i <= num/2; i++)
	{
		if(num%i==0)
			count++;
	}
	return count;
}

int main()
{
	int num, divisorsCount;
	
	cout << "Enter the range: ";
	cin >> num;
	
	cout << "Enter the no. of Divisors: ";
	cin >> divisorsCount;
	
	int count1 = 0;
	
	for(int i = 1; i <= num; i++)
	{
		if(divisorsCount == countOfDivisors(i))
		{
			cout << i << " ";
			count1++;
		}
	}
	
	cout << endl;
	cout << count1 << endl;

	return 0;
}
