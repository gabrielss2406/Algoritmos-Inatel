#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    // Variaveis
        int continua; // 1 - sim, 2 - nao

        float notaEntrada; // Notas inseridas
        float notaValida1 = 11; // Armazenamento da nota valida 
                                // default de valor impossivel no programa
        float media = 0; // Media com notas validas

    while(continua != 2){
        // Entrada / Verificacao
            while(media==0){
                cin >> notaEntrada;

                if(notaEntrada < 0 || notaEntrada > 10){
                    cout << "nota invalida" << endl;
                } else {
                    if(notaValida1 != 11){
                        media = (notaValida1 + notaEntrada) / 2;
                        cout << "media = " << media << endl;
                    }else{
                        notaValida1 = notaEntrada;
                    }
                } 
            }
        
        // Saida
            
            while(true){
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> continua;
                if(continua == 1 || continua == 2){
                    media = 0;
                    notaValida1 = 11;
                    break;
                } 
            }
                
            
    }

    return 0;
}