#include <iostream>
using namespace std;

struct dado{
    int codigo;
    float preco;
};

int main(){
    dado *produto; // ponteiro para a struct
    int tam;

    cin >> tam;

    // Alocar memória
    produto = new dado[tam];

    // Inserir valores
    for(int i=0; i<tam; i++){
        cin >> produto[i].codigo; // produto->preco;
        cin >> produto[i].preco;  // produto->preco;
    }

    // Mostrar valores
    for(int i=0; i<tam; i++){
        cout << "Codigo: " << produto[i].codigo << endl;
        cout << "Preco: " << produto[i].preco << endl;
    }

    // Liberar memoria
    delete [] produto;

    return 0;
}