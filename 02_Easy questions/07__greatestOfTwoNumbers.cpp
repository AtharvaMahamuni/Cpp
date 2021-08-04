#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	
	cin >> num1 >> num2;
	
	if(num1 > num2)
		cout << num1 << ">" << num2;
	else if(num1 < num2)
		cout << num1 << "<" << num2;
	else
		cout << num1 << "=" << num2;
	cout << endl;

	return 0;
}
