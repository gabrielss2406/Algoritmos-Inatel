#include <iostream>
using namespace std;

int main(){
	int i,j; //contadores
	int x; // var aux
	int cont;
	int n; // tamanho do problema
	
	cin >> n;
	
	for(i=0;i<n;i++){ // Parte 1 - T(n)=n
			x=i*2;
	
	for(j=0;j<n;j++) // Parte 2 - T(n)=1/2n²
		for(i=0;i<n;i++)
			x=i*2;
		
    for(j=0;j<n;j++){ // Parte 3 - T(n)=nlogn
		i=n;
		while(i>1){
			x=i*2;
			i/=2;
		}
	}
	
	cout << cont << endl;
	
	// O(n²)
	
	return 0;
}