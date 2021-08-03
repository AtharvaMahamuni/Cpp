#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	for(int i = 2; i <= n/2; i++)
	{
		if(n%i == 0)
		{
			cout << "Number is not prime" << endl;
			n = 0;
			break;
		}
	}

	if(n != 0 && n != 1)
		cout << "Number is prime" << endl;
		

	return 0;
}
