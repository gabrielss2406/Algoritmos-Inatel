#include <iostream>
using namespace std;
 
int sinal(int n){
    if(n>0){
        return 1;
    }else if(n==0){
        return 0;
    }else{
        return -1;
    }
}

int main() {
    int numero;
    int sinalAux;

    cin >> numero;
    
    sinalAux = sinal(numero);

    if(sinalAux==1){
        cout << "Positivo" << endl;
    }else if(sinalAux==0){
        cout << "Zero" << endl;
    }else{
        cout << "Negativo" << endl;
    }

    return 0;
}