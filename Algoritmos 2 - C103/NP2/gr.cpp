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

// Funcao que verifica se grafo é conexo após passar por bfs
void verificar_conexo(list<no>adj[], int nVertices, char state[]){
    bool conexo = true;

    for(int i=0; i<nVertices; i++){
        if(state[i]=='u')
            conexo=false;
    }
    if(conexo)
        cout << "Conexo" << endl;
    else
        cout << "Nao conexo" << endl;
}
    

// Implementa um percurso em largura em um grafo
void bfs(list<no>adj[], int nVertices, int s)
{
    char state[10];
    int p[10];
    list<int> Q;
    int i;
    int u,v; // vars aux para mostrar os vértices
    list<no>::iterator q; // iterador para varrer a lista de adjacências
    
    for(i=0;i<nVertices;i++)
    {
        state[i] = 'u';
        p[i] = -1;
    }    
    state[s] = 'd';
    p[s] = -1;
    Q.push_back(s);
    while(!Q.empty())
    {
        u = *Q.begin();
        Q.pop_front();
        for(q=adj[u].begin();q!=adj[u].end();q++)
        {
            v = q->v;
            if(state[v]=='u')
            {
                state[v] = 'd';
                p[v] = u;
                Q.push_back(v);
            }
        }
        state[u] = 'p';
    }

    verificar_conexo(adj,nVertices,state);
}

int main(){
    list<no> adj[10]; // lista de adjacencia
    int nVertices; // numero de vertices do grafo
    int u,v; // origem e destino de uma aresta
    int start; // Vértice Inicial

    // Entrada nVertices e vIncial
    cin >> nVertices >> start;

    // Lendo e inserindo a lista
    cin >> u >> v;
    while(u!=-1 || v!=-1){
        cria_aresta(adj,u,v,1,0); //Criação da aresta em grafo não orientado com peso padrao 1
        cin >> u >> v;
    }

    bfs(adj,nVertices,start);
    

    return 0;
}