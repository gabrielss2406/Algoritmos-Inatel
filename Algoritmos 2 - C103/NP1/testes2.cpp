#include <iostream>
using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
    int i, j; // contadores
    int chave;
    for (j = 1; j < tamanho; j++)
    {
        chave = vetor[j];
        cout << "chave = " << chave << endl;
        i = j - 1;
        while ((i >= 0) && (vetor[i] > chave))
        {
            vetor[i + 1] = vetor[i];
            i = i - 1;
        }
        vetor[i + 1] = chave;
    }
}

int main(){
    int vetor[10];
    int tamanho=10;

    vetor[0]=2;
    vetor[1]=3;
    vetor[2]=5;
    vetor[3]=7;
    vetor[4]=6;
    vetor[5]=0;
    vetor[6]=1;
    vetor[7]=4;
    vetor[8]=8;
    vetor[9]=9;

    insercaoDireta(vetor,tamanho);

    return 0;
}