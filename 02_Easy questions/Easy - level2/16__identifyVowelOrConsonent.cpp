#include <iostream>
using namespace std;

int main()
{
	char input;
	cin >> input;
	
	if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u')
		cout << "Vowel" << endl;
	else
		cout << "Consonent" << endl;

	return 0;
}
