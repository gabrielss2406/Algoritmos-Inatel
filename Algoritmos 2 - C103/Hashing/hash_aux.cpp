#include <iostream>
using namespace std;

// h(k) = k mod m
int hash_aux(int k, int m){
    int hash = k%m;
    if(hash < 0)
        hash += m;

    return hash;
}

int main(){

    int k,m;

    // Leitura k,m e calculo/saida do hash
    cin >> k >> m;
    while(k!=0 || m!=0){
        cout << hash_aux(k,m) << endl;
        cin >> k >> m;
    }

    return 0;
}