#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int i = 0;
	
	while(num!= 0)
	{
		num = num / 10;
		i++;
	}
	
	cout << i << endl;

	return 0;
}
