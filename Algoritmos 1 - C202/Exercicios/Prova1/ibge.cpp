#include <iostream>
using namespace std;
 
int main() {
    
    // Variaveis
        int numeroPessoas;

        char sexo; // M ou F
        char escolaridade; // F: fundamental, M: ensino médio, S: ensino superior)
        int idade;
        int numeroFilhos;

        int caso1=0; // pessoas com mais de 20 anos sem ensino superior
        int caso2=0; // mulheres com menos de 18 anos que tenham ao menos um filho

    // Entrada / Verificacao
        cin >> numeroPessoas;

        for(int i=0; i<numeroPessoas; i++){
            cin >> sexo;
            cin >> idade;
            cin >> escolaridade;
            cin >> numeroFilhos;

            if(idade>20 && escolaridade!='S')
                caso1++;

            if(sexo=='F' && idade<18 && numeroFilhos>=1)
                caso2++;
        }

    // Saida
        cout << caso1 << " pessoas com mais de 20 anos sem ensino superior" << endl;
        cout << caso2 << " mulheres com menos de 18 anos com ao menos um filho" << endl;
    
    return 0;
}