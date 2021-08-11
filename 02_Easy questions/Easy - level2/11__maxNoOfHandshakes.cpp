#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int ans = 0;
	
	/*for(int i = 1; i != num; i++)
	{
		ans = ans + (num - i);
	}*/
	
	// quick formula
	
	ans = (num*(num-1))/2;

	cout << ans << endl;

	return 0;
}
