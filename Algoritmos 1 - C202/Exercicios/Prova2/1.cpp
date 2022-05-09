#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Struct Entrada
struct ponto{
    float x; // coordenada x do ponto
    float y; // coordenada y do ponto 
};

// Funcao que faz a conversão de cada ponto para coordenadas polares
void retpolar(ponto r, float &mag, float &fase){
    mag = sqrt( (r.x*r.x)+(r.y*r.y) );
    fase = atan(r.y/r.x);
}

int main() {

    // Variaveis
        ponto cord[100]; // Cordenadas do ponto
        int N; // Corresponde ao número de pontos
        float magnitude; // Magnitude (polar)
        float fase; // Fase (polar)

    // Entrada
        cin >> N;
        for(int i=0; i<N; i++){ // N linhas seguintes
            cin >> cord[i].x;
            cin >> cord[i].y;
        }

    // Saida / Calculos
        cout << fixed << setprecision(4);

        for(int i=0; i<N; i++){
            retpolar(cord[i],magnitude,fase); // Calculo
            cout << "magnitude: " << magnitude << endl;
            cout << "fase: " << fase << endl;
        }

    return 0;
}