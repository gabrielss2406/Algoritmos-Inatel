#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int qntPokemons; // Quantidade de capturados a serem informados
        int qntBolas;
        int forca;

        int somaBolas = 0;
        int somaForca = 0;

        float mediaForca;

        char nomes[100]; // Armazenameto dinamico de nomes

    // Entrada
        cin >> qntPokemons;
        cin.ignore();

    // Verificacao / Entrada 2
        for(int i = 1 ; i<=qntPokemons ; i++){
            cin.getline(nomes, 100);
            cin >> qntBolas;
            cin >> forca;
            cin.ignore();

            somaBolas += qntBolas;
            somaForca += forca;
        }

    // Calculo
        if(qntPokemons==0) mediaForca = 0;
        else mediaForca = (float) somaForca / qntPokemons;

    // Saida
        cout << "Total de Pokebolas = " << somaBolas << endl;

        if(qntPokemons != 0) cout << fixed << setprecision(2);
        cout << "Media de forca =  " << mediaForca << endl;


    return 0;
}