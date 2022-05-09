#include <iostream>
using namespace std;

// Verificao Primo ou Not
int testePrimo(int x){
    bool primo = true;

    if(x==1)
        primo = false;
    else if(x%2==0 && x!=2)
        primo = false;
    else if(x%3==0 && x!=3)
        primo = false;
    else if(x%5==0 && x!=5)
        primo = false;
    else if(x%7==0 && x!=7)
        primo = false;

    return primo;
}

int main() {
    
    int x; // Valor x
    cin >> x;

    if(testePrimo(x))
        cout << "Primo" << endl;
    else
        cout << "Not" << endl;

    return 0;
}