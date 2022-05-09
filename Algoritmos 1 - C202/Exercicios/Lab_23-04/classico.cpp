#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        int n1,n2;
        char sinal;

        float resultado;

        bool impossible = false;

    // Entrada
        cin >> n1 >> n2;
        cin >> sinal;

    // Verificacao
        switch(sinal){
            case '+':
                resultado = n1+n2;
            break;
            case '-':
                resultado = n1-n2;
            break;
            case '*':
                resultado = n1*n2;
            break;
            case '/':
                if(n2==0)
                    impossible = true;
                else
                    resultado = (float)n1/n2;
            break;
        }

    // Saida
        cout << fixed << setprecision(2);
        if(impossible)
            cout << "Impossivel" << endl;
        else
            cout << resultado << endl;

    return 0;
}