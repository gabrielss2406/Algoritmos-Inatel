#include <iostream>
using namespace std;

int main(){

    int *vetor = NULL;
    int tam;

    // Leitura tamanho
    cin >> tam;

    // Alocar memoria para o vetor
    vetor = new int[tam];

    // Leitura numeros
    for(int i=0; i<tam; i++)
        cin >> vetor[i];

    // Saida
    for(int i=0; i<tam; i++)
        cout << vetor[i] << " ";

    // Liberar memoria
    delete [] vetor;

    return 0;
}