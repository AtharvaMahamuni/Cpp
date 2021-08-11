#include <iostream>
using namespace std;

int main()
{
	int xCoo, yCoo;
	
	cin >> xCoo >> yCoo;

	if(xCoo > 0 && yCoo > 0)
		cout << "1st quadrant" << endl;
	else if(xCoo < 0 && yCoo > 0)
		cout << "2nd quadrant" << endl;
	else if(xCoo < 0 && yCoo < 0)
		cout << "3rd quadrant" << endl;
	else if(xCoo > 0 && yCoo < 0)
		cout << "4th quadrant" << endl;
	else
		cout << "On origin" << endl;

	return 0;
}
