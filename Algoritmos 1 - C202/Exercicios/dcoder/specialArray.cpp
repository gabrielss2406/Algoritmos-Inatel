#include <iostream>
using namespace std;


int main()
{
    int tamanhoArray;

    cin >> tamanhoArray;

    int numeros[tamanhoArray];

    bool especial = true;

    for(int i = 0 ; i <= (tamanhoArray-1) ; i++){
        cin >> numeros[i];

        if(especial){
            if(numeros[i] <= 0)
                especial = false;
        }
    }

    if(especial)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}