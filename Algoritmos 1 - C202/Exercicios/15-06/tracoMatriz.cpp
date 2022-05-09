#include <iostream>
using namespace std;

int calcTraco(int x[][10], int d){
    int soma=0;
    for(int i=0; i<d; i++){
        soma += x[i][i];
    }
    return soma;
}

int main() {
    
    int matriz[10][10];
    int dim; // dimensao da matriz
    int traco;

    cin >> dim;
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            cin >> matriz[i][j];
        }
    }

    traco = calcTraco(matriz,dim);

    cout << "traco = " << traco << endl;

    return 0;
}