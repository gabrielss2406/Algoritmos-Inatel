#include <iostream>
#include <iomanip>
using namespace std;
 
float media(int notas[], int nAlunos){
    int soma=0;
    float media;
    for(int i=0; i<nAlunos; i++){
        soma+=notas[i];
    }
    media = (float) soma/nAlunos;
    return media;
}

int main() {
    int nAlunos;
    cin >> nAlunos;
    int notas[nAlunos];

    for(int i=0; i<nAlunos; i++){
        cin >> notas[i];
    }

    cout << fixed << setprecision(2);
    cout << "Media da turma = " << media(notas,nAlunos) << endl;;

    return 0;
}