#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    // Variaveis
        int valores; // Variavel de valor dinamico para os 10 valores

        int positivos = 0; // Quantidade de valores positivos
        int soma = 0; // Soma dos valores

        float media; // Media dos valores

    // Entrada / Verificacao
        for(int i = 1 ; i<=10 ; i++){
            cin >> valores;

            soma += valores;

            if(valores>0){
                positivos += 1;
            }
        }
    

    // Calculo
        media = 1.0*soma/10;

    // Saida
        cout << "Positivos = " << positivos << endl;
        
        cout << fixed << setprecision(2);
        cout << "Media = " << media << endl;

    return 0;
}