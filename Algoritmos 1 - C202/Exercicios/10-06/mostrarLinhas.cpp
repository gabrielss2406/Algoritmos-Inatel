#include <iostream>
using namespace std;
 
int main() {
    
    int matriz[10][10];
    int N,M; // linhas e colunas

    cin >> N >> M;


    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}