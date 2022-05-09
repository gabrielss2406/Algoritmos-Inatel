#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    
    char palavra[3][50];

    cin.getline(palavra[0],50);
    cin.getline(palavra[1],50);
    cin.getline(palavra[2],50);

    if( strcmp(palavra[0],palavra[1]) < 0 && strcmp(palavra[0],palavra[2]) < 0 ){
        cout << palavra[0] << " ";
        if(strcmp(palavra[1],palavra[2]) < 0){
            cout << palavra[1] << " " << palavra[2];
        }else{
            cout << palavra[2] << " "  << palavra[1];
        }
    } else if( strcmp(palavra[1],palavra[0]) < 0 && strcmp(palavra[1],palavra[2]) < 0 ){
        cout << palavra[1] << " " ;
        if(strcmp(palavra[0],palavra[2]) < 0){
            cout << palavra[0] << " "  << palavra[2];
        }else{
            cout << palavra[2] << " "  << palavra[0];
        }
    } else if( strcmp(palavra[2],palavra[1]) < 0 && strcmp(palavra[2],palavra[0]) < 0 ){
        cout << palavra[2] << " " ;
        if(strcmp(palavra[0],palavra[1]) < 0){
            cout << palavra[0] << " "  << palavra[1];
        }else{
            cout << palavra[1] << " "  << palavra[0];
        }
    }
        
    cout << endl;
    return 0;
}