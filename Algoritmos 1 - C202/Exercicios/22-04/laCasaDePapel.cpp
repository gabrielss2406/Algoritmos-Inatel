#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int lenghtArray; // Quantidade de notas
        cin >> lenghtArray;

        int arrayNotes[lenghtArray]; // Notas do publico (1 ->gostou, -1 ->nao gostou)
        int like=0,nLike=0; // Gostou e nao gostou

    // Entrada
        for(int i=0;i<lenghtArray;i++)
            cin >> arrayNotes[i];

    // Verificacao
        for(int j=0;j<lenghtArray;j++){
            if(arrayNotes[j] == 1)
                like++;
            else if(arrayNotes[j] == -1)
                nLike++;
        }

    // Saida
        if(like==nLike)
            cout << "Deu empate" << endl;
        else if(like>nLike)
            cout << "A maioria gostou" << endl;
        else if(like<nLike)
            cout << "A maioria nao gostou" << endl;

    return 0;
}