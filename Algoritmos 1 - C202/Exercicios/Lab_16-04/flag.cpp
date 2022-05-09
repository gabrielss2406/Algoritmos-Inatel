#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    // Variaveis
        float menorAltura = 100;
        float somaAlturaMulheres = 0;
        float altura; // valor nao estatico

        int sexo; // 1-M, 2-F

        int numeroHomens = 0;
        int numeroMulheres = 0;
        float mediaAltura;

    // Entrada / Verificacao
        while(true){
            cin >> altura;
            if(altura == -1) 
                break;

            cin >> sexo;
            if(sexo==1){
                numeroHomens++;
            }else{
                numeroMulheres++;
                somaAlturaMulheres += altura;
            }
                
            if(menorAltura > altura)
                menorAltura = altura;
        }

    // Calculo
        mediaAltura = (float) somaAlturaMulheres / numeroMulheres;

    // Saida
        cout << numeroHomens << " Hom." << endl;
        cout << "Menor altura: " << menorAltura << endl;
        cout << fixed << setprecision(2);
        cout << "Média: " << mediaAltura << endl;

    return 0;
}