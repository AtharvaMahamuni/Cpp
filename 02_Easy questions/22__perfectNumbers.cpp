#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int perfect = 0;
	
	for(int i = 1; i <= num/2; i++)
	{
		if(num%i == 0)
			perfect = perfect + i;
	}
	
	if(perfect == num)
		cout << "It is perfect no." << endl;
	else
		cout << "It is not a perfect no." << endl;

	return 0;
}
