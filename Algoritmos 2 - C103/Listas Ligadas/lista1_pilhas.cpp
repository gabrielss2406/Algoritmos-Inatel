#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> pilha; // ponteiro para a pilha

    // Inserindo elementos na pilha
    pilha.push_front(2);  // insere no inicio
    pilha.push_front(1);
    pilha.push_front(5);
    // 5 - 1 - 2

    // Removendo e mostrando elementos da pilha
    while(!pilha.empty()){ // pilha.empty() - true==pilha vazia
        cout << *pilha.begin() << endl; // pilha.begin() aponta para o nó da lista
        pilha.pop_front(); // retira primeiro nó da lista
    }

    return 0;
}