#include <iostream>
using namespace std;

int main() {
    
    int numerador;
    int denominador;

    bool parar = true;

    cin >> numerador >> denominador;

    while(parar){
        if(denominador%numerador == 0){
            
        }else
            parar = false;
    }

    cout << numerador << " " << denominador << endl;

    return 0;
}