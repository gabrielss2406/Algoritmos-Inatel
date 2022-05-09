#include <iostream>
#include <iomanip>
using namespace std;

struct dado{
    int n1;
    int n2;
    int n3;
    int n4;
    float media;
};

int main(){
    dado *nota;
    int tam;
    float somaTurma=0;
    float mediaTurma;

    // Entrada tamanho
    cin >> tam;

    // Alocar memoria
    nota = new dado[tam];

    // Ler valores e calculo da media individual
    for(int i=0; i<tam; i++){
        cin >> nota[i].n1;
        cin >> nota[i].n2;
        cin >> nota[i].n3;
        cin >> nota[i].n4;
        nota[i].media = (float)(nota[i].n1+nota[i].n2+nota[i].n3+nota[i].n4)/4;
    }
    

    // Saida e calculo media turma
    cout << fixed << setprecision(2);
    for(int i=0; i<tam; i++){
        somaTurma += nota[i].media;
    }
    mediaTurma = somaTurma/tam;
    cout << mediaTurma << endl;

    // Liberar memoria
    delete [] nota;

    return 0;
}