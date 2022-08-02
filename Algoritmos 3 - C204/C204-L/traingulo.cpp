#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct ponto
{
	float x;
	float y;
};
typedef ponto vetor;

vetor cria_vetor(ponto A, ponto B)
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}

float vetorial(vetor A, vetor B)
{
	float v;
	v = A.x * B.y - A.y * B.x;
	return v;
}


float area_triangulo(ponto A, ponto B, ponto C)
{
	vetor AB;
	vetor AC;
	float area;
	AB = cria_vetor(A, B);
	AC = cria_vetor(A, C);
	area = fabs(vetorial(AB, AC)) / 2;
	return area;
}

int main()
{
    int n; //quantidade de conjunto de pontos]
    float area; //area do triangulo
    ponto pontos[3]; //pontos do triangulo no eixo x-y

    cin >> n;
    cout << fixed << setprecision(2);

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++)
            cin >> pontos[j].x >> pontos[j].y;
        area = area_triangulo(pontos[0],pontos[1],pontos[2]);
        if(area==0)
            cout << "Nao formam triangulo" << endl;
        else
            cout << area << endl;
    }
	
	return 0;
}