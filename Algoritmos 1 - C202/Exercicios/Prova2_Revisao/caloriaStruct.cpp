#include <iostream>
#include <iomanip>
using namespace std;
 
struct produtoStruct
{
    char nome[100];
    float preco;
    int caloria;
};


int main() {
    
    produtoStruct produto[100];
    int N;
    int menorPosicao=0;
    int menorValor;

    cin >> N;

    for(int i=0; i<N; i++){
        cin.ignore();
        cin.getline(produto[i].nome, 100);
        cin >> produto[i].preco;
        cin >> produto[i].caloria;
    }
    menorValor=produto[0].caloria;
    for(int i=1; i<N; i++){
        if(produto[i].caloria < menorValor){
            menorValor=produto[i].caloria;
            menorPosicao=i;
        }
    }
    cout << "Produto escolhido:" << endl;
    cout << "Nome: " << produto[menorPosicao].nome << endl;
    cout << "Calorias: " << produto[menorPosicao].caloria << " cal" << endl;
    cout << fixed << setprecision(2);
    cout << "Preco: R$ " << produto[menorPosicao].preco << endl;

    return 0;
}