#include <iostream>
using namespace std;

// h(k) = k mod m
int hash_aux(int k, int m){
    int hash = k%m;
    if(hash < 0) // correcao
        hash += m;

    return hash;
}

// Sondagem linear
int hash1(int k, int i, int m){
    int pos; // posicao da sondagem linear
    
    pos = hash_aux(k,m)+i; // Calculo da posicao
    if(pos >= m) // correcao
        pos -= m;

    return pos;
}

int main(){

    int k,m;

    // Leitura k,m
    cin >> k >> m;

    // Saida das posicoes da sondagem linear
    cout << hash1(k,0,m);
    for(int i=1; i<m; i++){
        cout << " " << hash1(k,i,m);
    }
    cout << endl;

    return 0;
}