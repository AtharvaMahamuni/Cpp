#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int n = num;
	int sum = 0;
	
	while(n != 0)
	{
		sum = sum + n%10;
		n = n/10;
	}
	
	if(num%sum == 0)
		cout << "Number is Harshad number" << endl;
	else
		cout << "Number is not Harshad number" << endl;

	return 0;
}
