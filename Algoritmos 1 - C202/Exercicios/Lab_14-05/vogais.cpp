#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    
    // Variaveis
        char texto[50];
        int tamanho;
        int vogais = 0;
    // Entrada
        cin.getline(texto, 50);
    // Verificacao
        tamanho = strlen(texto);
        for(int i=0; i<tamanho; i++){
            if(texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u'){
                texto[i] = toupper(texto[i]);
                vogais++;
            }
        }
    // Saida
        cout << texto << endl;
        cout << vogais << endl;
    return 0;
}