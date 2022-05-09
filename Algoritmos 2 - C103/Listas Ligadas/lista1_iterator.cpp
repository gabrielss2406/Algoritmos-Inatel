#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> lista; // ponteiro para a lista
    list<int>::iterator p; // iterator para varrer a lista
    int x; // aux para leitura de dados para inserir na lista
    int soma; // soma dos elementos da lista

    // Inserindo elementos na lista
    cin >> x;
    while(x!=0){
        lista.push_front(x);
        cin >> x;
    }

    // Mostrando os elementos da lista
    for(p=lista.begin(); p!=lista.end(); p++)
        cout << *p  << endl;

    // Calculando e mostrando soa dos elementos da lista
    for(p=lista.begin(); p!=lista.end(); p++)
        soma += *p;
    cout << "SOMA: " << soma << endl;

    // Liberando memória
    while(!lista.empty()){
        lista.pop_front();
    }

    return 0;
}