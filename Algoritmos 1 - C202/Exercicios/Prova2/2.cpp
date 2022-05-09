#include <iostream>
using namespace std;
 
int main() {

    // Variaveis
        int vetor[1000]; // Entradas diferentes de 0
        int valor; // Valor temporario (antes da critica) para entrar no vetor
        int contador=0; // Contador vetor
        int contadorMaior=0; // Contador de valores maiores que o ultimo do vetor

    // Entrada
        while(valor!=0){ // Esta linha termina com o número 0 
            cin >> valor;
            if(valor!=0){
                vetor[contador] = valor;
                contador++;
            }
        }

    // Calculo
        for(int i=0; i < (contador-1); i++){ // quantidade de números maiores que o último número inserido neste vetor
            if(vetor[i] > vetor[contador-1]){
                contadorMaior++;
            }
        }

    // Saida
        cout << contadorMaior << endl;

    return 0;
}