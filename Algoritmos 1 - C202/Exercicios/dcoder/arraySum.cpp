#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int N; // Quant. numers
        int sum = 0;
        int max = 0;
        int number = 0; // not-estatic valor
        int remainder;

    // Entrada
        cin >> N;

    // Verificacao
        for(int i = 0; i < N ; i++){
            cin >> number;

            if(sum == 0)
                max = number;
            else if(max < number)
                max = number;
 
            sum += number;
        }

    // Calculo / Saida
        remainder = max%number;
        cout << remainder;

    return 0;
}