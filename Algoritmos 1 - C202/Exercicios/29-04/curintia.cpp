#include <iostream>
using namespace std;
 
int main() {
    
    int nAtletas;
    cin >> nAtletas;
    cin.ignore();

    char nome[nAtletas][50];
    int idade[nAtletas];

    for(int i=0; i<nAtletas; i++){
        cin.getline(nome[i], 50);
        cin >> idade[i];
        cin.ignore();
    }

    for (int i=0; i<nAtletas; i++){
        if(idade[i]>=18){
            cout << nome[i] << " " << idade[i] << endl;
        }
    }
    

    return 0;
}