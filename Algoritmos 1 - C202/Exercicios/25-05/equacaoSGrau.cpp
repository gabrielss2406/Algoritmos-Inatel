#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Calculo equação do segundo grau (raizes)
int calc_raizes(float a, float b, float c, float &x1, float &x2){
    float delta;
    delta = (b*b) - (4*a*c);

    if(delta<0)
        return 1;
    else if(delta==0){
        x1 = x2 = (-b+sqrt(delta))/ (2*a);
        return 0;
    }else{
        x1 = (-b-sqrt(delta))/ (2*a);
        x2 = (-b+sqrt(delta))/ (2*a);
        return 0;
    }
}

int main() {
    
    float a,b,c;
    float x1=0,x2=0; // raizes
    int resFunc; // resultado da função - calc_raizes

    cin >> a >> b >> c;

    resFunc = calc_raizes(a,b,c,x1,x2);

    if(resFunc==1){
        cout << "Nao ha raizes reais" << endl;
    }else{
        cout << fixed << setprecision(2);
        if(x1==x2)
            cout << "x = " << x1 << endl;
        else{
            if(x1<=x2)
                cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
            else
                cout << "x1 = " << x2 << "\nx2 = " << x1 << endl;
        }
    }

    return 0;
}