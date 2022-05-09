#include <iostream>
using namespace std;

int somaMatriz(int x[][4]){
    int soma=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            soma += x[i][j];
        }
    }

    return soma;
}

int main() {
    
    int matriz[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "soma = " << somaMatriz(matriz) << endl;

    return 0;
}