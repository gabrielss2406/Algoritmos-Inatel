#include <iostream>
using namespace std;

// Função que implementa a busca sequencial
// Se x for encontrado, retorna a posição do mesmo no vetor
// Se x não for encontrado, retorna -1
int sequencial(int vet[], int tam, int x){
    int posicao = -1;
    for(int i=0; i<tam; i++){
        if(vet[i]==x)
            posicao=i;
    }
    return posicao;
}

int main(){
    int vetor[100];
    int aux;
    int cont=0; // Quantidade de termos no vetor
    int x; // Pesquisa
    int posicao;

    // Ler dados no vetor até -1
        while(aux!=-1){
            cin >> aux;
            if(aux!=-1)
                vetor[cont]=aux;
            cont++;
        }
    // Ler x (pesquisa)
        cin >> x;
    // Procurar
        posicao = sequencial(vetor,cont,x);
    // Saida
        if(posicao==-1)
            cout << x << " nao encontrado" << endl;
        else
            cout << x << " encontrado na posicao " << posicao << endl;

    return 0;
}