// Find total number of connected components using DFS
// Author: REET

#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph {
private:
    map<T, list<T>> adjList;
public:
    void addEdge(T u, T v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    void dfs_helper(T src, map<T, bool> &visited) {
        cout << src << " ";
        visited[src] = true;
        for(auto nbr: adjList[src]) {
            if(!visited[nbr])
                dfs_helper(nbr, visited);
        }
    }
    void dfs(){
        int cnt = 1;
        map<T, bool> visited;
        for(auto node_pair: adjList) {
            int node = node_pair.first;
            visited[node] = false;
        }
        for(auto node_pair: adjList) {
            int node = node_pair.first;
            if(!visited[node]) {
                cout << cnt << ": ";
                dfs_helper(node, visited);
                cout << "\n";
                cnt++;
            }
        }
    }
};

int main() {
    /*
    Below program is for the graph
    1------2
    |      |
    |      |
    |      |        3-----5
    |      |   6
    |      |
    0------4
    */
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(2,4);
    g.addEdge(3,5);
    g.addEdge(6,6);
    g.dfs();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
1: 0 1 2 4 
2: 3 5 
3: 6
*/