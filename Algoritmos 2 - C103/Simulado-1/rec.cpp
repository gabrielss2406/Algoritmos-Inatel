#include <iostream>
using namespace std;

// número de grupos distintos com k pessoas que podem ser formados a partir de n pessoas
int Comb(int n, int k){
    if(k==1)
        return n;
    else if(k==n)
        return 1;
    else
        return Comb(n-1,k-1)+Comb(n-1,k);
}

int main(){

    int n; // n pessoas
    int k; // k pessoas
    int combinacao; // retorno da funcao comb

    // Entrada dois inteiros
    cin >> n >> k;

    // Calculo comb
    combinacao = Comb(n,k);

    // Saida
    cout << combinacao << endl;

    return 0;
}