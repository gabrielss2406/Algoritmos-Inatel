#include <iostream>
using namespace std;
 
int main() {
    
    int m,n; // matriz m x n
    cin >> m >> n;

    int matriz[20][20];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}