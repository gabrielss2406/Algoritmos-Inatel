#include <iostream>
#include <cstring>
using namespace std;
 
struct Dados{
    char nome[100];
    int n1;
    int n2;
    int n3;
    int n4;
};

int strongest(Dados atletas[], int nAtletas){
    int somaNotas;
    int maiorSoma;
    int posicaoMaior=0;
    
    for(int i=0; i<nAtletas; i++){
        somaNotas = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
        if(i==0)
            maiorSoma = somaNotas;
        else if(somaNotas>maiorSoma){
            maiorSoma = somaNotas;
            posicaoMaior = i;
        }
    }

    return posicaoMaior;
}

int main(){
    int posicaoMaior; // Posicao do mais forte no vetor
    int nAtletas;
    cin >> nAtletas;
    Dados atletas[nAtletas];

    for(int i=0; i<nAtletas; i++){
        cin.ignore();
        cin.getline(atletas[i].nome,100);
        cin >> atletas[i].n1;
        cin >> atletas[i].n2;
        cin >> atletas[i].n3;
        cin >> atletas[i].n4;
    }

    posicaoMaior = strongest(atletas,nAtletas);

    cout << "Vencedor: " << atletas[posicaoMaior].nome << endl;

    return 0;
}