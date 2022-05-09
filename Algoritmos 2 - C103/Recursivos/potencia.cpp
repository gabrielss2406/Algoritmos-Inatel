#include <iostream>
using namespace std;

// Função calculo de potencia
// a^n = (a*a) n vezes
int potencia(int a, int n){
    if(n==0)
        return 1;
    else
        return a*potencia(a, n-1);
}



int main(){

    int a; // base
    int n; // expoente

    // entrada
    cin >> a >> n;
    // saida
    cout << potencia(a,n) << endl;

    return 0;
}