#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float raiz(float x,float x0, float e){
	if(abs((x0*x0)-x) <= e)
		return x0;
	else
		return raiz(x, (x0*x0 + x)/(2*x0), e);
}

int main(){
	float x,x0,e;
	
	cin >> x >> x0 >> e;
	
	cout << fixed << setprecision(4);
	cout << raiz(x,x0,e);
	
	return 0;
}