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


// Em-Ordem
treenodeptr emOrdem (treenodeptr arvore){
	if (arvore != NULL){
		return emOrdem(arvore->esq);
		cout << arvore->info << endl;
	}
	else{
		
		cout << arvore->info;
		return arvore;
		
	}
}

treenodeptr pMenor(treenodeptr arvore){
	return emOrdem(arvore->esq);
}

int main(){
	treenodeptr arvore = NULL; // Ponteiro para a raiz
	treenodeptr aux;
	int x; // var aux p/entrada
	
	// Inserindo termos na arvore
	cin >> x;
	while(x != -1){
		tInsere(arvore,x);
		cin >> x;
	}
	
	// Contar nós da arvore
	aux = pMenor(arvore);
	cout << aux->info << endl;
	
	return 0;
}