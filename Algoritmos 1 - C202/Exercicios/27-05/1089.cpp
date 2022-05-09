#include <iostream>
using namespace std;
 
int main() {
    
    int N=1; // numero de amostras
    int H[10000]; // amostras
    int picos=1;

    while(N!=0){
        cin >> N;
        if(N!=0){
            for(int i=0; i<N; i++){
                cin >> H[i];
                if((H[i-1]>H[i-2] && H[i]<H[i-1]) || (H[i-1]<H[i-2] && H[i]>H[i-1]))
                    picos++;
            }
            
        }
        
    }

    return 0;
}