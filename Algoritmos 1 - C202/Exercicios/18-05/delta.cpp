#include <iostream>
#include <iomanip>
using namespace std;
 
float calc_delta(float a, float b, float c){
    float delta;

    delta = (b*b) - (4*a*c);
    
    return delta;
}

int main() {
    int a,b,c;

    cin >> a >> b >> c;
    
    cout << fixed << setprecision(2);
    cout << "delta = " << calc_delta(a,b,c) << endl;

    return 0;
}