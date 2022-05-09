#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        int codigoProduto; // Codigo (valor nao estatico)
        int quantidade; // Quantidade (valor nao estatico)

        float somaProdutos = 0; // Soma total dos preços (valor acumulativo)

    // Entrada / Verificacao
        while(true){
            cin >> codigoProduto;

            if(codigoProduto == -1)
                break;   // Encerramento entrada
        
            cin >> quantidade;

            switch(codigoProduto){ // Soma do valor a ser pago
                case 1:
                    somaProdutos += (float) quantidade * 5.5;
                break;
                case 2:
                    somaProdutos += (float) quantidade * 3;
                break;
                case 3:
                    somaProdutos += (float) quantidade * 54.3;
                break;
                case 4:
                    somaProdutos += (float) quantidade * 26.9;
                break;
                case 5:
                    somaProdutos += (float) quantidade * 37;
                break;
            }
        }

    // Saida
        if(somaProdutos<=100)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;

        cout << fixed << setprecision(2);
        cout << "Total = R$ " << somaProdutos << endl;
        
    return 0;
}