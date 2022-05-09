#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    
    char frase[100];
    char * separado;

    cin.getline(frase,100);

    separado = strtok (frase," ");
    
    while (separado != NULL){
        cout << separado << endl;
        separado = strtok (NULL, " ,.-");
    }

    return 0;
}