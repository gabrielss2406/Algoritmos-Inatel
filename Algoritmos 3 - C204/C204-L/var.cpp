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

float escalar(vetor A, vetor B)
{
	float e;
	e = A.x * B.x + A.y * B.y;
	return e;
}

int sentido(ponto A, ponto B, ponto C)
{
	// 1 -> direita, -1 -> esquerda, 0 -> colinear
	vetor AB;
	vetor AC;
	int vet;
	AB = cria_vetor(A, B);
	AC = cria_vetor(A, C);
	vet = vetorial(AB, AC);
	if(vet > 0)
		return 1;
	else if(vet == 0)
		return 0;
	else
		return -1;
}

int main()
{
	ponto t1, t2, b; // coordenadas das traves e da bola
	int gol; // -1 -> gol, 0 ou 1 não gol
	
	// entradas
	cin >> t1.x >> t1.y >> t2.x >> t2.y >> b.x >> b.y;

	gol = sentido(t1,t2,b);
	if(gol==1)
		cout << "GOL!" << endl;
	else
		cout << "NAO GOL!" << endl;
	
	return 0;
}