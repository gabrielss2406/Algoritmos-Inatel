#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int values[100]; // Valores

        int position=0;
        int search;

        int i = 0; // Contador while

    // Entrada
        while(true){
            cin >> values[i];
            
            if(values[i]==0)
                break;

            i++;
        }

        cin >> search;

    // Verificacao
        for(int j=0;j<i;j++){
            if(values[j] == search){
                position = j;
                break;
            }
        }

    // Saida
        if(position==0)
            cout << "Elemento " << search << " nao foi encontrado" << endl;
        else
            cout << "Elemento " << search << " encontrado na posicao " << position << endl;

    return 0;
}