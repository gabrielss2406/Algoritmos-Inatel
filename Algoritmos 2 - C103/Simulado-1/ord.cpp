#include <iostream>
#include <math.h>
using namespace std;

// Funcao QuickSort para organizar o vetor
void quickSort(int vetor[], int tamanho, int i, int j){
    int trab, esq, dir, pivo;
    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir) / 2.0)];
    do
    {
        while (vetor[esq] < pivo)
            esq++;
        while (vetor[dir] > pivo)
            dir--;
        if (esq <= dir)
        {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    }
    while (esq <= dir);
    if (dir - i >= 0)
        quickSort(vetor, tamanho, i, dir);
    if (j - esq >= 0)
        quickSort(vetor, tamanho, esq, j);
}

int main(){

    int vetor[20]; // vários numeros inteiros
    int aux; // auxiliar para inserção no vetor
    int cont; // contador de posiçoes do vetor

    // Entrada
    cin >> aux;
    while(aux != -1){
        vetor[cont]=aux;
        cont++;
        cin >> aux;
    }

    // Organização
    quickSort(vetor,cont,0,cont-1);

    // Saida
    for(int i=0; i<cont; i++)
        cout << vetor[i] << " ";

    cout << endl;
    return 0;
}