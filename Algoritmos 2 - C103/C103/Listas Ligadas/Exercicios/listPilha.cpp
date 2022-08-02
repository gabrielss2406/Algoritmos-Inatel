#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> pilha; // ponteiro para a pilha
    int x; // aux para entrada

    // Inserindo elementos na lista
    for(int i=0; i<4; i++){
        cin >> x;
        pilha.push_front(x);
    }

    // Removendo e mostrando elementos da pilha
    while(!pilha.empty()){ // pilha.empty() - true==pilha vazia
        cout << *pilha.begin() << " "; // pilha.begin() aponta para o nó da lista
        pilha.pop_front(); // retira primeiro nó da lista
    }

    return 0;
}