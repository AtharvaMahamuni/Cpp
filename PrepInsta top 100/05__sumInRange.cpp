#include <iostream>
using namespace std;

int main()
{
	int sum = 0, lower_limit, upper_limit;
	
	cin >> lower_limit; 
	cin >> upper_limit;
	
	for(int i = lower_limit; i <= upper_limit; i++)
		sum = sum + i;
		
	cout << sum << endl;

	return 0;
}
