#include <iostream>
using namespace std;
 
int main() {
    
    int ordem; // Ordem da matriz
    cin >> ordem;

    int matriz[10][10];

    for(int i=0; i<ordem; i++){
        for(int j=0; j<ordem; j++){
            if(i==j){
                matriz[i][j] = 1;
            }
                
            else{
                matriz[i][j] = 0;
            }
                
        }
    }

    for(int i=0; i<ordem; i++){
        for(int j=0; j<ordem; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}