#include <iostream>
using namespace std;

struct treenode{
	   int info;
	   treenode *esq;
	   treenode *dir;	
};
typedef treenode* treenodeptr; // Cria um novo tipo de variavel (treenodeptr = treenode*)

int main(){
	treenodeptr arvore = NULL; // Ponteiro para a raiz
	int x; // var aux p/ inserir dados
	
	// 1. criar nó
	// 2. colocar info
	// 3. apontar os filhos p/ null
	
	x=14;
	arvore = new treenode; // alocando memoria (criou o nó)
	arvore->info = x; // colocou a info
	arvore->esq = NULL;
	arvore->dir = NULL; // apontou filhos para NULL
	
	x=4;
	arvore->esq = new treenode; // Filho esquerdo
	arvore->esq->info = x;
	arvore->esq->esq = NULL;
	arvore->esq->dir = NULL;
	
	x=18;
	arvore->dir = new treenode; // Filho direito
	arvore->dir->info = x;
	arvore->dir->esq = NULL;
	arvore->dir->dir = NULL;
	
	// Mostrando a arvore
	cout << "Raiz: " << arvore->info << endl;
	cout << "Filho esquerdo: " << arvore->esq->info << endl;
	cout << "Filho direito: " << arvore->dir->info << endl;
	
	
	
	return 0;
}