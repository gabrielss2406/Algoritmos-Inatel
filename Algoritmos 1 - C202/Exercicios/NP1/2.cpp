#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        char nome[4][50]; // Nome dos 4 alunos
        float nota1; // Notas avaliação 1 (valor nao estatico)
        float nota2; // Notas avaliação 2 (valor nao estatico)
        float media[4]; // Medias de cada aluno

        int aprovados; // Quantidade de aprovados

    // Entrada / Verificacao
        for(int i=0; i<4; i++){
            cin.getline(nome[i], 50);

            while(true){ // CRÍTICA DE DADOS nota1
                cin >> nota1;
                if(nota1 <= 100 && nota1 >= 0)
                    break;
            }
            while(true){ // CRÍTICA DE DADOS nota2
                cin >> nota2;
                if(nota2 <= 100 && nota2 >= 0)
                    break;
            }
            cin.ignore();

            media[i] = ((2*nota1) + (3*nota2)) /5; // Calculo media
        }

    // Saida
        cout << fixed << setprecision(1);

        for(int i=0; i<4; i++){
            cout << nome[i] << endl; // Saida nome
            cout << "Media = " << media[i] << endl; // Saida media
 
            if(media[i]>=60){ // Aprovado / Reprovado
                cout << "Aprovado(a)" << endl;
                aprovados++;
            } else
                cout << "Reprovado(a)" << endl;
        }

        cout << aprovados << " Aprovados(as)" << endl;

    return 0;
}