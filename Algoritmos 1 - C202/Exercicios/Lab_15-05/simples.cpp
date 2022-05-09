#include <iostream>
using namespace std;
 
struct Dados
{
    char nome[50];
    char aniversario[9];
    char sexo; // M ou F
};


int main() {
    Dados pessoa;

    cin.getline(pessoa.nome, 50);
    cin.getline(pessoa.aniversario, 9);
    cin >> pessoa.sexo;


    cout << pessoa.nome << endl;
    cout << pessoa.aniversario << endl;
    cout << pessoa.sexo << endl;

    return 0;
}