#include<iostream>
using namespace std;

int main()
{
	int n;
	
	// Enter no.
	cin >> n;
	
	// check for even
	if(n%2 == 0)
		cout << "E" << endl;
	// if not even then odd
	else
		cout << "O" << endl;

	return 0;
}
