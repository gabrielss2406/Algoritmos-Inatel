#include <iostream>
using namespace std;

int main(){

    int n; // tamanho do problema
    int j;
    int x; // var aux
    int cont=0; // # vezes que x=2*i é executado

    cin >> n;
    
    for(int i=0; i<n; i++){
        j=1;
        while(j<n){
            x = 2 * i;
            j=j*2;
            cont++;
        }
    }
        

    cout << cont << " vezes" << endl;

    return 0;
}