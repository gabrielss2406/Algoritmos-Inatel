#include <iostream>
using namespace std;
 
int main() {

    int vetor[100];
    int c=0;
    int cMaior;

    while(true){
        cin >> vetor[c];
        if(vetor[c]==0){
            cout << "0";
            break;
        }else{
            cout << "1";
        }
            
        c++;
    }

    cout << vetor[c-1] << endl;

    for(int i=0; i < (c); i++){ // quantidade de números maiores que o último número inserido neste vetor
        if(vetor[i] > vetor[c-1]){
            cMaior++;
        }
    }

    cout << cMaior << endl;

    return 0;
}