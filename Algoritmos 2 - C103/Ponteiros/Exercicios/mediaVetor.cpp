#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int *vetor = NULL; // ponteiro para um vetor
    int tam; // tamanho do vetor
    int somaVetor=0; // Soma dos elementos do vetor
    float media; // Media dos elementos do vetor

    // Entrada tamanho do vetor
    cin >> tam;

    // Alocar memoria para o vetor
    vetor = new int[tam];

    // Preencher o vetor
    for(int i=0; i<tam; i++)
        cin >> vetor[i];

    // Descobrir maior valor do vetor
    for(int i=0; i<tam; i++)
        somaVetor+=vetor[i];
    media = (float) somaVetor/tam;

    // Saida
    cout << fixed << setprecision(2);
    cout << media << endl;

    // Liberar memoria alocada pelo vetor
    delete [] vetor;

    return 0;
}