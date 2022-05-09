#include <iostream>
using namespace std;
 
int main() {
    
    // Variaveis
        // Tamanho do vetor
            int N;
            cin >> N;
        int valores[N]; // Vetor
        int posicaoMenor, posicaoMaior;
        int menorValor,maiorValor;

    // Entrada
        for(int i=0; i<N; i++){
            cin >> valores[i];

            if(i==0){
                posicaoMenor = i;
                posicaoMaior = i;
                menorValor = valores[i];
                maiorValor = valores[i];
            }
            else{
                if(valores[i]<menorValor){
                    menorValor = valores[i];
                    posicaoMenor = i;
                }else if(valores[i]>maiorValor){
                    maiorValor = valores[i];
                    posicaoMaior = i;
                }
            }
        }

    // Saida
        cout << "Pos Menor: " << posicaoMenor << endl;
        cout << "Valor Menor: " << menorValor << endl;
        cout << "Pos Maior: " << posicaoMaior << endl;
        cout << "Valor Maior: " << maiorValor << endl;

    return 0;
}