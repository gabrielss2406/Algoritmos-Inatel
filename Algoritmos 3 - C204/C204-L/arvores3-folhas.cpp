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
void posOrdem (treenodeptr arvore, int &cont)
{
	if (arvore != NULL)
	{
		posOrdem(arvore->esq, cont);
		posOrdem(arvore->dir, cont);
		if(arvore->esq==NULL && arvore->dir==NULL)
            cont++;
	}
}

int main()
{
	treenodeptr arvore = NULL; // Ponteiro para a raiz
    int x; // aux para entrada
    int cont=0; //contador de folhas

	// Inserindo termos na arvore
	cin >> x;
	while(x != -1){
		tInsere(arvore,x);
		cin >> x;
	}

    // Contar folha
    posOrdem(arvore,cont);
    cout << cont << endl;

	return 0;
}
