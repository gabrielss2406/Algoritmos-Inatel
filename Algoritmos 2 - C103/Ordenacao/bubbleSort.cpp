#include <iostream>
using namespace std;

// Funcao ordenar vetor
void bubbleSort(int vetor[], int tamanho){
    int i,j; // contadores
    int trab;
    bool troca;
    int limite;
    troca = true;
    limite = tamanho-1;
    while (troca){
        troca = false;
        for (i=0;i<limite;i++)
            if (vetor[i] > vetor[i+1]){
                trab = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = trab;
                j = i;
                troca = true;
            }
        limite = j;
    }
}

int main(){

    int vetor[100];
    int tamanhoVetor=0;
    int aux; // variavel auxiliar de Entrada

    // Entrada (até valor 0) / Medir vetor
        cin >> aux;
        while(aux!=0){
            vetor[tamanhoVetor]=aux;
            tamanhoVetor++;
            cin >> aux;
        }

    // Organizar vetor
        bubbleSort(vetor,tamanhoVetor);
    
    // Saida
        for(int i=0; i<tamanhoVetor; i++)
            cout << vetor[i] << " ";
        cout << endl;
    return 0;
}