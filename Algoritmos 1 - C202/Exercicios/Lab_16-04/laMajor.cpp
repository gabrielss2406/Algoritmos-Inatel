#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int qntIdades;
        int idades; // valor nao estatico
        int maiorValor = 0;

        int contador = 0;

    // Entrada
        cin >> qntIdades;

    // Verificacao
        while(true){
            cin >> idades;

            if(idades>=0){
                if(maiorValor < idades)
                maiorValor = idades;
            
                contador++;
            }
            
            if(contador>=qntIdades)
                break;
        }

    // Saida
        cout << maiorValor << endl;

    return 0;
}