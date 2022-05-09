#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
 
struct Dados
{
    char nome[50];
    int matricula;
    float nota;
};


int main() {
    int N; // N pessoas
    cin >> N;
    Dados aluno[N];

    int J; // J aluno
    float somaNotas=0;
    float notaMenor=100;
    char nomeMenor[50];
    float media;
    
    cin >> J;

    for(int i=0; i<N; i++){
        cin.ignore();
        cin.getline(aluno[i].nome, 50);
        cin >> aluno[i].matricula;
        cin >> aluno[i].nota;

        somaNotas+=aluno[i].nota;

        if(aluno[i].nota < notaMenor){
            strcpy(nomeMenor, aluno[i].nome);
            notaMenor = aluno[i].nota;
        }
    }
    media = somaNotas/N;

    cout << fixed << setprecision(2);
    cout << "Media: " << media << endl;
    cout << nomeMenor << endl;
    cout << aluno[J-1].nome << " " << aluno[J-1].matricula << " " << aluno[J-1].nota << endl;

    return 0;
}