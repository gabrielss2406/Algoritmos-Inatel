#include <iostream>
using namespace std;
 
int main() {
    
    int M,N;
    int valorTemp;

    cin >> M >> N;

    for(int i=0; i<M; i++){
        cin >> valorTemp;
        for(int i=0; i<N; i++){
            cout << valorTemp << " ";
        }
    }

    return 0;
}