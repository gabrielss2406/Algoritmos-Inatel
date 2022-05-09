#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int numero; // valor nao-estatico para numeros
        int somaNumeros; // soma dos valores (-1)

    // Entrada / Verificacao
        while(numero != -1){
            cin >> numero;
            if(numero != -1)
                somaNumeros += numero;
        }

    // Saida
        cout << somaNumeros << endl;

    return 0;
}