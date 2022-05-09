#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int numeros; // Valor não estativo para os numeros inseridos
        int qntNumeros; // Quantidade de numeros a serem inseridos

        int maiorNumero; // Maior numero inserido
        int menorNumero; // Menor numero inserido

    // Entrada
        cin >> qntNumeros; // Leitura qntNumeros

    // Verificacao
        for(int i=1 ; i<=qntNumeros ; i++){
            cin >> numeros; // Leitura de cada numero

            if(i==1){ // Caso especial
                menorNumero = numeros;
                maiorNumero = numeros;
            }

            if(numeros>maiorNumero){ // Comparação maior
                maiorNumero = numeros;
            }
            if(numeros<menorNumero){ // Comparação menor
                menorNumero = numeros;
            }
        }

    // Saida
        cout << "Maior: " << maiorNumero << endl;
        cout << "Menor: " << menorNumero << endl;

    return 0;
}