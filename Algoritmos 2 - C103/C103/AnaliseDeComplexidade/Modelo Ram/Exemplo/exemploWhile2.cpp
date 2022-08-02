#include <iostream>
using namespace std;

int main(){

    int n; // tamanho do problema
    int i=1; // contador
    int x; // var aux
    int cont=0; // # vezes que x=2*i é executado

    cin >> n;
    
    int j=0;

while (j < n)

{

    i = n;
    while (i > 1)   

    {

        cont ++;
        i /= 2;

    }

    j++;

}

    cout << cont << " vezes" << endl;

    return 0;
}