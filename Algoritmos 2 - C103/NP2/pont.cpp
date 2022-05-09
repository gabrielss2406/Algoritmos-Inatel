#include <iostream>
using namespace std;

int main(){
    char *vetorGab = NULL; // ponteiro para o vetor do gabarito
    char *vetorAlu = NULL; // ponteiro para o vetor das respostas do aluno
    int tam; // tamanho dos vetores
    int acerto=0; // contador de acertos na comparação gabarito-aluno
    char *p; // ponteiro do vetorGab
    char *q; // ponteiro do vetorAlu

    // Alocar memoria para o vetor
    tam = 10;
    vetorGab = new char[tam];
    vetorAlu = new char[tam];

    // Preencher o vetor
    for(int i=0; i<tam; i++)
        cin >> vetorGab[i];
    for(int i=0; i<tam; i++)
        cin >> vetorAlu[i];

    // Contar os acertos varrendo os vetores com ponteiros
    p = &vetorGab[0];
    q = &vetorAlu[0];

    for(int i=0; i<tam; i++){
        if(*p==*q)
            acerto++;
        q++;
        p++;
    }

    // Saida quantidade de acertos
    cout << acerto << " acertos" << endl;

    // Liberar memoria alocada pelo vetor
    delete [] vetorGab;
    delete [] vetorAlu;

    return 0;
}