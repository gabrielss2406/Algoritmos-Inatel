#include <iostream>
using namespace std;

// Função que retorna X % Y
int mod(int x, int y){
    if(x==y)
        return 0;
    else if(x<y)
        return x;
    else
        return mod(x-y,y);
}

int main(){
    int x; // valor x
    int y; // valor y

    // Entrada x e y (até x e y == -1) / Saida
    cin >> x;
    cin >> y;
    while(x!=-1 || y!=-1){
        cout << mod(x,y) << endl; // Saida do calculo X % Y
        cin >> x;
        cin >> y;
    }

    return 0;
}