#include <iostream>
#include <iomanip>
using namespace std;
 
// A função para o cálculo desta média deve CONTER RETORNO e parâmetros (por referência)
int media(float x,float y,float &m){
    m = (x+y)/2;
    return 0;
}

int main() {
    
    float N1,N2; // Valores N1 e N2
    float resultado;

    cin >> N1 >> N2;

    media(N1,N2,resultado);

    cout << fixed << setprecision(1);
    cout << resultado << endl;

    return 0;
}