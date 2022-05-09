#include <iostream>
#include <list>
using namespace std;

// Funcao de busca na lista
bool encontrar(list<int> lista, float x){
    bool exist = false;
    while(!exist && !lista.empty()){
        if(*lista.begin()==x)
            exist = true;
        lista.pop_front();
    }
        
    return exist;
}

int main(){
    list<int> lista; // ponteiro para a lista
    int x;
    int busca; // valor a ser buscado

    // Inserindo elementos na lista
    cin >> x;
    while(x!=0){
        lista.push_front(x);
        cin >> x;
    }

    // Realizando busca e mostrando resultado
    cin >> busca;
    if(encontrar(lista,busca))
        cout << "Encontrado" << endl;
    else
        cout << "Nao encontrado" << endl;

    return 0;
}