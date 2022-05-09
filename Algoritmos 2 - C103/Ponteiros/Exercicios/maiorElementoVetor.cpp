#include <iostream>
using namespace std;

int main(){
    int *vetor = NULL; // ponteiro para um vetor
    int tam; // tamanho do vetor
    int maiorElemento=0; // Contador de pares do vetor

    // Entrada tamanho do vetor
    cin >> tam;

    // Alocar memoria para o vetor
    vetor = new int[tam];

    // Preencher o vetor
    for(int i=0; i<tam; i++)
        cin >> vetor[i];

    // Descobrir maior valor do vetor
    if(tam>0)
        maiorElemento = vetor[0];
    for(int i=1; i<tam; i++){
        if(vetor[i]>maiorElemento)
            maiorElemento=vetor[i];
    }
    cout << maiorElemento << endl;

    // Liberar memoria alocada pelo vetor
    delete [] vetor;

    return 0;
}