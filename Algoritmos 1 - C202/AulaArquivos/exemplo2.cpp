#include <iostream>
#include <fstream> // Biblioteca arquivo
using namespace std;
 
int main() {
    
    ofstream arqout; // Variavel para escrever em arquivo
    ifstream arqin;
    int x=3;

    arqout.open("dados.txt", ofstream::out); // Abrindo arquivo para Escrever
    arqout << x;
    arqout.close(); // Fechando arquivo

    arqin.open("dados.txt", ifstream::in);
    arqin >> x;
    cout << "x = " << x << endl;
    arqin.close();

    return 0; 
}