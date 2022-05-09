#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    
    ofstream arqOut;
    ifstream arqIn;
    char nomeArquivo[50];
    int marcador=0;
    float valor=1; // Valor a ser lido

    cin.getline(nomeArquivo,50);
    arqOut.open(nomeArquivo, ofstream::out);

    cin >> valor;
    while(valor!=0){
        if(marcador!=0)
            arqOut << "\n" << valor;
        else
            arqOut << valor;

        marcador=1;
        cin >> valor;
    }
    arqOut.close();


    arqIn.open(nomeArquivo, ifstream::in);

    while(!arqIn.eof()){
        arqIn >> valor; // Ler dados do arquivo
        cout << "x = " << valor << endl;
    }

    arqIn.close();

    return 0;
}