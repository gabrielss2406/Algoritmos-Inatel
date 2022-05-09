#include <iostream>
 
using namespace std;
 
int main() {
    
    // Variaveis
        int lenghtArray; // Quantidade de videos
        cin >> lenghtArray;

        int arrayViews[lenghtArray]; // Views dos videos
        int maior=0,menor=0; // Maior e menor que 10M

    // Entrada / Verificacao
        for(int i=0;i<lenghtArray;i++){
            cin >> arrayViews[i];

            if(arrayViews[i]>10000000){
                maior++;
            } else if(arrayViews[i]<10000000){
                menor++;
            }
        }

    // Saida
        cout << maior << " video(s) com mais de 10M views" << endl;
        cout << menor << " video(s) com menos de 10M views" << endl;

    return 0;
}