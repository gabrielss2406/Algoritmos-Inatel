#include <iostream>
#include <iomanip>
using namespace std;

void troca(int &X, int &Y){
    int bX = X;
    X = Y;
    Y = bX;
}

int main() {
    
    int x,y;

    cin >> x >> y;
    troca(x,y);

    cout << x << " " << y << endl;

    return 0;
}