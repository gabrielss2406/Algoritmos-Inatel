#include <iostream>
#include <list>
using namespace std;

// Retorno a contagem de todos os nós das listas
int contar(list<int> lista){
    list<int>::iterator p;
    
    int cont = 0;
    for(p=lista.begin(); p!=lista.end(); p++)
        cont++;
    return cont;
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

    // Realizando contage e exibindo
    cout << contar(lista) << endl;

    return 0;
}