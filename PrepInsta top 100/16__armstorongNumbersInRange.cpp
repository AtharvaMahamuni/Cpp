#include <iostream>
using namespace std;

bool armstrong(int n)
{
	int arm = 0;
	int num = n;
	
	while(n != 0)
	{
		arm = arm + (n%10)*(n%10)*(n%10);
		n = n/10;
	}
	
	if(arm == num)
		return true;
	return false;
}


int main()
{
	int lower_bound, upper_bound;
	cin >> lower_bound >> upper_bound;
	
	for(int i = lower_bound; i <= upper_bound; i++)
	{
		bool a = armstrong(i);
		if(a)
			cout << i << " ";	
	}
	
	cout << endl;

	return 0;
}
