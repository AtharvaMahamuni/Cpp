#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	
	cin >> n;

	
	while(n != 0)
	{
		int r = n % 10;
		sum = sum + r;
		n = n / 10;
	}
	
	cout << sum << endl;

	return 0;
}
