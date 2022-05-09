#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    // Variaveis
        int N;
        float soma = 0;
        float contadorN = 0;

    // Entrada
        cin >> N;
        
    // Verificacao
        while(contadorN < N){
            soma += 1 / (contadorN+1);
            contadorN++;
        }

    // Saida
        cout << fixed << setprecision(4);
        cout << soma;

    return 0;
}