#include <iostream>
using namespace std;
 
int main() {
    
    char matriz[10][10];
    int N,M; // linhas e colunas

    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cout << matriz[j][i];
        }
    }

    return 0;
}