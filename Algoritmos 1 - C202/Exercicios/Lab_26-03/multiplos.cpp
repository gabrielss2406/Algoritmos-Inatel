#include <iostream>

using namespace std;

int main()
{

    // Variaveis entrada
    int x, y;

    // Entrada
    cin >> x >> y;

    // Verificação / saida
    if (x % y == 0)
    {
        cout << "Sim" << endl;
    }
    else
    {
        cout << "Nao" << endl;
    }

    return 0;
}