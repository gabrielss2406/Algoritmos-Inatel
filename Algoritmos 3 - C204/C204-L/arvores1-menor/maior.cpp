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

// Menor termo da arvore
treenodeptr pMenor(treenodeptr arvore){
	if(arvore->esq == NULL)
        return arvore;
    else
        return pMenor(arvore->esq);
}

// Maior termo da arvore
treenodeptr pMaior(treenodeptr arvore){
    if(arvore->dir == NULL)
        return arvore;
    else
        return pMaior(arvore->dir);
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
	cout << pMenor(arvore)->info << " e " << pMaior(arvore)->info << endl;
	
	return 0;
}