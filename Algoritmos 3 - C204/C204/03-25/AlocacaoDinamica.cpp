#include <iostream>
using namespace std;

int main(){
	float *vetor=NULL;
	int N; //tamanho do vetor
	int i; //contador
	
	//lendo tamanho do vetor
	cin >> N;
	
	//alocando memoria para o vetor
	vetor = new float[N];
	
	//lendor e inserindo elementos no vetor
	for(i=0; i<N; i++){
		cin >> vetor[i];
	}
	
	//mostrando vetor
	for(i=0; i<N; i++)
		cout << vetor[i] << " ";
	
	delete [] vetor;
		
	return 0;
}