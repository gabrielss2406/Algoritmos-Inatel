#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int X = 0, Y = 1; // Dois valores inteiros X e Y
                          // Inicialização com valores distintos
    
    // Verificacao / Entrada / Saida
        while(X != Y){
            cin >> X >> Y;

            if(X==Y) break;

            if(X > Y){
                cout << "Decrescente" << endl;
            }
            else{
                cout << "Crescente" << endl;
            }
        }

    return 0;
}