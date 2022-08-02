#include <iostream>
#include <list>
using namespace std;

struct no{
    int v; // destino da aresta
    int peso; // peso da aresta
};

// Função para criar e salvar arestas;
void cria_aresta(list<no>adj[], int u, int v, int p, int orientado){
    no aux; // var aux para inserir arestas nem adj
    aux.v = v;
    aux.peso = p;
    adj[u].push_back(aux);
    if(orientado == 0){ // cria a aresta de volta p/ grafos nao orientados
        aux.v = u;
        adj[v].push_back(aux);
    }
}

int main(){
    list<no> adj[10]; // lista de adjacencia
    int nVertices; // numero de vertices do grafo
    int u,v; // origem e destino de uma aresta
    int p; // peso da aresta u-v
    list<no>::iterator q; // iterador para varrer lista de ajdacencia
    int orientado; // 0: nao orientado , 1: orientado

    // Entrada nVertices e orientado ou não
    cin >> nVertices >> orientado;

    // Lendo e inserindo a lista
    cin >> u >> v >> p;
    while(u!=-1 || v!=-1 || p!=-1){
        cria_aresta(adj,u,v,p,orientado);
        cin >> u >> v >> p;
    }

    // Mostrando a lista de adjacencia
    cout << "Lista de adjacencia: " << endl;
    for(int i=0; i<nVertices; i++)
        for(q=adj[i].begin(); q!=adj[i].end(); q++)
            cout << i << " " << q->v << " " << q->peso << endl;

    return 0;
}