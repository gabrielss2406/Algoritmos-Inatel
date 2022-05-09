#include <iostream>
using namespace std;

int main(){
    int *vetor = NULL; // ponteiro para um vetor
    int tam; // tamanho do vetor
    int contPares=0; // Contador de pares do vetor

    // Entrada tamanho do vetor
    cin >> tam;

    // Alocar memoria para o vetor
    vetor = new int[tam];

    // Preencher o vetor
    for(int i=0; i<tam; i++)
        cin >> vetor[i];

    // Contar pares do vetor
    for(int i=0; i<tam; i++){
        if(vetor[i]%2 == 0 && vetor[i]>0)
            contPares++;
    }
    cout << contPares << endl;

    // Liberar memoria alocada pelo vetor
    delete [] vetor;

    return 0;
}