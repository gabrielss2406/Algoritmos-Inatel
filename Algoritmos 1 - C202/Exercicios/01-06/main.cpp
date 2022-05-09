#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
 
int main() {
    ifstream arq;
    char nomeArq[255];
    float x;
    float soma=0;
    float media;
    int i=0; // contador

    cin.getline(nomeArq,255);
    arq.open(nomeArq, ifstream::in);

    while(!arq.eof()){
        arq >> x;
        soma += x;
        i++;
        cout << i << endl;
    }

    media = soma/i;

    cout << fixed << setprecision(1);
    cout << "Temperatura media: " << media << " graus" << endl;

    arq.close();

    return 0; 
}