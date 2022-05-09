#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    string nome("");
    double salarioFixo,vendas,salarioFinal;

    cin >> nome >> salarioFixo >> vendas;

    salarioFinal = salarioFixo + (0.15*vendas);

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salarioFinal;

}