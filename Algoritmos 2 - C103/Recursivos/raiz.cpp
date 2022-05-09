#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Funcao calculo raiz
float raiz(float x, float x0, float e){
    int auxx0; // variavel aux ao parametro x0
    if(fabs(x0*x0 - x) <= e)
        return x0;
    else{
        auxx0 = (x0*x0+x)/(2*x0);
        return raiz(x,auxx0,e);
    }
}

int main(){

    float x; // numero da raiz
    float x0; // estimativa de raiz de x
    float e; // limitante superior para o erro

    // entrada
    cin >> x >> x0 >> e;

    // calculo / saida
    cout << fixed << setprecision(2);
    cout << raiz(x,x0,e) << endl;

    return 0;
}