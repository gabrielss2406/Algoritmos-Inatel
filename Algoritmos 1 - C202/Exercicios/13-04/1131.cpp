#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int vitoriasGremio = 0, vitoriasInter = 0, empates = 0; // Contador de vitorias
        int totalJogos = 0; // Contador de jogos

        int golGremioEntrada, golInterEntrada; // Variaveis de entrada
        int continua; // 1-sim, 2-nao

    // Entrada / Verificacao
        while(continua != 2){
            cin >> golInterEntrada >> golGremioEntrada;

            totalJogos += 1;

            if(golGremioEntrada == golInterEntrada){
                empates += 1;
            } else if (golGremioEntrada > golInterEntrada){
                vitoriasGremio += 1;
            } else { // Inter vence
                vitoriasInter += 1;
            }

            while(true){
                cout << "Novo grenal (1-sim 2-nao)" << endl;
                cin >> continua;
                if(continua == 1 || continua == 2) break;
            }
        }

    // Saida
        cout << totalJogos << " grenais" << endl;
        cout << "Inter:" << vitoriasInter << endl;
        cout << "Gremio:" << vitoriasGremio << endl;
        cout << "Empates:" << empates << endl;
        
        if(vitoriasGremio > vitoriasInter){
            cout << "Gremio venceu mais" << endl;
        } else if(vitoriasGremio < vitoriasInter){
            cout << "Inter venceu mais" << endl;
        } else {
            cout << "Nao houve vencedor" << endl;
        }

    return 0;
}