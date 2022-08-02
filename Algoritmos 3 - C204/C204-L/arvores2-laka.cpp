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

// Pré-Ordem
void preOrdem (treenodeptr arvore, int &cont, int search, bool &aux)
{
	if (arvore != NULL)
	{
		if(arvore->info==search)
            aux=true;
        if(!aux)
            cont++;
		preOrdem(arvore->esq, cont, search, aux);
		preOrdem(arvore->dir, cont, search, aux);
	}
}
// Em-Ordem
void emOrdem (treenodeptr arvore, int &cont, int search, bool &aux)
{
	if (arvore != NULL)
	{
		emOrdem(arvore->esq, cont, search, aux);
		if(arvore->info==search)
            aux=true;
        if(!aux)
            cont++;
		emOrdem(arvore->dir, cont, search, aux);
	}
}
// Pos-Ordem
void posOrdem (treenodeptr arvore, int &cont, int search, bool &aux)
{
	if (arvore != NULL)
	{
		posOrdem(arvore->esq, cont, search, aux);
		posOrdem(arvore->dir, cont, search, aux);
		if(arvore->info==search)
            aux=true;
        if(!aux)
            cont++;
	}
}

int main()
{
	treenodeptr arvore = NULL; // Ponteiro para a raiz
    int contPre=0;
    int contEm=0;
    int contPos=0; // Contadores de todas as funções
    int x; // aux para entrada
    int search; // pesquisa a ser realizada
    bool aux=false;

	// Inserindo termos na arvore
	cin >> x;
	while(x != -1){
		tInsere(arvore,x);
		cin >> x;
	}
    cin >> search;

	// Testes do percurso
    preOrdem(arvore, contPre, search, aux);
    aux=false;
    emOrdem(arvore, contEm, search, aux);
    aux=false;
    posOrdem(arvore, contPos, search, aux);

	// Saidas
    if(contPre<contEm){
        if(contPre<contPos)
            cout << "Pre" << endl;
        else
            cout << "Pos" << endl;
    }
    else{
        if(contEm<contPos)
            cout << "Em" << endl;
        else
            cout << "Pos" << endl;
    }

	return 0;
}
