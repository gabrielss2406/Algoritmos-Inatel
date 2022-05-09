#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);

    char nome[50];
    int matricula;
    float media;
    float nota1, nota2;

    int i=0;
    float mediaMenor=100;
    float mediaMaior=0;
    char nomeMaior[50];
    char nomeMenor[50];
    float mediaSoma = 0;

    while(true){
        cin.getline(nome,50);
        if(strcmp(nome,"SAIR")==0)
            break;

        cin >> matricula;
        
        cin >> nota1;
        cin >> nota2;

        media = (float) (nota1+nota2)/2;

        if(media>mediaMaior){
            mediaMaior = media;
            strcpy(nomeMaior,nome);
        }
        if(media<mediaMenor){
            mediaMenor = media;
            strcpy(nomeMenor,nome);
        }
        mediaSoma+=media;
        i++;

        cin.ignore();
        cout << "Aluno: " << nome << endl;
        cout << "Mat: " << matricula << endl;
        cout << "Media: " << media << endl;
    }
    if(i==0)
        cout << "Programa Finalizado" << endl;
    else{
        cout << "Media Geral: " << (mediaSoma/i) << endl;
        cout << "Maior media: " << mediaMaior << " - " << nomeMaior << endl;
        cout << "Menor media: " << mediaMenor << " - " << nomeMenor << endl;
    }

    return 0;
}