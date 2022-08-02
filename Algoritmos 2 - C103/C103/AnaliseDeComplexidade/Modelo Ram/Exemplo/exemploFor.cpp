#include <iostream>
using namespace std;

int main(){

    int n; // tamanho do problema
    int i; // contador
    int x; // var aux
    int cont=0; // # vezes que x=2*i é executado

    cin >> n;
    
    for(int i=0; i<2*n; i++){
        cont++;
        x = 2 * i;
    }

    cout << cont << " vezes" << endl;

    return 0;
}