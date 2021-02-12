// Directed Acyclic Graph
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
    void dfs_helper(T node, map<T, bool> &visited, list<T> &ordering) {
        visited[node] = true;
        for(auto nbr: adjList[node]) {
            if(!visited[nbr])
                dfs_helper(nbr, visited, ordering);
        }
        ordering.push_front(node);
        return;
    }
    void dfs(){
        map<T, bool> visited;
        list<T> ordering;
        for(auto node_pair: adjList) {
            T node = node_pair.first;
            visited[node] = false;
        }
        for(auto node_pair: adjList) {
            T node = node_pair.first;
            if(!visited[node])
                dfs_helper(node, visited, ordering);
        }
        for(auto node: ordering)
            cout << node << "\n";
    }
};

int main() {
    /*
    Below program is for the graph
            Python----->DataPreprocessing
            |    |     |
            v    v     |
         PyTorch ML<----
           |      |
           v      v
         DeepLearning  DataSet
              |         |
              v         v
            FaceRecognition
    */
    Graph<string> g;
    g.addEdge("Python", "DataPreprocessing");
    g.addEdge("Python", "PyTorch");
    g.addEdge("Python", "ML");
    g.addEdge("DataPreprocessing", "ML");
    g.addEdge("PyTorch", "DeepLearning");
    g.addEdge("ML", "DeepLearning");
    g.addEdge("DeepLearning", "FaceRecognition");
    g.addEdge("DataSet", "FaceRecognition");
    g.dfs();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Python
PyTorch
DataSet
DataPreprocessing
ML
DeepLearning
FaceRecognition
*/