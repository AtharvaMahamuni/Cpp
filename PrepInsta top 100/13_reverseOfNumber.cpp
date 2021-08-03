#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int rev = n%10; 
	n = n / 10;
	
	while(n != 0)
	{
		rev = (rev * 10) + (n % 10);
		n = n / 10;
	}
	
	cout << rev << endl;

	return 0;
}
