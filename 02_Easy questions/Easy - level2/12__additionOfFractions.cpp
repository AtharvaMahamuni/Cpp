#include <iostream>
using namespace std;

int HCF(int num1, int num2)
{
	if(num1 == 0)
		return num2;
	else if(num2 == 0)
		return num1;
	else if(num1 >= num2)
		return HCF(num1 - num2, num2);
	else
		return HCF(num2, num2 - num1);
}


int main()
{
	int num1, num2, deno1, deno2;
	int numerator, denominator;
	
	cin >> num1 >> deno1 >> num2 >> deno2;
	
	//cout << (deno1*deno2)/HCF(deno1, deno2) << endl;
	
	denominator = (deno1*deno2)/HCF(deno1, deno2);
	
	int mul1, mul2;
	
	mul1 = denominator/deno1;
	num1 = num1*mul1;
	
	mul2 = denominator/deno2;
	num2 = num2*mul2;
	
	
	numerator = num1+num2;
	
	int div;
	div = HCF(numerator, denominator);
	
	cout << "Addition is: " << numerator/div << "/" << denominator/div << endl;
	
	return 0;
}
