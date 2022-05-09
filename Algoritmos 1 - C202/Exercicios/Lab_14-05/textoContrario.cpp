#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    
    // Variaveis
        char texto[50];
        char textoBackup[50];
        int j;
    // Entrada
        cin.getline(texto,50);
        j = strlen(texto)-1;

        strcpy(textoBackup,texto);
    // Verificacao
        for(int i=0; i<j; (i++,j--)){
            texto[i] = textoBackup[j];
            texto[j] = textoBackup[i];
        }
    // Saida
        cout << texto << endl;

    return 0;
}