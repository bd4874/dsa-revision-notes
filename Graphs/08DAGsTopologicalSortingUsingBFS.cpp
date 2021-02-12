// Topological sorting using BFS 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int v;
    list<int> *adjList;
public:
    Graph(int v) {
        this->v = v;
        adjList = new list<int>[v];
    }
    // Edges are directed
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
    }
    void topological_sort() {
        // To store indegree of all the vertices
        map<int, int> indegree;
        queue<int> q;
        // Make indegree of every vertices as zero first
        for(int i=0; i<v; i++) {
            indegree[i] = 0;
        }
        // Increment indegree of vertices which are dependent
        for(int i=0; i<v; i++) {
            for(auto y: adjList[i])
                indegree[y]++;
        }
        // Take out all the 0 indegree elements in the queue
        for(int i=0; i<v; i++) {
            if(indegree[i]==0)
                q.push(i);
        }
        while(!q.empty()) {
            int node = q.front();
            cout << node << " ";
            q.pop();
            // Decrement indegree of neighbour and if that becomes 0
            // push it in the queue for processing
            for(auto nbr: adjList[node]) {
                indegree[nbr]--;
                if(indegree[nbr]==0) {
                    q.push(nbr);
                }
            }
        }
    }
};

int main() {

    /*
    Below program is for the graph
    0    1
    |  / |
    | /  |
    2    4
    | \  |
    |  \ |
    3----5
    */
    Graph g(6);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(1,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(2,5);
    g.addEdge(3,5);
    g.topological_sort();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
0 1 2 4 3 5 
*/