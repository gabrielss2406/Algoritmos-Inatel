#include <iostream>
using namespace std;
 
int main() {
    
    int matriz[2][2];
    int determinante;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "M:" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "M transposta:" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }

    determinante = (matriz[0][0]*matriz[1][1]) - (matriz[1][0]*matriz[0][1]);
    cout << "Determinante: " << determinante << endl;

    return 0;
}