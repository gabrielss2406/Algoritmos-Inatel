#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        int numero; // variavel auxiliar para a entrada
        int soma=0;
        int qntNumeros=0; // quantidade de entradas
        float media=0;
    
    // Entrada
        while(true){
            cin >> numero;

            if(numero==0)
                break;

            soma+=numero;
            qntNumeros++;
        }

    // Calculo
        if(qntNumeros!=0)
            media = (float)soma / qntNumeros;

    // Saida
        cout << fixed << setprecision(2);
        cout << "Media = " << media << endl;

    return 0;
}