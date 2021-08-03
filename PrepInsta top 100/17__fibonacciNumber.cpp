#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int fib1 = 0, fib2 = 1, temp;
	
	for(int i = 1; i <= num; i++)
	{
		cout << fib1 << " ";
		temp = fib2;
		fib2 = fib1 + fib2;
		fib1 = temp;
	}
	
	cout << endl;

	return 0;
}
