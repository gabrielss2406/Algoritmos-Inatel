#include <iostream>
using namespace std;
 
struct Dados
{
    int n;
};


int main() {
    int N;
    cin >> N;
    
    Dados numero[N];
    int soma=0;

    for(int i=0; i<N; i++)
        cin >> numero[i].n;

    for(int i=0; i<N; i++){
        if(numero[i].n%2 == 0)
        soma += numero[i].n;
    }

    cout << soma << endl;

    return 0;
}