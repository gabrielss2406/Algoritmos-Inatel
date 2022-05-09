#include <iostream>
using namespace std;
 
int main() {
    
    int matriz [3][3];
    bool sexo = false; // True-> Masculino, False-> Feminino

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matriz[i][j];
        }
    }


    if(matriz[0][1]==1)
        sexo = true;
    else
        sexo = false;

    if(sexo)
        cout << "MASCULINO" << endl;
    else
        cout << "FEMININO" << endl;

    return 0;
}