// Generic Implementation 
// Author: REET

#include <iostream>
#include <map>
#include <list>
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
};

int main() {

    Graph<string> g;
    g.addEdge("Putin", "Trump", false);
    g.addEdge("Putin", "Modi", false);
    g.addEdge("Putin", "Pope", false);
    g.addEdge("Trump", "Modi", true);
    g.addEdge("Modi", "Yogi", true);
    g.addEdge("Prabhu", "Modi", false);
    g.addEdge("Yogi", "Prabhu", false);
    g.printAdjList();

    
    cout << "\ng2 adjList:\n";
    /*
    Below program is for the graph
    0------1
    |    / |\
    |   /  | \
    |  /   |  2
    | /    | /
    |/     |/
    4------3
    */
    Graph<int> g2;
    g2.addEdge(0,4, true);
    g2.addEdge(0,1, true);
    g2.addEdge(1,4, true);
    g2.addEdge(1,3, true);
    g2.addEdge(1,2, true);
    g2.addEdge(2,3, true);
    g2.addEdge(3,4, true);
    g2.printAdjList();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Modi->Trump Yogi 
Prabhu->Modi
Putin->Trump Modi Pope 
Trump->Modi
Yogi->Modi Prabhu 

g2 adjList:
0->4 1 
1->0 4 3 2
2->1 3
3->1 2 4 
4->0 1 3
*/