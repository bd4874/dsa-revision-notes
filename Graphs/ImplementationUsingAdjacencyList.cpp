// Graph Implementation Using Adjacency List 
// Author: REET

/*
We need array of linked lists, and 
number of vertices is known as runtime.
So we need to dynamically create array
of linked lists.
Just as the way we create array of int
by writing int *t = new int[n];
In a similar fashion, we need to create
array of linked list.
For this purpose, we need to write,
list<int> *l = new list<int> [v];

Below program is for the graph
    0------1
    |    / |\
    |   /  | \
    |  /   |  2
    | /    | /
    |/     |/
    4------3
*/

#include <iostream>
#include <list>
using namespace std;

class Graph {
private:
    int V; // No. of vertices
    list<int> *l;

public:
    Graph(int v) {
        V = v;
        // Array of linked lists
        l = new list<int> [V];
    }
    void addEdge(int u, int v, bool bidir=true) {
        l[u].push_back(v);
        if(bidir) l[v].push_back(u);
    }
    void printAdjList() {
        for(int i=0; i<V; i++) {
            cout << i << "-> ";
            for(auto vertex: l[i]) {
                cout << vertex << " ";
            }
            cout << "\n";
        }
    }
};

int main() {

    // Graph has 5 vertices
    Graph g(5);
    g.addEdge(0,4);
    g.addEdge(0,1);
    g.addEdge(1,4);
    g.addEdge(1,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.printAdjList();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
0-> 4 1 
1-> 0 4 3 2
2-> 1 3
3-> 1 2 4
4-> 0 1 3
*/