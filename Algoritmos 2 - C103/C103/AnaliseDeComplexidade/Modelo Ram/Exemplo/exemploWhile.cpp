#include <iostream>
using namespace std;

int main(){

    int n; // tamanho do problema
    int i=0; // contador
    int x; // var aux
    int cont=0; // # vezes que x=2*i é executado

    cin >> n;
    
    while(i<n){
        x = 2 * i;
        i++;
        cont++;
    }

    cout << cont << " vezes" << endl;

    return 0;
}