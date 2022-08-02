#include <iostream>
using namespace std;

int main(){
	int vetor[3];
	int *p=NULL;
	
	p = vetor;
	vetor[0] = 4;
	vetor[1] = -2;
	vetor[2] = 7;
	
	cout << *vetor << "\n" << endl;
	cout << *p << endl;
	p++;
	cout << *p << endl;
	p++;
	cout << *p << endl;
	p++;
	cout << *p << endl;
	p-=3;
	cout << *p << endl;
	
	return 0;
}