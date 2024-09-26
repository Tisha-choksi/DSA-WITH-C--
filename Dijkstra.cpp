#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

typedef pair<int,int> myPair;
class Graph{
    int V;
    list<myPair> *adj;
public:
    Graph(int V);
    void addEdge(int u,int v,int w);
    void shortestPath(int src);
};
Graph::Graph(int V){
    this->V = V;
    adj = new list<myPair>[this->V];
}
void Graph::addEdge(int u,int v,int w){
    //adj[u].push_back(makepair(v,w));
    //adj[v].push_back(makepair(u,w));
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}
//Dijkstra
void Graph::shortestPath(int src){
    //pair<peso,label>
    priority_queue<myPair,vector<myPair>,greater<myPair> > pq;
    vector<int> dist(this->V,INF);
    dist[src] = 0;
    list<myPair>::iterator it;

    pq.push({0,src});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        for(it = adj[u].begin();it!=adj[u].end();++it){
            int v = it->first;
            int w = it->second;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({dist[v],v});
            }
        }
    }

    //Print single-source shortest paths
    for(int i=0;i<this->V;i++){
        cout << i << " - " << dist[i] << endl;
    }
}
int main(){
    int V = 5;
    Graph g(V);
    /**
    Agregar aristas
    g.addEdge(a,b,w);
    */
    int src = 0;
    g.shortestPath(src);
    return 0;
}
