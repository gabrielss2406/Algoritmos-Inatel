#include <iostream>
using namespace std;
 
int main() {
    
    // Variaveis
        float tensao;

    // Entrada
        cin >> tensao;

    // Verificacao / Saida
        if(tensao==0)
            cout << "Fonte desligada" << endl;
        else if(tensao>0 && tensao<127)
            cout << "Baixa tensao" << endl;
        else if(tensao == 127)
            cout << "Tensao correta" << endl;
        else if(tensao>127 && tensao<135)
            cout << "Sobretensao" << endl;
        else
            cout << "Perigo! Desligue a fonte" << endl;

    return 0;
}