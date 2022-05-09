#include <iostream>
using namespace std;
 
int main() {
    
    int matriz[5][3];
    bool fullZero; // Linha de zeros
    int valor;

    while(true){
        fullZero = true;
        for(int i=0; i<5; i++){
            for(int j=0; j<3; j++){
                cin >> matriz[i][j];
                if(matriz[i][j]!=0)
                    fullZero = false;
            }
        }

        if(fullZero)
            break;

        if(matriz[0][0]==1)
        valor=1;
        else if(matriz[0][1]==1)
            valor=4;
        else{
            if(matriz[1][2]==1){
                if(matriz[3][0]==1)
                    valor=5;
                else
                    valor=6;
            }
            else if(matriz[2][0]==1)
                valor=7;
            else if(matriz[4][0]==1)
                valor=9;
            else if(matriz[3][2]==1)
                valor=2;
            else if(matriz[2][1]==1)
                valor=0;
            else if(matriz[3][0]==1)
                valor=3;
            else
                valor=8;
        }

        switch(valor){
            case 0:
                cout << "ZERO" << endl;
            break;
            case 1:
                cout << "UM" << endl;
            break;
            case 2:
                cout << "DOIS" << endl;
            break;
            case 3:
                cout << "TRES" << endl;
            break;
            case 4:
                cout << "QUATRO" << endl;
            break;
            case 5:
                cout << "CINCO" << endl;
            break;
            case 6:
                cout << "SEIS" << endl;
            break;
            case 7:
                cout << "SETE" << endl;
            break;
            case 8:
                cout << "OITO" << endl;
            break;
            case 9:
                cout << "NOVE" << endl;
            break;
        }
    }

    
    


    return 0;
}