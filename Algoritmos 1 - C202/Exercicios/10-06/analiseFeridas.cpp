#include <iostream>
using namespace std;
 
int main() {
    
    int matriz[100][100];
    int qntFeridas=0;
    int N,M; // Linhas e colunas
    int dimensaoPx; // dimensão de uma face do pixel, em mm
    int area;

    cin >> N >> M >> dimensaoPx;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> matriz[i][j];
            if(matriz[i][j]==1)
                qntFeridas++;
        }
    }

    area = dimensaoPx * dimensaoPx * qntFeridas;

    cout << "AREA = " << area << " mm^2" << endl;

    return 0;
}