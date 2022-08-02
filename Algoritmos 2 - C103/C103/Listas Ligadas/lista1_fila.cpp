#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> fila; // ponteiro para a fila
    int x;

    // Inserindo elementos na fila
    for(int i=0; i<4; i++){
        cin >> x;
        fila.push_back(x);
    }

    // Removendo e mostrando elementos da fila
    while(!fila.empty()){ // fila.empty() - true==fila vazia
        cout << *fila.begin() << endl; // fila.begin() aponta para o nó da lista
        fila.pop_front(); // retira primeiro nó da lista
    }

    return 0;
}