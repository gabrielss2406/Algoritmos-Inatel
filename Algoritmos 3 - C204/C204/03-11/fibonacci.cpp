#include <iostream>
using namespace std;

int fibo(int n){
	if(n==0 || n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}

int main(){
	int a,n;
	
	cin >> n;
	
	cout << fibo(n);
	
	return 0;
}