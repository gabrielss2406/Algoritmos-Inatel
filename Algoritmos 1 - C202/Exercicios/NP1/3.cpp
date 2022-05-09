#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        int qntConsumidores; // Quantidade consumidores
        float precoKWH; // Preço do kWh padrao

        int tipoConsumidor; // 1-residencial, 2-comercial, 3-industrial
        
        float consumo; // kWh consumido (valor nao estatico)
        float menor=-1; // menor consumo registrado - Default impossivel

        float totalResidencial=0; // consumo residencial
        float totalComercial=0; // consumo comercial
        float totalIndustrial=0; // consumo industrial

    // Entrada
        cin >> qntConsumidores;
            float valorTotal[qntConsumidores]; // Total do consumidor
        
        cin >> precoKWH;

    // Verificacao
        for(int i=0; i<qntConsumidores; i++){
            cin >> consumo;
            cin >> tipoConsumidor;

            valorTotal[i] = (float) precoKWH * consumo; // calculo valor

            switch(tipoConsumidor){ // tipo
                case 1:
                    totalResidencial += consumo;
                break;
                case 2:
                    totalComercial += consumo;
                break;
                case 3:
                    totalIndustrial += consumo;
                break;
            }

            if(menor == -1) // menor
                menor = consumo;
            else if(consumo<menor)
                menor = consumo;
        }

    // Saida
        cout << fixed << setprecision(2);

        for(int i=0; i<qntConsumidores; i++){
            cout << "Total a pagar: R$ " << valorTotal[i] << endl;
        }

        cout << "Menor consumo: " << menor << " kWh" << endl;
        cout << "Total do consumo residencial: " << totalResidencial << " kWh" << endl;
        cout << "Total do consumo comercial: " << totalComercial << " kWh" << endl;
        cout << "Total do consumo industrial: " << totalIndustrial << " kWh" << endl;

    return 0;
}