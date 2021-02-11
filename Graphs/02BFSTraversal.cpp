// Breadth First Search(BFS) Traversal 
// Author: REET

#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;
#define pb push_back

template<typename T>
class Graph {
private:
    map<T, list<T>> adjList;
public:
    void addEdge(T u, T v, bool bidir) {
        adjList[u].pb(v);
        if(bidir) {
            adjList[v].pb(u);
        }
    }
    void printAdjList() {
        for(auto obj: adjList) {
            cout << obj.first << "->";
            for(auto entry: obj.second) {
                cout << entry << " ";
            }
            cout << "\n";
        }
    }
    void bfs(T src) {
        map<T, bool> visited;
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while(!q.empty()) {
            T node = q.front();
            cout << node << " ";
            q.pop();
            // Find out the neighbours which are not visited
            for(int neighbour :adjList[node]) {
                if(!visited[neighbour]) {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
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
    Graph<int> g2;
    g2.addEdge(0,1, true);
    g2.addEdge(0,4, true);
    g2.addEdge(1,2, true);
    g2.addEdge(2,4, true);
    g2.addEdge(2,3, true);
    g2.addEdge(3,4, true);
    g2.addEdge(3,5, true);
    cout << "Adjacency List:\n";
    g2.printAdjList();
    cout << "\nBFS:\n";
    g2.bfs(0);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Adjacency List:
0->1 4
1->0 2
2->1 4 3
3->2 4 5
4->0 2 3
5->3

BFS:
0 1 4 2 3 5
*/