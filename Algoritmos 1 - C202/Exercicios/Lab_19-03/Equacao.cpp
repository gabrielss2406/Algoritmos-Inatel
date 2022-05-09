#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    int x;
    float resultado;

    cin >> x;

    resultado = ( pow(x,3) - pow(x,2) ) * sqrt(x);

    cout << fixed << setprecision(2);
    cout << resultado;
}