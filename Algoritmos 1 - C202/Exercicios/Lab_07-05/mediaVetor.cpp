#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        // Tamanho N do vetor
            int N;
            cin >> N;
        int valores[N]; // Vetor
        int soma=0;
        float media;
    
    // Entrada
        for(int i=0; i<N; i++){
            cin >> valores[i];
            soma += valores[i];
        }

    // Calculo
        media = (float)soma/N;

    // Saida
        cout << fixed << setprecision(2);
        cout << "Media: " << media << endl;

        cout << "Maiores que a media: ";
        for(int i=0; i<N; i++){
            if(valores[i]>media)
                cout << valores[i] << " ";
        }

    return 0;
}