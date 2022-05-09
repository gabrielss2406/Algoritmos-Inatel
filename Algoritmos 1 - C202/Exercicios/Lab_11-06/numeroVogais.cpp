#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
 
int main() {
    ifstream arq;
    int vogais=0;
    char texto[100];

    arq.open("arquivo.txt", ifstream::in);

    while(!arq.eof()){
        arq.getline(texto,100);
        for(int i=0; i<strlen(texto); i++){
            if(texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u')
                vogais++;
        }
    }

    arq.close();

    cout << vogais << endl;

    return 0; 
}