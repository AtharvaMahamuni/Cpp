#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int n = num;
	int rev = n % 10;
	n = n / 10;
	
	while(n != 0)
	{
		rev = (rev * 10) + (n % 10);
		n = n / 10;
	}

	if(num == rev)
		cout << "Palindrome" << endl;
	else
		cout << "Not a Palindrome" << endl;

	return 0;
}
