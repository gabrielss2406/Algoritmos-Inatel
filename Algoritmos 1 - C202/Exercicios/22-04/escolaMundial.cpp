#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Variaveis
        int lenghtArray; // Quantidade de alunos
        cin >> lenghtArray;

        int arrayNotes[lenghtArray]; // Notas dos alunos
        int sum=0; // Soma
        float media;

        int acima=0,abaixo=0; // Aluno acima ou abaixo da media

    // Entrada
        for(int i=0;i<lenghtArray;i++)
            cin >> arrayNotes[i];

    // Verificacao
        for(int j=0;j<lenghtArray;j++){
            sum += arrayNotes[j];

            if(arrayNotes[j]>60)
                acima++;
            else if(arrayNotes[j]<60)
                abaixo++;
        }

    // Calculo
        media = (float) sum/lenghtArray;

    // Saida
        cout << fixed << setprecision(2);
        cout << "Media da turma: " << media << endl;
        cout << "Alunos com nota acima da media: " << acima << endl;
        cout << "Alunos com nota abaixo da media: " << abaixo << endl;

    return 0;
}