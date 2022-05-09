#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        float notaEntrada; // Notas inseridas
        float notaValida1 = 11; // Armazenamento da nota valida 
                                // default de valor impossivel no programa
        float media = 0; // Media com notas validas

    // Entrada / Verificacao
        while(media==0){
            cin >> notaEntrada;

            if(notaEntrada < 0 || notaEntrada > 10){
                cout << "nota invalida" << endl;
            } else {
                if(notaValida1 != 11){
                    media = (notaValida1 + notaEntrada) / 2;
                    break;
                }else{
                    notaValida1 = notaEntrada;
                }
            } 
        }
    
    // Saida
        cout << "media = " << media << endl;

    return 0;
}