#include <iostream>
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
	int num;
	cin >> num;
	
	for(int i = 1, j = num-1; i<=num/2 && j>=num/2; i++, j--)
	{
		if(checkPrime(i) && checkPrime(j))
			cout << "(" << i << ", " << j << ")" << endl;
	}

	return 0;
}
