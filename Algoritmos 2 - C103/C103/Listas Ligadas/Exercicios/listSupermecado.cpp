#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> estoque; // ponteiro para o estoque
    list<int> venda; // ponteiro para o venda
    list<int>::iterator p; // iterator para varrer a lista
    int N; // Quantidade de operacoes
    int x; // aux entrada 1
    int y; // aux entrada 2

    // Inserindo elementos na lista
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> x;
        if(x==1){
            cin >> y;
            estoque.push_back(y);
        }else{
            venda.push_front(*estoque.begin());
            estoque.pop_front();
        }
    }

    // Saida
        // Estoque
        cout << "Estoque:";
        for(p=estoque.begin(); p!=estoque.end(); p++)
            cout << " " << *p;

        cout << endl;
        // Venda
        cout << "Venda:";
        for(p=venda.begin(); p!=venda.end(); p++)
            cout << " " << *p;

    return 0;
}