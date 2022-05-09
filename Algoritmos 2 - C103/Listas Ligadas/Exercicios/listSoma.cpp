#include <iostream>
#include <list>
using namespace std;

// Retorno a soma de todos os nós das listas
int soma(list<int> lista){
    list<int>::iterator p;
    
    int soma = 0;
    for(p=lista.begin(); p!=lista.end(); p++)
        soma += *p;
    return soma;
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

    // Realizando soma e exibindo
    cout << soma(lista) << endl;

    return 0;
}