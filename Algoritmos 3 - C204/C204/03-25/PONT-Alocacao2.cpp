#include <iostream>
#include <iomanip>
using namespace std;

struct notas{
	int nota[4];
	float media;
};
int main(){
	notas *aluno = NULL;
	int N; //quantidade de alunos
	int soma=0; //auxiliar para calcular media - soma das notas
	float mediaMedia=0; //media das medias
	
	//entrada qnt de alunos
	cin >> N;
	
	aluno = new notas[N]; //alocacao
	
	//entrada de dados
	for(int i=0; i<N; i++){
		cin >> aluno[i].nota[0];
		cin >> aluno[i].nota[1];
		cin >> aluno[i].nota[2];
		cin >> aluno[i].nota[3];
	}
	
	//calculo da soma e media
	for(int i=0; i<N; i++){
		soma = aluno[i].nota[0]+aluno[i].nota[1]+aluno[i].nota[2]+aluno[i].nota[3];
		aluno[i].media = (float) soma/4;
	}
	
	//calcula media das medias
	for(int i=0; i<N; i++){
		mediaMedia += aluno[i].media;
	}
	mediaMedia/=N;
	
	//saida media das medias
	cout << fixed << setprecision(2);
	cout << mediaMedia << endl;
	
	delete [] aluno;
		
	return 0;
}