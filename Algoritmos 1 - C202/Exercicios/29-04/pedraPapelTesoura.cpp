#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    
    // Variaveis
        int jogadas;
        char jogadaP1[8];
        char jogadaP2[8];
    
        char papel[8];
        char pedra[8];
        char tesoura[8];
        strcpy(papel, "papel");
        strcpy(pedra, "pedra");
        strcpy(tesoura, "tesoura");
    // Entrada
        cin >> jogadas;
        cin.ignore();

    // Verificacao / Saida
        for(int i=0; i<jogadas; i++){
            cin.getline(jogadaP1,8);
            cin.getline(jogadaP2,8);

            if(strcmp(jogadaP1,jogadaP2)==0)
                cout << "Empate" << endl;
            else if (strcmp(jogadaP1,papel)==0){
                if(strcmp(jogadaP2,tesoura)==0)
                    cout << "Jogador B" << endl;
                else
                    cout << "Jogador A" << endl;
            }
            else if (strcmp(jogadaP1,tesoura)==0){
                if( strcmp(jogadaP2,papel)==0)
                    cout << "Jogador A" << endl;
                else
                    cout << "Jogador B" << endl;
            }
            else if (strcmp(jogadaP1,pedra)==0){
                if(strcmp(jogadaP2,papel)==0)
                    cout << "Jogador B" << endl;
                else
                    cout << "Jogador A" << endl;
            }
        }

    return 0;
}