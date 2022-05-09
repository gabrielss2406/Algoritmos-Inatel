#include <iostream>
using namespace std;

int main(){
    int cont=0;
    int n/* = 64*/;
    int i=1;
    cin >> n;
    while(i<=n)
    {
        //foo();
        i = i*2;
        cont++;
    }

    cout << cont << " vezes" << endl;

    return 0;
}