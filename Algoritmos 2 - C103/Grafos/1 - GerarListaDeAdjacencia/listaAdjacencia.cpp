#include <iostream>
#include <list>
using namespace std;

struct no{
    int v; // destino da aresta
    int peso; // peso da aresta
};

int main(){
    list<no> adj[10]; // lista de adjacencia
    int nVertices=4; // numero de vertices do grafo
    int u,v; // origem e destino de uma aresta
    int p; // peso da aresta u-v
    no aux; // var aux para inserir arestas nem adj
    list<no>::iterator q; // iterador para varrer lista de ajdacencia
    int orientado = 1; // 0: nao orientado , 1: orientado

    // Lendo e inserindo a lista
    for(int i=0; i<4; i++){
        cin >> u >> v >> p;
        aux.v = v;
        aux.peso = p;
        adj[u].push_back(aux);
        if(orientado == 0){ // cria a aresta de volta p/ grafos nao orientados
            aux.v = u;
            adj[v].push_back(aux);
        }
    }

    // Mostrando a lista de adjacencia
    cout << "Lista de adjacencia: " << endl;
    for(int i=0; i<nVertices; i++)
        for(q=adj[i].begin(); q!=adj[i].end(); q++)
            cout << i << " " << q->v << " " << q->peso << endl;

    return 0;
}