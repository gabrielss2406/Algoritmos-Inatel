#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis / Entrada
        int lenghtArray; // Quantidade de numeros de contatos
        cin >> lenghtArray;

        int arrayContacts[lenghtArray]; // Contatos

        int max,min;

    // Entrada
        for(int i=0;i<lenghtArray;i++)
            cin >> arrayContacts[i];

    // Verificacao
        max = arrayContacts[0];
        min = arrayContacts[0];

        for(int i=0;i<lenghtArray;i++){
            cin >> arrayContacts[i];

            if(arrayContacts[i] > max){
                max = arrayContacts[i];
            } else if(arrayContacts[i] < min){
                min = arrayContacts[i];
            }
        }
    
    // Saida
        cout << "Menor numero de contatos: " << min << endl;
        cout << "Maior numero de contatos: " << max << endl;
    return 0;
}