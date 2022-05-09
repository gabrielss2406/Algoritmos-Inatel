#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> lista1; // ponteiro para o lista1
    list<int> lista2; // ponteiro para o lista2
    list<int> lista3; // ponteiro para o lista3
    list<int>::iterator p; // iterator para varrer a lista
    int x; // aux entrada

    // Inserindo elementos na lista
        // Lista1
        cin >> x;
        while(x!=0){
            lista1.push_back(x);
            cin >> x;
        }
        // Lista2
        cin >> x;
        while(x!=0){
            lista2.push_back(x);
            cin >> x;
        }

    // Criar lista 3
    while(!lista1.empty() || !lista2.empty()){ // Roda enquanto as duas listas nao estiverem vazias
        if((!lista1.empty() && *lista1.begin() < *lista2.begin()) || lista2.empty()){ // somente se a lista1 nao estiver vazia e o seu elemento for menor. Ou lista2 vazia
            lista3.push_back(*lista1.begin());
            lista1.pop_front();
        }else if(lista1.empty() || *lista2.begin() < *lista1.begin()){ // se a lista 1 tiver vazia ou elemento da dois for menor
            lista3.push_back(*lista2.begin());
            lista2.pop_front();
        }else{ // elementos iguais, discarta os dois
            lista3.push_back(*lista2.begin());
            lista1.pop_front();
            lista2.pop_front();
        }
    }

    // Saida
    for(p=lista3.begin(); p!=lista3.end(); p++)
        cout << *p << " ";

    return 0;
}