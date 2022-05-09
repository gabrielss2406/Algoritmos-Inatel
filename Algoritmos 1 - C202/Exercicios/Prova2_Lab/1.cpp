#include <iostream>
#include <iomanip>
using namespace std;
 
// Struct clientes (entrada)
struct clienteStruct{
    char nome[100]; //nome (pode conter espaços)
    int qnt; //quantidade comprada de sabonetes
    float valor; //valor total da compra
};


int main() {
    
    // Variaveis
        int N; //referente ao número de clientes
        clienteStruct cliente[50]; // Dados N clientes (máximo de 50)

        int posicaoClienteMaisCompras; //cliente que comprou mais sabonetes
        int auxMaisCompras=0; //variavel auxiliar a posicaoClienteMaisCompras
        int totalSabonetes=0; //total de sabonetes vendidos
        float totalVendas=0; //valor total das vendas

    // Entrada
        cin >> N;
        for(int i=0; i<N; i++){
            cin.ignore();
            cin.getline(cliente[i].nome, 100);
            cin >> cliente[i].qnt;
            cin >> cliente[i].valor;
        }

    // Verificacao
        for(int i=0; i<N; i++){
            if(cliente[i].qnt > auxMaisCompras){
                auxMaisCompras = cliente[i].qnt;
                posicaoClienteMaisCompras = i;
            }
            totalSabonetes += cliente[i].qnt;
            totalVendas += cliente[i].valor;
        }

    // Saida
        cout << "Cliente: " << cliente[posicaoClienteMaisCompras].nome << endl;
        cout << "Total de sabonetes: " << totalSabonetes << " unidades" << endl;
        cout << fixed << setprecision(2);
        cout << "Total das vendas: " << totalVendas << " reais" << endl;

    return 0;
}