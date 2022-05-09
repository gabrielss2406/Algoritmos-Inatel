#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        // Tamanho N do vetor
            int N;
            cin >> N;
        int valores[N]; // Vetor
        int X; // Valor inteiro X
        int qntX=0; // Vezes que o número X foi digitado
        float porcentagem; // Porcentual de qntX

    // Entrada
        for(int i=0; i<N; i++){
            cin >> valores[i];
        }
        cin >> X;

    // Verificacao
        for(int i=0; i<N; i++){
            if(valores[i]==X)
                qntX++;
        }

    // Calculo
        porcentagem = (float) (100*qntX)/N;

    // Saida
        cout << fixed << setprecision(2);
        cout << porcentagem << endl;

    return 0;
}