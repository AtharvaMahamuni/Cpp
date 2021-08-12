#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int n = num;
	
	for(int i = 1; n != 0; i = i*10)
	{
		if(n%10 == 0)
			num = num+i;
		n = n/10;
	}
	
	cout << num << endl;
	
	return 0;
}
