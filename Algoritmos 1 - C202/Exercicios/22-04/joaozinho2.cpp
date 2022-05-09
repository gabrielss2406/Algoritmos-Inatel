#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        int lenghtArray; // Quantidade de calculos a serem efetuados
        cin >> lenghtArray;

        int arrayN1[lenghtArray],arrayN2[lenghtArray]; // Termos do calculo
        char op[lenghtArray]; // Operação a ser realizada

        int i; // Contador for

        float resultado; // Valor nao estaticos das operações

    // Entrada
        for(i=0;i<lenghtArray;i++)
            cin >> arrayN1[i];
        
        for(i=0;i<lenghtArray;i++)
            cin >> arrayN2[i];

        for(i=0;i<lenghtArray;i++)
            cin >> op[i];

    // Verificacao / Saida
        for(i=0;i<lenghtArray;i++){
            switch(op[i]){
                case '+':
                    resultado = arrayN1[i] + arrayN2[i];
                break;
                case '-':
                    resultado = arrayN1[i] - arrayN2[i];
                break;
                case '*':
                    resultado = arrayN1[i] * arrayN2[i];
                break;
                case '/':
                    cout << fixed << setprecision(2);
                    resultado = (float) arrayN1[i] / arrayN2[i];
                break;
            }
            cout << arrayN1[i] << " " << op[i] << " " << arrayN2[i] << " = " << resultado << endl;
        }

    return 0;
}