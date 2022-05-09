#include <iostream>
using namespace std;

void tabuada(){
    int N; // Valor N
    cin >> N;

    for(int i=1; i<=10; i++){
        cout << N << " x " << i << " = " << (N*i) << endl;
    }
}

int main() {

    tabuada();

    return 0;
}