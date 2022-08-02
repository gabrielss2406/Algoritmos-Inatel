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

treenodeptr tPesq(treenodeptr p, int x){
	if(p==NULL) // elemento nao encontrado
		return NULL;
	else if(x == p->info) // elemento encontrado na raiz
		return p;
	else if(x < p->info) // procura na subarvore direita
		return tPesq(p->esq,x);
	else // procura na subarvore direito
		return tPesq(p->dir,x);
}

int main(){
	treenodeptr arvore = NULL; // Ponteiro para a raiz
	treenodeptr aux;
	int x; // var aux p/entrada
	int n; // quantidade de nós na arvore
	int busca; // nó a ser buscado
	
	cin >> n;
	// Inserindo termos na arvore
	for(int i=0; i<n; i++){
		cin >> x;
		tInsere(arvore,x);
	}
	
	cin >> busca;
	aux = tPesq(arvore,busca);
	if(aux != NULL)
		cout << "Encontrado" << endl;
	else
		cout << "Nao encontrado" << endl;
	
	return 0;
}