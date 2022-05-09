#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    int nAlunos;
    cin >> nAlunos;
    cin.ignore();

    char nome[nAlunos][50];
    
    float nota1[nAlunos];
    float nota2[nAlunos];
    float nota3[nAlunos];
    float nota4[nAlunos];

    float somaNota[nAlunos] = {};
    float media[nAlunos];

    for(int i=0; i<nAlunos; i++){
        cin.getline(nome[i], 50);
        cin >> nota1[i];
        cin >> nota2[i];
        cin >> nota3[i];
        cin >> nota4[i];
        cin.ignore();

        somaNota[i] += nota1[i]+(nota2[i]*2)+(nota3[i]*3)+(nota4[i]*4);
    }

    for(int i=0; i<nAlunos; i++){
        media[i] = somaNota[i] / 10;
    }

    cout << fixed << setprecision(2);

    for(int i=0; i<nAlunos; i++){
        cout << nome[i] << ": " << media[i] << endl;
    }

    return 0;
}