#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int qntAnos; // Quantidade de anos
        int anos; // Valor não estatico dos anos

    // Entrada
        cin >> qntAnos;

    // Verificacao / Saida
        for(int i = 0 ; i < qntAnos ; i++){
            cin >> anos;
            if(anos%4 == 0 && (ano%100 != 0 || ano%400 == 0))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

    return 0;
}