#include <iostream>
using namespace std;

// calcule o fatorial em uma função Com Parâmetro e Sem Retorno.
void fatorial(int x, int &f){
    f=1;
    for(int i=x; i>1; i--){
        f = f*i;
    }
}

int main() {
    
    int x; // Valor x
    int resultado;

    cin >> x;

    fatorial(x,resultado);

    cout << resultado << endl;

    return 0;
}