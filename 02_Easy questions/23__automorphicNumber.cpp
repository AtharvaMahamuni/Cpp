#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int n = num;
	int sq = num*num;
	float autoMor = sq%10;
	sq = sq/10;
	n = n/10;
	
	while(n != 0)
	{
		autoMor = autoMor + ((sq%10)*10);
		sq = sq/10;
		n = n/10;
	}
	
	//cout << autoMor << endl;
	
	if(autoMor == num)
		cout << "Number is auto morph" << endl;
	else
		cout << "Number is not auto morph" << endl;
	
	return 0;
}
