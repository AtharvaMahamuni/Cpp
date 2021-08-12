#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int digit;
	cin >> digit;
	
	int i = 0;
	while(num!=0)
	{
		if(digit == num%10)
			i++;
		num = num/10;
	}
	
	cout << i << endl;

	return 0;
}
