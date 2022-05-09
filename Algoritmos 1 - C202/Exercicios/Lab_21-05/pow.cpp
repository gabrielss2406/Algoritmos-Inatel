#include <iostream>
using namespace std;
 
// Calculo pow(base,expoente)
int elevado(int x,int y){
    int resultado;
    
    if(y==0)
        resultado = 1;
    else
        resultado = x;
    
    for(int i=2; i<=y; i++){ // y=1 -> sem calculo, começa em y -> 2
        resultado = resultado*x;
    }
    return resultado;
}

int main() {
    
    int x,y; // Valores
    cin >> x >> y;

    cout << elevado(x,y) << endl;

    return 0;
}