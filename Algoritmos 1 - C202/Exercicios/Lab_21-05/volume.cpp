#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
// Calculo Volume
float volume(float r){
    float volume;
    volume = 4.0/3.0*3.14*(r*r*r);
    return volume;
}

int main() {
    
    float raio;
    cin >> raio;

    cout << fixed << setprecision(2);
    cout << volume(raio) << endl;

    return 0;
}