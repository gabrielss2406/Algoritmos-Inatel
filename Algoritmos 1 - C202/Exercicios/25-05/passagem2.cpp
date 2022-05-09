#include <iostream>
#include <iomanip>
using namespace std;

void converte(float F, float &C, float &K){
    C = 5.0/9.0*(F-32);
    K = C+273;
}

int main() {
    
    float fahrenheit,celsius, kelvin;

    cin >> fahrenheit;
    converte(fahrenheit,celsius,kelvin);

    cout << fixed << setprecision(2);
    cout << "Celsius: " << celsius << "\nKelvin: " << kelvin << endl;

    return 0;
}