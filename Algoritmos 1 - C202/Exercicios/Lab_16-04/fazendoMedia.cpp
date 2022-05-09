#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int numero; // Valor não estatico dos numeros
        int somaNumeros = 0; // Soma dos valores
        int qntNumeros = 0; // Quantidade de valores inseridos

        float media; // media dos valores

    // Entrada / Verificacao
        while(numero >= 0){
            cin >> numero;
            if(numero >= 0){
                somaNumeros += numero;
                qntNumeros++;
            }
        }

    // Calculo
        media = (float) somaNumeros / qntNumeros;

    // Saida
        cout << fixed << setprecision(2);
        cout << media << endl;

    return 0;
}