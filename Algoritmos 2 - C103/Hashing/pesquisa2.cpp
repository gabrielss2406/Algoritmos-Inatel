#include <iostream>
using namespace std;

struct dado{
    int k; // chave
    int status; // 0-vazio, 1-ocupado
};

// Hash auxiliar (posicao do elemento)
int hash_aux(int k, int m){
    int pos = k%m;
    if(pos < 0)
        pos += m;

    return pos;
}

// Sondagem Linear
int hash1(int k, int i, int m){
    return (hash_aux(k,m)+i) % m;
}

// Insere chave na tabela
int hash_insert(dado t[], int m, int k){
    int i=0;
    int j;

    do{
        j = hash1(k,i,m);
        if(t[j].status != 1){
            t[j].k = k;
            t[j].status=1;
            return j;
        }else
            i++;
    }while(i!=m);

    return -1;
}

int main(){
    dado T[20]; //tabela hash


    return 0;
}