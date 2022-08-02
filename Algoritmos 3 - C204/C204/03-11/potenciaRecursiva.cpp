#include <iostream>
using namespace std;

float potencia(int a,int n){
	if(n==0)
		return 1;
	else if(n>0)
		return a*potencia(a,n-1);
	else
		return 1/(a*potencia(a,(n*-1)-1));
}

int main(){
	int a,n;
	
	cin >> a >> n;
	
	cout << potencia(a,n);
	
	return 0;
}