#include <iostream>
using namespace std;
/*----------------------------------------------------------------------------*/
struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};
typedef treenode* treenodeptr;
// Typedef = onde tiver * substritui por treenodeptr
/*----------------------------------------------------------------------------*/
// Pré-Ordem
void preOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		cout << arvore->info << endl;
		preOrdem(arvore->esq);
		preOrdem(arvore->dir);
	}
}
/*----------------------------------------------------------------------------*/
// Em-Ordem
void emOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		emOrdem(arvore->esq);
		cout << arvore->info << endl;
		emOrdem(arvore->dir);
	}
}
/*----------------------------------------------------------------------------*/
void posOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		posOrdem(arvore->esq);
		posOrdem(arvore->dir);
		cout << arvore->info << endl;
	}
}

/*----------------------------------------------------------------------------*/
int main()
{
	setlocale(LC_ALL, "Portuguese");
	treenodeptr arvore = NULL; // Ponteiro para a raiz
	treenodeptr aux;

	// Inserindo dados na árvore


	// Percurso pré-ordem

	// Percurso em-ordem

	// Percurso pós-ordem

	return 0;
}
