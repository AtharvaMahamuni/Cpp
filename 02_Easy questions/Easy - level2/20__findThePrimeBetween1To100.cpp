#include<iostream>
using namespace std;

bool checkPrime(int num)
{
	for(int i = 2; i <= num/2; i++)
	{
		if(num%i == 0)
			return false;
	}
	return true;
}


int main()
{
	for(int i = 2; i <= 100; i++)
		if(checkPrime(i))
			cout << i << " ";
	cout << endl;

	return 0;
}
