#include <iostream>
using namespace std;
 
int main() {

    // Variaveis
        int matriz[100][100];
        int N; // Linhas matriz
        int M; // Colunas matriz
        int C; // Coluna desejada

    // Entrada
        cin >> N;
        cin >> M;

        for(int i=0; i<N; i++){ // seguem-se N linhas
            for(int j=0; j<M; j++){ // cada uma com M inteiros
                cin >> matriz[i][j];
            }
        }

        cin >> C;

    // Saida
        for(int i=0; i<N; i++){
            cout << matriz[i][C] << endl;;
        }

    return 0;
}