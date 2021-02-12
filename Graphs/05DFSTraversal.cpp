//  
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
    }
    void dfs_helper(T src, map<T, bool> &visited) {
        cout << src << " ";
        visited[src] = true;
        for(auto nbr: adjList[src]) {
            if(!visited[nbr])
                dfs_helper(nbr, visited);
        }
    }
    void dfs(T src){
        map<T, bool> visited;
        for(auto node_pair: adjList) {
            visited[node_pair.first] = false;
        }
        dfs_helper(src, visited);
    }
};

int main() {
    /*
    Below program is for the graph
    1------2
    |      |\
    |      | \
    |      |  3-----5
    |      | /
    |      |/
    0------4
    */
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(2,4);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(3,5);
    g.dfs(0);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
0 1 2 4 3 5 
*/