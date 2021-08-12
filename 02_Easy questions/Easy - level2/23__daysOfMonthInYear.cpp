#include <iostream>
using namespace std;

int main()
{
	int month, year;
	cout << "Month: ";
	cin >> month;
	
	cout << "Year: ";
	cin >> year;
	
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		cout << 31 << " Days" << endl;
		
	else if(month == 2 && (((year%4==0)&&(year%100!=0)) || (year%400==0)))
		cout << 29 << endl;
	else if(month == 2)
		cout << 28 << endl;
	else 
		cout << 30 << endl;
	
	return 0;
}
