#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct Padawan
{
    char nome[50];
    int pontos;
};


int main() {

    int soma=0;
    int maiorPontos=0;
    char nomeMaisPontos[50];
    float media;

    int qntPadawans;
    cin >> qntPadawans;

    Padawan padawan[qntPadawans];

    for(int i=0; i<qntPadawans; i++){
        cin.ignore();
        cin.getline(padawan[i].nome,50);
        cin >> padawan[i].pontos;

        soma+=padawan[i].pontos;

        if(padawan[i].pontos > maiorPontos){
            maiorPontos = padawan[i].pontos;
            strcpy(nomeMaisPontos,padawan[i].nome);
        }
    }

    media = (float) soma/qntPadawans;

    cout << "Padawan com mais pontos: " << nomeMaisPontos << endl;
    cout << "Pontos: " << maiorPontos << endl;
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << " pontos" << endl;

    return 0;
}