#include <iostream>
using namespace std;

int main(){
    int i,N,j;
    int cont;
    cin >> N;

    // Parte 2
    cout << "Parte 22" << endl;
    for(i=0;i<10*N;i++)
    {
        j= 1;
        while(j<10*N)
        {
            cout << j << endl;
            cont++;
            j = j*2;
        }
    }
    // Parte 3
    cont = 0;
    cout << "Parte 3" << endl;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            cont++;

    cout << cont << endl;
    return 0;
}