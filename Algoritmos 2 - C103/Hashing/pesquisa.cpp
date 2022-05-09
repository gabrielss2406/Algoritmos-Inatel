#include <iostream>
using namespace std;

// struct para armazenamento dos dados
struct dado{
    int k; // chave
    int status; // 0 - vazio, 1 - ocupado
};

// Posicao na sondagem linear
int hash_aux(int k, int m){
    int hash = k%m;
    if(hash < 0) // correcao
        hash += m;

    return hash;
}

// Sondagem linear
int hash1(int k, int i, int m){
    return (hash_aux(k,m)+i) % m;
}

// Funcao de inserção das chaves
int hash_insert(dado t[], int m, int k){
    int i=0;
    int posicao;
    do{
        posicao = hash1(k,i,m); // Sondagem Linear
        if(t[posicao].status != 1){
            t[posicao].k = k;
            t[posicao].status = 1;
            return posicao;
        }else{
            i++;
        }
    } while (i!=m);

    return -1;
}

// Funcao de busca dentro da tabela
int hash_search(dado t[], int m, int k){
    int i=0;
    int j;
    do{
        j = hash1(k,i,m);
        if(t[j].k == k)
         return j;
        i++;
    } while (t[j].status!=0 and i<m);
    return -1;
}

int main(){

    int m; //tamanho tabela
    dado dados[20];
    int chave; //valores a serem inseridos
    int busca; //valor a ser buscado
    int posicaoBusca; //posicao da busca

    // Entrada tamanho tabela
    cin >> m;

    // Inicializar a tabela
    for(int i=0;i<m;i++){
        dados[i].k = -1;
        dados[i].status = 0;
    }

    // Entrada chaves
    cin >> chave;
    while(chave!=0){
        hash_insert(dados,m,chave);
        cin >> chave;
    }
    cin >> busca;

    // Busca
    posicaoBusca = hash_search(dados,m,busca);

    // Saida da tabela
    if(posicaoBusca==-1)
        cout << "Chave " << busca << " nao encontrada" << endl;
    else
        cout << "Chave " << busca << " encontrada na posicao " << posicaoBusca << endl;

    return 0;
}