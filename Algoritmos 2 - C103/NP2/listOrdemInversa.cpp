#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> lista; // ponteiro para a lista
    list<int>::iterator p; // iterator para varrer a lista
    int x; // var aux para inserir valores na lista

    // Inserindo elementos na lista
    cin >> x;
    while(x!=0){
        lista.push_front(x);
        cin >> x;
    }

    // Mostrando elementos da lista
    for(p=lista.begin(); p!=lista.end(); p++)
        cout << *p  << " ";

    return 0;
}