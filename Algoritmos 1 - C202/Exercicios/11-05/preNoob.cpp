#include <iostream>
#include <iomanip>
using namespace std;
 
struct Notas
{
    int matricula;
    float notaP1;
    float notaP2;
};


int main() {
    Notas notas;

    cin >> notas.matricula;
    cin >> notas.notaP1;
    cin >> notas.notaP2;

    cout << "Matricula do aluno: " << notas.matricula << endl;
    cout << fixed << setprecision(2);
    cout << "Nota da primeira prova: " << notas.notaP1 << endl;
    cout << "Nota da segunda prova: " << notas.notaP2 << endl;

    return 0;
}