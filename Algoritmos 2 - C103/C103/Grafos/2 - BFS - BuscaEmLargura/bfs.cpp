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

// Função Busca em largura
void bfs(list<no>adj[], int nVertices, int s){
    int state[nVertices];
    int p[nVertices];
    int u;
    int v;

    for(int u=0; u<nVertices; u++)
        if(u != s){
            state[u] = -1; //undiscovered
            p[u] = -1;
        }
    
    list<int> Q;
    state[s] = 0; // discovered
    p[s]=-1;
    Q.push_back(s);

    list<no>::iterator it;
    while(!Q.empty()){
        u = Q.front();
        Q.pop_front();
        cout << u << endl;
        for(it=adj[u].begin(); it!=adj[u].end(); it++){
            v = it->v;
            cout << u << " " << v << endl;
            if(state[v] == -1){
                state[v]=0; //discovered
                p[v]=u;
                Q.push_back(v);
            }
        }
        state[u]=1; //processed
    }
}



int main(){
    list<no> adj[10]; // lista de adjacencia
    int nVertices; // numero de vertices do grafo
    int u,v; // origem e destino de uma aresta
    int p; // peso da aresta u-v
    list<no>::iterator q; // iterador para varrer lista de ajdacencia
    int vIncial; // Vértice Inicial

    // Entrada nVertices e vIncial
    cin >> nVertices >> vIncial;

    // Lendo e inserindo a lista
    cin >> u >> v >> p;
    while(u!=-1 || v!=-1 || p!=-1){
        cria_aresta(adj,u,v,p,0);
        cin >> u >> v >> p;
    }

    bfs(adj,nVertices,vIncial);
    

    return 0;
}