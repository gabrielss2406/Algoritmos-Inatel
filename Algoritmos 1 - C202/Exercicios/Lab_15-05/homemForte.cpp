#include <iostream>
#include <cstring>
using namespace std;
 
struct Dados
{
    char nome[100];
    int nota1,nota2,nota3,nota4;
};


int main() {
    Dados atleta[100];
    char nomeMaior[100];
    int N; // N atletas
    int somaMaior=0;
    int soma; // Variavel auxiliar
    
    cin >> N;
    for(int i=0; i<N; i++){
        cin.ignore();
        cin.getline(atleta[i].nome, 100);
        cin >> atleta[i].nota1 >> atleta[i].nota2 >> atleta[i].nota3 >> atleta[i].nota4;

        soma = atleta[i].nota1 + atleta[i].nota2 + atleta[i].nota3 + atleta[i].nota4;
    
        if(soma > somaMaior){
            somaMaior = soma;
            strcpy(nomeMaior, atleta[i].nome);
        }
    }

    cout << "Vencedor: " << nomeMaior << endl;

    return 0;
}