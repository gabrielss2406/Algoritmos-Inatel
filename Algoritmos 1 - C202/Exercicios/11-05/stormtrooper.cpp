#include <iostream>
using namespace std;
 
struct Stormtrooper
{
    int id; // identificacao
    float IM; // indice maldade
    float FA; // força de abate
};


int main() {
    
    // Variaveis
        Stormtrooper entrada;
        float GA; // grau de aptidão (auxiliar)
        float GAMaior=0; // valores do selecionado
        int idMaior;
    // Entrada
        while(true){
            cin >> entrada.id;
                if(entrada.id == 0)
                    break;
            cin >> entrada.IM;
            cin >> entrada.FA;

            GA = (float) (entrada.IM + entrada.FA)/2;
            
            if(GA>GAMaior){
                GAMaior=GA;
                idMaior=entrada.id;
            }
        }

    // Saida
        cout << "Stormtrooper escolhido: " << idMaior << endl;
        cout << "GA = " << GAMaior;

    return 0;
}