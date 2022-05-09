#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// Estrutura da entrada
struct EntradaStruct
{
	int processo; // Numero do processo
	int tempoExec; // Tempo de execução (ms)
	int prioridade; // Prioridade da execucao
};


int main()
{

	EntradaStruct entrada[100]; // Entrada de dados

	ifstream arq; // Arquivo
	char nomeArq[50]; // Nome do arquivo a ser lido

	int contador = 0; // Quantidade de entradas
	int menorPrioridade; // Variavel auxiliar para organização dos dados
	int temp[3]; // Variavel auxiliar para organização dos dados
	int somaTotal = 0; // Soma total do tempo de espera
	int soma = 0; // Soma auxiliar
	float media; // Tempo medio de espera

	// Entrada de dados
	cin >> nomeArq;
	arq.open(nomeArq, ifstream::in); // Entrada de arquivo
	while(!arq.eof())
	{
		// Leitura do arquivo
		arq >> entrada[contador].processo;
		arq >> entrada[contador].tempoExec;
		arq >> entrada[contador].prioridade;

		contador++;
	}
	arq.close(); // Fechar arquivo

	// Organização dos dados (prioridade)
	for (int j = 0; j < (contador); j++)
	{
		for (int i = j; i < (contador); i++)
		{
			if(i == j)
				menorPrioridade = entrada[i].prioridade;
			else if(entrada[i].prioridade < menorPrioridade)
			{
				menorPrioridade = entrada[i].prioridade;
				temp[0] = entrada[i].processo;
				temp[1] = entrada[i].tempoExec;
				temp[2] = entrada[i].prioridade;
				entrada[i].processo = entrada[j].processo;
				entrada[i].tempoExec = entrada[j].tempoExec;
				entrada[i].prioridade = entrada[j].prioridade;

				entrada[j].processo = temp[0];
				entrada[j].tempoExec = temp[1];
				entrada[j].prioridade = temp[2];
			}
		}
	}

	// Saida
	// Identificação dos processos na ordem em que eles são executados
	for (int i = 0; i < (contador); i++)
	{
		cout << "P" << entrada[i].processo;
		for (int c = 0; c < entrada[i].tempoExec; c++)
		{
			cout << "-";
		}
	}

	// Calcule e mostre o tempo de espera médio
	for (int i = 0; i < contador - 1; i++)
	{
		soma += entrada[i].tempoExec;
		somaTotal += soma;
	}
	media = (float) somaTotal / contador;

	cout << fixed << setprecision(1);
	cout << "\nTempo medio de espera: " << media << " ms" << endl;

	return 0;
}
