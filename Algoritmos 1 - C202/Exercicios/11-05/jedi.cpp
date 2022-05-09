#include <iostream>
#include <cstring>
using namespace std;

struct Jedi
{
    char nome[50];
    int base;
};


int main() {
    char busca[50];
    bool achado = false;
    int baseAchado;
    int qntCavaleiros;
    cin >> qntCavaleiros;

    Jedi entrada[qntCavaleiros];

    for(int i=0; i<qntCavaleiros; i++){
        cin.ignore();
        cin.getline(entrada[i].nome,50);
        cin >> entrada[i].base;
    }

    cin.ignore();
    cin.getline(busca,50);

    for(int i=0; i<qntCavaleiros; i++){
        if(strcmp(busca,entrada[i].nome)==0){
            achado = true;
            baseAchado = entrada[i].base;
        }
            
    }

    if(achado)
        cout << "Este cavaleiro esta na base " << baseAchado << endl;
    else
        cout << "Este cavaleiro nao esta cadastrado" << endl;

    return 0;
}