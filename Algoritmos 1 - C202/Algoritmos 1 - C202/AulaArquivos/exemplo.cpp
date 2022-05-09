#include <iostream>
#include <fstream> // Biblioteca arquivo
using namespace std;
 
int main() {
    
    ifstream arq; // Variavel para ler arquivo
    char nomeArq[50];
    int x[10];
    int contador=0;

    cin.getline(nomeArq,50);

    arq.open(nomeArq, ifstream::in); // Abrindo arquivo para leitura

    // !arq.eof() == End Of File (true -> acabou, false -> não acabou)
    
    while(!arq.eof()){ // Mostrar todos os dados do arquivo
        arq >> x[contador]; // Ler dados do arquivo
        contador++;
    }

    for(int i=0; i<contador; i++){
        cout << "x = " << x[i] << endl;
    }

    arq.close(); // Fechando arquivo

    return 0; 
}