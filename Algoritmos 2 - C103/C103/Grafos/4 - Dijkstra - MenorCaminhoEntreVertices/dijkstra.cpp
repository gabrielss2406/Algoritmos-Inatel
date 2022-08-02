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

// Busca do menor caminho start - end
void dijkstra(list<no>adj[], int nVertices, int start, int end){
    // Busca dos caminhos possiveis

    bool intree[nVertices]; // Ja passado (na arvore)
    int distance[nVertices];
    int parent[nVertices]; // ligação, de onde vem a aresta
    int v; // var aux

    int dist; // aux para distancia
    int destino; // destino da aresta
    int weight; // peso da aresta

    int custo=0;

    for(int i=0; i<nVertices; i++){
        intree[i] = false;
        distance[i] = INT_MAX;
        parent[i] = -1;
    }

    distance[start] = 0;
    v = start;

    list<no>::iterator p;
    while(intree[v]==false){
        intree[v] = true;

        for(p=adj[v].begin(); p!=adj[v].end(); p++){
            destino = p->v;
            weight = p->peso;
            if(distance[destino]>distance[v]+weight){
                distance[destino]=distance[v]+weight;
                parent[destino]=v;
            }
        }
        v = 0;
        dist = INT_MAX;
        for(int i=0; i<nVertices; i++){
            if(intree[i]==false && dist>distance[i]){
                dist = distance[i];
                v = i;
            }
        }
    }

    // Determinação do melhor caminho
    list<int> pilha;
    int pai;

    pilha.push_front(end);
    pai = end;
    while(pai!=start){
        pai = parent[pai];
        pilha.push_front(pai);
    }

    // Saida do caminho
    list<int>::iterator q;

    cout << "Menor caminho:";
    for(q=pilha.begin(); q!=pilha.end(); q++){
        cout << " " << *q;
        custo = distance[*q]; // Custo total parcial;
    }
    cout << "\nCusto: " << custo << endl;
}


int main(){
    list<no> adj[10]; // lista de adjacencia
    int nVertices; // numero de vertices do grafo
    int orientado; // 0: nao orientado , 1: orientado
    int vInicial; // vertice inicial do caminho
    int vFinal; // vertice final do caminho

    int u,v; // origem e destino de uma aresta
    int p; // peso da aresta u-v

    // Entrada nVertices e orientado ou não
    cin >> nVertices >> orientado >> vInicial >> vFinal;

    // Lendo e inserindo a lista
    cin >> u >> v >> p;
    while(u!=-1 || v!=-1 || p!=-1){
        cria_aresta(adj,u,v,p,orientado);
        cin >> u >> v >> p;
    }

    // Caminho de menor custo
    dijkstra(adj,nVertices,vInicial,vFinal);

    return 0;
}