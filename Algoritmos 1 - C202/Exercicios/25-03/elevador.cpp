#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Variaveis Inicio

    // Valores entradas
    int l, c, r1, r2;
    // Centro das circuferencias
    int centro1, centro2l, centro2c;
    // Distancia entre os centros
    float distancia;

    // Variaveis Fim

    // Entrada
    cin >> l >> c >> r1 >> r2;

    // Atribuição centros
    centro1 = r1;
    centro2l = l - r2;
    centro2c = c - r2;

    // Calculo Distancia
    distancia = sqrt(pow((centro2l - centro1), 2) + pow((centro2c - centro1), 2));

    // Avaliação da condição / Saida
    if (r1 + r2 <= distancia)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}