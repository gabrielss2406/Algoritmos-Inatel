#include <iostream>
using namespace std;

struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};
typedef treenode* treenodeptr;
// Typedef = onde tiver * substritui por treenodeptr

// Função que insere termos na arvore
void tInsere(treenodeptr &p, int x){
	if(p==NULL){ // insere na raiz
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}else if(x < p->info)
		tInsere(p->esq, x); // Insere na subarvore esquerda
    else
    	tInsere(p->dir, x); // Insere na subarvore direita
}
// Pos-Ordem
void emOrdemInversa (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		emOrdemInversa(arvore->dir);
		cout << arvore->info << " ";
		emOrdemInversa(arvore->esq);
	}
}

int main()
{
	treenodeptr arvore = NULL; // Ponteiro para a raiz
    int x; // aux para entrada

	// Inserindo termos na arvore
	cin >> x;
	while(x != -1){
		tInsere(arvore,x);
		cin >> x;
	}

    // Ordenação contraria
    emOrdemInversa(arvore);

	return 0;
}
