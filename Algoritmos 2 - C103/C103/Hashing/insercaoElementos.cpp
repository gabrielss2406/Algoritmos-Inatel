#include <iostream>
using namespace std;

// struct para armazenamento dos dados
struct dado{
    int k; // chave
    int status; // 0 - vazio, 1 - ocupado
};

// Posicao na sondagem linear
int hash_aux(int k, int i, int m){
    int hash = k%m + i;
    if(hash < 0) // correcao
        hash += m;

    return hash;
}

// Funcao de inserção das chaves
int hash_insert(dado t[], int m, int k){
    int i=0;
    int posicao;
    do{
        posicao = hash_aux(k,i,m); // Sondagem Linear
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

int main(){    
    dado dados[100];
    int mm; // tamanho da tabela
    int chave; // valores de chave a serem inseridos

    // Leitura mm
    cin >> mm;

    // Definicao dos valores no struct
    for(int i=0; i<mm; i++){
        dados[i].k = -1;
    }

    // Leitura chaves
    cin >> chave;
    while(chave!=0){
        hash_insert(dados,mm,chave);
        cin >> chave;
    }

    // Saida da tabela
    cout << dados[0].k;
    for(int i=1; i<mm; i++){
        cout << " " << dados[i].k;
    }
    cout << endl;

    return 0;
}