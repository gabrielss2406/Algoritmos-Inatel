#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float tempo,velocidadeMedia,litros;

    cin >> tempo >> velocidadeMedia;

    litros = (tempo * velocidadeMedia)/12;

    cout << fixed << setprecision(3);
    cout << litros << " litro(s).";

}