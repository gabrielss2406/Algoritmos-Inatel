#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int rabin_karp(char T[], char P[], int tamT, int tamP, int d, int q, int &contador) //!!! d = Cardinalidade
{
	int h; // valor utilizado para calculo de hash
	int p = 0; // padrao convertido para inteiro
	int t = 0; // texto convertido para inteiro
    int ultimo=0; // ultimo local que o padrao foi encontrado

	for(int i = 0; i < tamP; i++)
	{
		p = (d * p + (P[i]-'0')) % q; // converte o padrao
		t = (d * t + (T[i]-'0')) % q; // converte o texto para o primeiro valor (t0)
	}
	
	h = (int)pow(d, tamP - 1) % q; // utilizado para calculo de hash
	
	for(int i = 0; i <= tamT - tamP; i++)
	{
		if(p == t) // Se encontrei um valor de hash valido
		{
			// Verifico se ha diferencas
			int j;
			for(j = 0; j < tamP; j++)
			{
				if(P[j] != T[i + j])
				{
					break;
				}
			}

			if(j == tamP){
                contador++;
                ultimo=i;
            }
		}

		if(i < tamT - tamP) // se ainda nao cheguei no final
		{
			t = (d * ( t - (T[i]-'0') * h ) + (T[i + tamP]-'0')) % q; // atualizo o ti para ti+1
			if(t < 0) t += q;
		}
	}
    return ultimo;
}

int main()
{
    int M,N; // tamanho do texto (M) e do padrão (N)
    char texto[100];
    char padrao[100];
    int ocorrencias=0; // contador de ocorrencias do padrao
    int ultimo; // retorno da função rabin_karp

    cin >> M >> N;
    cin.ignore();
    for(int i=0; i<M; i++)
        cin >> texto[i];
    for(int i=0; i<N; i++)
        cin >> padrao[i];

    ultimo = rabin_karp(texto,padrao,M,N,10,13,ocorrencias);

    if(ocorrencias!=0){
        cout << "Ultima ocorrencia: " << ultimo << endl;
    }
    cout << ocorrencias << " ocorrencia(s)" << endl;
	
	return 0;
}