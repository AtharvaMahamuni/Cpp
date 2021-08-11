#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int newNum = 0;
	
	for(int i = 1; num != 0; i = i*10)
	{
		newNum = newNum + ((num%2)*i);
		num = num/2;
	}
	
	cout << newNum << endl;
	
	return 0;
}
