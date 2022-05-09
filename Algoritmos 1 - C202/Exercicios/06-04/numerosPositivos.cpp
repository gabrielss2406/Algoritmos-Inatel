#include <iostream>
 
using namespace std;
 
int main() {
 
    float valores[6]; // 6 valores, [0] a [5]
    int positivos = 0;
    int i; //contador for
    
    cin >> valores[0] >> valores[1] >> valores[2] >> valores[3] >> valores[4] >> valores[5];
    
    for(i=0;i<=5;i++){
        if(valores[i] > 0){
            positivos += 1;
        }
    }
    
    cout << positivos << " valores positivos" << endl;
 
    return 0;
}