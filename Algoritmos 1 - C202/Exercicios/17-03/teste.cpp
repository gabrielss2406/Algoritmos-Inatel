#include <iostream>
using namespace std;

int main()
{
	float x,y,soma,subt,mult,divi;
	cin >> x >> y;
	
	soma = x+y;
	subt = x-y;
	mult = x*y;
	divi = x/y;
	 
	cout << x << " + " << y << " = " << soma << endl;
	cout << x << " - " << y << " = " << subt << endl;
	cout << x << " x " << y << " = " << mult << endl;
	cout << x << " / " << y << " = " << divi << endl;
	
	return 0;
}