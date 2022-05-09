#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variaveis entrada
    char nome1[100], nome2[100]; // Nomes
    int idade1, idade2;          // Idades

    // Entrada Inicio
        cin.getline(nome1, 100);
        cin >> idade1; // Pessoa 1

        cin.ignore();

        cin.getline(nome2, 100);
        cin >> idade2; // Pessoa 2

    // Entrada Fim

    // Verificação / saida
    if (idade1 == idade2)
    {
        cout << "Idades iguais" << endl;
    }
    else if (idade1 > idade2)
    {
        cout << nome1 << endl;
    }
    else
    {
        cout << nome2 << endl;
    }

    return 0;
}