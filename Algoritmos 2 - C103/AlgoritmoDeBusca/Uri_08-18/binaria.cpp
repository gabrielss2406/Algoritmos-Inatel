#include <iostream>
using namespace std;

// Funcao busca binaria
int binaria(int vetor[],int tamanho, int x){
    bool achou = false;
    int baixo,meio,alto;
    baixo=0;
    alto=tamanho-1;

    while(baixo<=alto && achou==false){
        meio = (alto+baixo)/2;
        if(x<vetor[meio])
            alto = meio-1;
        else if(x>vetor[meio])
            baixo = meio+1;
        else
            achou = true;
    }

    return achou;
}

int main(){
    int vetor[20];
    int aux;
    int cont=0; // Quantidade de termos no vetor
    int id; // Pesquisa
    bool acesso;

    // Entrada (fim -1)
        while(aux!=-1){
            cin >> aux;
            if(aux!=-1)
                vetor[cont]=aux;
            cont++;
        }
    
    // ID de pesquisa
        cin >> id;
    // Busca
        acesso = binaria(vetor,cont,id);
    // Saida
        if(acesso)
            cout << "Possui acesso" << endl;
        else
            cout << "Nao possui acesso" << endl;

    return 0;
}