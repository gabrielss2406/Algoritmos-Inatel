#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        char cod;

    // Entrada
        cin >> cod;

    // Verificacao
        switch(cod){
            case 'a':
                cout << "Africa" << endl;
            break;
            case 'b':
                cout << "America" << endl;
            break;
            case 'c':
                cout << "Antartida" << endl;
            break;
            case 'd':
                cout << "Asia" << endl;
            break;
            case 'e':
                cout << "Europa" << endl;
            break;
            case 'f':
                cout << "Oceania" << endl;
            break;
            default:
                cout << "Opcao Invalida!" << endl;
        }

    // Saida

    return 0;
}