#include <iostream>
using namespace std;

void teste2(int vec[]){
    vec[0] = 3;
}

void teste(int vec[]){
    vec[0] = 2;
    teste2(vec);
}

int main(){
    int vec[10];

    vec[0] = 1;

    teste(vec);

    cout << vec[0];

    return 0;
}