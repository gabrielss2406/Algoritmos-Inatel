#include <iostream>
#include <iomanip>
using namespace std;
 
double ideal(double h, char sexo){
    double pIdeal=0;
    if(sexo=='M')
        pIdeal = (72.7 * h) - 58;
    else if(sexo=='F')
        pIdeal = (62.1 * h) - 44.7;
    return pIdeal;
}

int main() {
    double altura;
    char sexo; // M ou F

    cin >> altura;
    cin >> sexo;

    cout << fixed << setprecision(2);
    cout << "Peso ideal: " << ideal(altura,sexo) << " kg" << endl;

    return 0;
}