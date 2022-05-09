#include <iostream>
using namespace std;

int main(){

    int vetor[3];
    int *p = NULL;

    vetor[0]=1;
    vetor[1]=3;
    vetor[2]=5;

    cout << "vetor= " << vetor << endl;
    cout << "*vetor= " << *vetor << endl;

    p = vetor;
    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;

    p++;
    cout << "*p = " << *p << endl;

    return 0;
}