#include <iostream>
using namespace std;

int main(){
    int vetor[100];
    int temp;
    int x;
    int cont=0;
    int posicao=-1;

    while(temp!=-1){
        cin >> temp;
        if(temp!=-1)
            vetor[cont]=temp;
        cont++;
    }

    cin >> x;

    for(int i=0; i<cont; i++){
        if(vetor[i]==x)
            posicao = i;
    }

    if(posicao==-1)
        cout << x << " nao esta no vetor." << endl;
    else
        cout << x << " esta no vetor na posicao: " << posicao << endl;

    return 0;
}