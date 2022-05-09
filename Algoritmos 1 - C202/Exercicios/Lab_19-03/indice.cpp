#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    float indice,idade;
    string nome("");

    cin >> idade >> nome;

    indice = (idade/42) - (idade-3);

    cout << fixed << setprecision(4);
    cout << "Ind = " << indice;
}