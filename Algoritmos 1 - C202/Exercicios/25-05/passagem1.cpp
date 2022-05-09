#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
// Calculo da media geometrica
void media(int x, int y, float &m){
    m = sqrt(x*y);
}

int main() {
    
    int x,y;
    float mediaG;

    cin >> x >> y;
    media(x,y,mediaG);

    cout << fixed << setprecision(2);
    cout << "Media: " << mediaG << endl;

    return 0;
}