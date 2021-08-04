#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int n = num;
	int arm = 0;
	
	while(n != 0)
	{
		arm = arm + ((n%10)*(n%10)*(n%10));
		n = n / 10;
	}
	
	if(num == arm)
		cout << "It is armstrong number" << endl;
	else 
		cout << "It is not armstrong number" << endl;

	return 0;
}
