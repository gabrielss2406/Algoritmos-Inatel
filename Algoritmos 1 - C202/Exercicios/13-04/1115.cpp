#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int valor1 = 1,valor2 = 1; // 2 valores inteiros

    // Entrada / Verificacao / Saida
        while(valor1 != 0 && valor2 != 0){
            cin >> valor1 >> valor2;

            if(valor1 > 0 && valor2 > 0){
                cout << "primeiro" << endl;
            } else if (valor1 < 0 && valor2 > 0){
                cout << "segundo" << endl;
            } else if (valor1 < 0 && valor2 < 0){
                cout << "terceiro" << endl;
            } else if (valor1 > 0 && valor2 < 0){
                cout << "quarto" << endl;
            } else{
                break;
            }
        }

    return 0;
}