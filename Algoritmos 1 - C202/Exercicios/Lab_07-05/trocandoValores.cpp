#include <iostream>
using namespace std;
 
int main() {
    
    // Variaveis
        // Tamanho do vetor
            int N;
            cin >> N;
        int valores[N]; // Vetor
        int negativos=0; // Quantidade de negativos
    
    // Entrada
        for(int i=0; i<N; i++){
            cin >> valores[i];

            if(valores[i]<0){
                valores[i] = 0;
                negativos++;
            }
        }

    // Saida
        for(int i=0; i<N; i++){
            cout << valores[i] << " ";
        }
        cout << "\n" << negativos << endl;

    return 0;
}