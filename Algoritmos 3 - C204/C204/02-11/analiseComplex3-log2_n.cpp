#include <iostream>
using namespace std;

int main(){
	int i,j; //contadores
	int x; // var aux
	int cont;
	int n; // tamanho do problema
	
	cin >> n;
	
	cont=0;
	i=1;
	
	while(i<n){
		x=i*2;
		i*=2;
		cont++;
	}
	
	cout << cont << endl;
	
	return 0;
}