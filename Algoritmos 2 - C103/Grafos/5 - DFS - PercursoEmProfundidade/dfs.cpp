#include <iostream>
#include <list>
using namespace std;

struct no{
    int v; // destino da aresta,
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

// Função para mostrar a ordenação topológica deste grafo
void ordenacao_topologica(int f[], int nVertices){
    int maior=9999;
    int aux;
    int ordemP[10];


    for(int i=0; i<nVertices; i++){
        aux = 0;
        ordemP[i] = i;
        for(int j=0; j<nVertices; j++){
            if(f[j]>aux && f[j]<maior){
                ordemP[i] = j;
                aux = f[j];
            }
        }
        maior = aux;
    }

    for(int i=0; i<nVertices; i++)
        cout << ordemP[i]  << " ";
}
// Funcao auxiliar ao dfs
void dfs_visit(list<no>adj[], int &time, int color[], int u, int nVertices, int pi[], int f[]){
    int d[10];
    list<no>::iterator p;

    color[u] = 1;
    time++;
    d[u] = time;

    for(p=adj[u].begin(); p!=adj[u].end(); p++){
        if(color[p->v]==0){
            pi[p->v] = u;
            dfs_visit(adj,time,color,p->v,nVertices,pi,f);
        }
    }

    color[u] = 2;
    time++;
    f[u] = time;
}

// Função para implementar o percurso em profundidade
void dfs(list<no>adj[], int nVertices){
    int color[10]; // 0 WHITE, 1 GRAY, 2 BLACK
    int pi[10];
    int time = 0;
    int f[10];

    for(int i=0; i<nVertices; i++){
        color[i] = 0;
        pi[i] = -1; // -1 NULL
    }

    time=0;

    for(int i=0; i<nVertices; i++){
        if(color[i]==0)
            dfs_visit(adj,time,color,i,nVertices,pi,f);
    }

    ordenacao_topologica(f,nVertices);
}

int main(){
    list<no> adj[10]; // lista de adjacencia
    int nVertices; // numero de vertices do grafo
    int u,v; // origem e destino de uma aresta
    list<no>::iterator q; // iterador para varrer lista de ajdacencia
    int orientado; // 0: nao orientado , 1: orientado

    // Entrada nVertices e orientado ou não
    cin >> nVertices >> orientado;

    // Lendo e inserindo a lista
    cin >> u >> v;
    while(u!=-1 || v!=-1){
        cria_aresta(adj,u,v,1,orientado);
        cin >> u >> v;
    }

    dfs(adj,nVertices);

    return 0;
}