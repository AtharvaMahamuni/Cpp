#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;

	if(((c>=65)&&(c<=90)) || ((c>=95)&&(c<=122))) 
		cout << "It is alphabet" << endl;
	else 
		cout << "It is not an alphabet" << endl;

	return 0;
}
