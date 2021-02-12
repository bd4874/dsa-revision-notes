// Detect loop in a undirected graph 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int v;
    list<int> *l;
public:
    Graph(int v) {this->v = v; l = new list<int>[v];}
    void addEdge(int u, int v) {
        l[u].push_back(v);
    }
    bool isTree() {
        bool *visited = new bool[v];
        int *parent = new int[v];
        for(int i=0; i<v; i++) {
            visited[i] = false;
            parent[i] = i;
        }
        queue<int> q;
        int src = 0;
        visited[src] = true;
        q.push(src);
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            for(int nbr: l[node]) {
                if(visited[nbr] and parent[node]!=nbr) {
                    return false;
                }
                else if(!visited[nbr]) {
                    visited[nbr] = true;
                    parent[nbr] = node;
                    q.push(nbr);
                }
            }
        }
        return true;
    }
};

int main() {

    /*
    Below program is for the graph
    0---1
    |   |
    3---2
    */
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(3, 2);
    g.addEdge(1, 2);
    g.addEdge(0, 3);
    cout << (g.isTree() ? "YES\n" : "NO\n");
    /*
    Below program is for the graph
    0   1
    |   |
    3---2
    */
    Graph g2(4);
    g2.addEdge(3, 2);
    g2.addEdge(1, 2);
    g2.addEdge(0, 3);
    cout << (g2.isTree() ? "YES\n" : "NO\n");
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
NO
YES
*/