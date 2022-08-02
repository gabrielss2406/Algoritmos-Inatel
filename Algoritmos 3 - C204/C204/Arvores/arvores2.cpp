#include <iostream>
using namespace std;

struct treenode{
	   int info;
	   treenode *esq;
	   treenode *dir;	
};
typedef treenode* treenodeptr; // Cria um novo tipo de variavel (treenodeptr = treenode*)

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

int main(){
	treenodeptr arvore = NULL; // Ponteiro para a raiz
	
	// Inserindo termos na arvore
	tInsere(arvore,14);
	tInsere(arvore,18);
	tInsere(arvore,4);
	tInsere(arvore,5);
	
	// Mostrando a arvore
	cout << "Raiz: " << arvore->info << endl;
	cout << "Filho esquerdo: " << arvore->esq->info << endl;
	cout << "Filho direito: " << arvore->dir->info << endl;
	cout << arvore->esq->dir->info << endl;
	
	return 0;
}