#include <iostream>
#include <iomanip>
using namespace std;

struct dado{
    int n1;
    int n2;
    int n3;
    int n4;
    float media;
};

int main(){
    dado *nota;

    // Alocar memoria
    nota = new dado;

    // Ler valores
    cin >> nota->n1;
    cin >> nota->n2;
    cin >> nota->n3;
    cin >> nota->n4;

    // Calculo media
    nota->media = (float)(nota->n1+nota->n2+nota->n3+nota->n4)/4;

    // Saida
    cout << fixed << setprecision(2);
    cout << nota->media << endl;

    // Liberar memoria
    delete nota;

    return 0;
}