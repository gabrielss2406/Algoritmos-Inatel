#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    // Variaveis
        char voto[10]; //variavel auxiliar para computacao dos votos

        int totalVotos=0; //total de votos
        int votosKpop=0; //votos em K-POP
        int votosRock=0; //votos em ROCK
        int votosMpb=0; // votos em MPB

    // Entrada / Verificacao
        for(int i=0; i<10; i++){
            strcpy(voto, ""); //Reset variavel voto
            
            while(strcmp(voto, "SAIR")!=0){ //Leitura e computacao do voto
                cin >> voto;

                if(strcmp(voto, "SAIR")!=0)
                    totalVotos++;

                if(strcmp(voto, "K-POP")==0)
                    votosKpop++;
                else if(strcmp(voto, "ROCK")==0)
                    votosRock++;
                else if(strcmp(voto, "MPB")==0)
                    votosMpb++;
            }
        }

    // Saida
        cout << "Estilo musical:"; // +Saida em ordem maisVotado->menos
        if(votosKpop>votosRock && votosKpop>votosMpb){
            cout << " K-POP";
            if(votosRock>votosMpb)
                cout << " ROCK MPB" << endl;
            else
                cout << " MPB ROCK" << endl;
        }else if(votosMpb>votosKpop && votosMpb>votosKpop){
            cout << " MPB";
            if(votosRock>votosKpop)
                cout << " ROCK K-POP" << endl;
            else
                cout << " K-POP ROCK" << endl;
        }else{
            cout << " ROCK";
            if(votosKpop>votosMpb)
                cout << " K-POP MPB" << endl;
            else
                cout << " MPB K-POP" << endl;
        }

        cout << "Total de votos para ROCK: " << votosRock << endl;
        cout << "Total de votos: " << totalVotos << endl;

    return 0;
}