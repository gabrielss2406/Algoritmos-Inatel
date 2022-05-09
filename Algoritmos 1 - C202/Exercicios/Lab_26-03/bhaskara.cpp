#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        // Entrada
        float a,b,c; // Numeros
        // Calculo
        float delta;
        float raiz1,raiz2; // Raizes

    // Entrada
    cin >> a >> b >> c;

    // Calculo 1
    delta = (b*b) - (4*a*c);

    // Teste / Calculos 2 / Saida
    if(delta < 0 || a==0){
        cout << "Impossivel" << endl;
    }else{
        raiz1 = (-b + sqrt(delta)) / (2*a);
        raiz2 = (-b - sqrt(delta)) / (2*a);

        cout << fixed << setprecision(5);
        cout << "X1 = " << raiz1 << endl;
        cout << "X2 = " << raiz2 << endl;
    }

    return 0;
}