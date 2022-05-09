#include <iostream>
using namespace std;

int main(){
    int *vetor = NULL; // ponteiro para um vetor
    int tam; // tamanho do vetor

    // Entrada tamanho do vetor
    cin >> tam;

    // Alocar memoria para o vetor
    vetor = new int[tam];

    // Preencher o vetor
    for(int i=0; i<tam; i++)
        cin >> vetor[i];

    // Mostrar o vetor
    for(int i=0; i<tam; i++)
        cout << vetor[i] << " ";

    // Liberar memoria alocada pelo vetor
    delete [] vetor;

    return 0;
}