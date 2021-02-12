// SSSP->Single Source Shortest Path 
// Author: REET

#include <bits/stdc++.h>
#define pb push_back

using namespace std;

template<typename T>
class Graph {
private:
    map<T, list<T>> adjList;
    map<T, int> dist;
public:
    Graph() {}
    void addEdge(T u, T v) {
        adjList[u].pb(v);
        adjList[v].pb(u);
    }
    void bfs(T src) {
        queue<int> q;
        q.push(src);
        for(auto node_pair: adjList) {
            dist[node_pair.first] = INT_MAX;
        }
        dist[src] = 0;
        while(!q.empty()) {
            T node = q.front();
            q.pop();
            for(auto nbr: adjList[node]) {
                if(dist[nbr]==INT_MAX) {
                    q.push(nbr);
                    dist[nbr] = dist[node]+1;
                }
            }
        }
    }
    void printAdjList() {
        cout << "Adjacency List:\n";
        for(auto node_pair: adjList) {
            cout << node_pair.first << "-> ";
            for(auto nbr: node_pair.second) {
                cout << nbr << " ";
            }
            cout << "\n";
        }
    }
    void printDist() {
        for(auto node_pair: adjList) {
            T node = node_pair.first;
            int d = dist[node];
            cout << "Node " << node << " distance from src: " << d << "\n";
        }
    }
};

int main() {


    /*
    Below program is for the graph
    0------3-----4
    |      |     |
    |      |     |
    |      |     5
    |      |
    |      |
    1------2
    */
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.bfs(0);
    g.printAdjList();
    cout << "\n";
    g.printDist();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Adjacency List:
0-> 1 3
1-> 0 2
2-> 1 3 
3-> 0 2 4
4-> 3 5
5-> 4 

Node 0 distance from src: 0
Node 1 distance from src: 1
Node 2 distance from src: 2
Node 3 distance from src: 1
Node 4 distance from src: 2
Node 5 distance from src: 3
*/