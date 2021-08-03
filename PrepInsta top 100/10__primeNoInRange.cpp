#include <iostream>
using namespace std;

int main()
{
	int lower_bound, upper_bound;
	
	cin >> lower_bound >> upper_bound;
	
	for(int i = lower_bound; i <= upper_bound; i++)
	{
		int n = 1;
		
		for(int j = 2; j <= i/2; j++)
		{
			if(i%j == 0)
			{	
				n = 0;			
				break;
			}
		}
		
		if(n != 0 && i != 1)
			cout << i << " ";
	}
	cout << endl;

	return 0;
}
