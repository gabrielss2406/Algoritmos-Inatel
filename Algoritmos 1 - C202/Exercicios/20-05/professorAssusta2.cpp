#include <iostream>
#include <iomanip>
using namespace std;
 
float media(int notas[], int nAlunos){
    int soma=0;
    float media;

    for(int i=0; i<nAlunos; i++)
        soma+=notas[i];
        
    media = (float) soma/nAlunos;
    return media;
}

int nAbaixo(int notas[], int nAlunos, float media){
    int qntAbaixo=0;
    for(int i=0; i<nAlunos; i++){
        if(notas[i]<media)
            qntAbaixo++;
    }

    return qntAbaixo;
}

int nAcima(int notas[], int nAlunos, float media){
    int qntAcima=0;
    for(int i=0; i<nAlunos; i++){
        if(notas[i]>=media)
            qntAcima++;
    }

    return qntAcima;
}

int main() {
    int nAlunos;
    cin >> nAlunos;
    int notas[nAlunos];
    float mediaNotas;

    for(int i=0; i<nAlunos; i++){
        cin >> notas[i];
    }

    mediaNotas = media(notas,nAlunos);

    cout << fixed << setprecision(2);
    cout << "Media da turma = " << mediaNotas << endl;
    cout << "Alunos com nota abaixo da media: " << nAbaixo(notas,nAlunos,mediaNotas) << endl;
    cout << "Alunos com nota acima da media: " << nAcima(notas,nAlunos,mediaNotas) << endl;

    return 0;
}