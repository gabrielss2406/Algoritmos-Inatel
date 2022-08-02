#include <iostream>
#include <iomanip>
using namespace std;

struct notas{
	int nota[4];
	float media;
};
int main(){
	notas *aluno = NULL;
	int soma=0; //soma das notas
	
	aluno = new notas;
	
	for(int i=0; i<4; i++){
		cin >> aluno->nota[i];
	}
	
	soma = aluno->nota[0]+aluno->nota[1]+aluno->nota[2]+aluno->nota[3];
	aluno->media = (float) soma/4;
	
	cout << fixed << setprecision(2);
	cout << aluno->media << endl;
	
	delete aluno;
		
	return 0;
}