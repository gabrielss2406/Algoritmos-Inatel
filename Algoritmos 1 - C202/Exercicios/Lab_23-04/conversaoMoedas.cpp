#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    // Var
        int code;
        float quant;
        float result;

    // Input
        cin >> quant;
        cin >> code;

    // Verify
        switch(code){
            case 1:
                result = quant * 3.86;
            break;
            case 2:
                result = quant * 3.77;
            break;
            case 3:
                result = quant * 4.41;
            break;
            case 4:
                result = quant * 0.19;
            break;
            case 5:
                result = quant * 5.00;
            break;
        }

    // Output
        cout << fixed << setprecision(2);
        cout << "R$ " << result << endl;

    return 0;
}