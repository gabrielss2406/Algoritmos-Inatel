#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    // Variaveis
        float nota; // Variavel de valor dinamico para as notas
        float soma; // Variavel para a soma das notas

        float media; // Variavel para o calculo das medias

    // Entrada / Verificacao
        for(int i = 1 ; i <=10 ; i++){
            cin >> nota;
            soma += nota;
        }

    // Calculo
        media = (float) soma/10;

    // Saida
        cout << fixed << setprecision(2);
        cout << media;

    return 0;
}