#include <iostream>
using namespace std;

int fact(int num)
{
	int retNum = 1;
	
	for(int i = num; i > 0; i--)
	{
		retNum = retNum*i;
	}
	
	return retNum;
}

int main()
{
	int n, r;
	cin >> n >> r;
	
	int ans; 
	
	//cout << fact(n) << endl;
	
	ans = fact(n)/fact(n-r);
	
	cout << ans << endl;

	return 0;
}
