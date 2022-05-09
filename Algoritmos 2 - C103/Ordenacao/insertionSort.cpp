#include <iostream>
using namespace std;

// Funcao organizar vetor descrescente
void insertionSort(int vetor[], int tamanho){
    int i,j; // contadores
    int chave;
    for (j=1;j<tamanho;j++){
        chave = vetor[j];
        i = j-1;
        while ((i >= 0) && (vetor[i] < chave)){
            vetor[i+1] = vetor[i];
            i = i-1;
        }
        vetor[i+1] = chave;
    }
}


int main(){

    int vetor[100];
    int tamanhoVetor=0;
    int aux; // variavel auxiliar de Entrada

    // Entrada (até valor 0)
        cin >> aux;
        while(aux!=0){
            vetor[tamanhoVetor]=aux;
            tamanhoVetor++;
            cin >> aux;
        }

    // Organizar descrescente
        insertionSort(vetor,tamanhoVetor);
    
    // Saida
        for(int i=0; i<tamanhoVetor; i++)
            cout << vetor[i] << " ";
        cout << endl;

    return 0;
}