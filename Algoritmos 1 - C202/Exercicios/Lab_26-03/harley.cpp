#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        // Entradas
        int moto1,moto2,moto3; // Modelos
        // Calculo
        float velocidade1,velocidade2,velocidade3; // Velocidades

    // Entrada
    cin >> moto1 >> moto2 >> moto3;

    // Calculo
    velocidade1 = 10 * (moto1 - ( (-4*1.0*moto1)/3 )  );
    velocidade2 = 10 * (moto2 - ( (-4*1.0*moto2)/3 )  );
    velocidade3 = 10 * (moto3 - ( (-4*1.0*moto3)/3 )  );

    // Saida / Testes
    if(velocidade1 > velocidade2 && velocidade1 > velocidade3){
        cout << "Moto 1" << endl;
    }else if(velocidade2 > velocidade1 && velocidade2 > velocidade3){
        cout << "Moto 2" << endl;
    }else{
        cout << "Moto 3" << endl;
    }
    return 0;
}