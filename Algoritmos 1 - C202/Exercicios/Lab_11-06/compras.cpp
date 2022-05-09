#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

int main() {

    ifstream arq;
    char nome[100];
    float preco;

    float totalCompra=0;
    float precoCaro=0;
    char nomeCaro[100];

    arq.open("compras.txt", ifstream::in);

    while(!arq.eof()){
        arq >> nome;
        arq >> preco;

        if(preco>precoCaro){
            strcpy(nomeCaro, nome);
            precoCaro = preco;
        }
        totalCompra+=preco;
    }

    arq.close();

    cout << "Produto: " << nomeCaro << endl;
    cout << fixed << setprecision(2);
    cout << "Total da Compra: " << totalCompra << " reais" << endl;

    return 0; 
}