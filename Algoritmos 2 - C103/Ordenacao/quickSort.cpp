#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct dados{
    int codigo; // codigo do produto
    int quantidade; // quantidade em estoque
    float preco; // preco unitario
};

// Funcao QuickSort para ordenação
void quickSort(dados vetor[], int i, int j){
    int esq,dir,pivo;
    dados trab;
    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir)/2.0)].codigo;
    do{
        while (vetor[esq].codigo < pivo)
            esq++;
        while (vetor[dir].codigo > pivo)
            dir--;

        if (esq <= dir){
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;

            esq++;
            dir--;
        }
    } while (esq <= dir);
    if (dir-i >= 0)
        quickSort(vetor,i,dir);
    if (j-esq >= 0)
        quickSort(vetor,esq,j);
}

int main(){

    int N; // Nº produtos
    dados produto[100]; // Dados dos produtos

    // Ler N e N linhas com dados do produto
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> produto[i].codigo;
        cin >> produto[i].quantidade;
        cin >> produto[i].preco;
    }

    // Ordeno pelo código do produto
    quickSort(produto,0,N-1);

    // Saida em ordem
    cout << fixed << setprecision(2);
    for(int i=0; i<N; i++){
        cout << "Codigo: " << produto[i].codigo << endl;
        cout << "Quantidade em estoque: " << produto[i].quantidade << endl;
        cout << "Preco unitario: R$ " << produto[i].preco << endl;
        cout << endl;
    }

    return 0;
}