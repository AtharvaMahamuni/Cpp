#include<iostream>
using namespace std;

int findGCD(int num1, int num2)
{
	if(num1 == 0)
		return num2;
	else if(num2 == 0)
		return num1;
	else if(num1 >= num2)
		return findGCD(num1 - num2, num2);
	else
		return findGCD(num1, num2 - num1);
	
}


int main()
{

	int num1, num2;
	
	cin >> num1 >> num2;
	
	cout << findGCD(num1, num2) << endl;


	return 0;
}
