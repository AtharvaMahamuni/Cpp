#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int n = num;
	int strong = 0;
	
	while(n!=0)
	{
		int fact = 1;
		
		for(int i = n%10; i > 0; i--)
		{
			fact = fact*i;
		}
		
		strong = strong + fact;
		n = n/10;
	}
	
	if(num == strong)
	{
		cout << "It is strong number";
	}
	else
	{
		cout << "It is not a strong number";
	}
	cout << endl;

	return 0;
}
