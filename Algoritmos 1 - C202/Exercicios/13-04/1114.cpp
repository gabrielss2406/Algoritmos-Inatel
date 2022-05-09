#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int senhaEntrada; // Senha inserida
        const int senha = 2002; // Senha real, valor fixo

    // Entrada / Verificacao
        while(true){
            cin >> senhaEntrada;

            if(senhaEntrada == senha) break;

            cout << "Senha Invalida" << endl;
        }

    // Saida Final
        cout << "Acesso Permitido" << endl;

    return 0;
}