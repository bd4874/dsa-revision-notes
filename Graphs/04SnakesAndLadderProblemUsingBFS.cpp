// Snake and Ladder problem using BFS 
// Author: REET

#include <bits/stdc++.h>
#define pb push_back
using namespace std;

/*
Q) Given a 1 to N Snakes and Ladders board, starting
and the ending points of all Snakes and Ladders. You
have to find out the minimum number of dice throws to
win the game. Each dice throw can have any number from
1 to 6.
Answer)
It is a unweighted graph because for each move the weight
is same that is just one dice throw.
Also it is a directed graph because we can't climb down a 
ladder or climb up using a snake.
Also there are certain position on the board where ladders
and snakes are present, so for that we can have an array
which will store the information regarding the increment
or decrement.
Let's call this board[37];
This S&L board can be represented as a graph where from
node 'v' we can reach
v->v+1+board[1]
v->v+2+board[2]
v->v+3+board[3]
v->v+4+board[4]
v->v+5+board[5]
v->v+6+board[6]
*/


template<typename T>
class Graph {
private:
    map<int, list<int>> adjList;
    map<int, int> dist;
public:
    Graph() {}
    void addEdge(T u, T v) {
        adjList[u].pb(v);
        // adjList[v].pb(u);
    }
    int bfs(T src, T dest) {
        queue<int> q;
        map<T, T> parent;
        q.push(src);
        parent[src] = src;
        for(auto node_pair: adjList) {
            dist[node_pair.first] = INT_MAX;
        }
        dist[src] = 0;
        while(!q.empty()) {
            T node = q.front();
            q.pop();
            for(auto nbr: adjList[node]) {
                if(dist[nbr]==INT_MAX) {
                    parent[nbr] = node;
                    q.push(nbr);
                    dist[nbr] = dist[node]+1;
                }
            }
        }
        T temp = dest;
        cout << "Path: ";
        while(temp!=src) {
            cout << temp << "<--";
            temp = parent[temp];
        }
        cout << src << "\n";
        return dist[dest];
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

    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
    board[34] = -22;
    Graph<int> g;
    int final_pos;
    // Add edges
    for(int i=0; i<=36; i++) {
        for(int j=1; j<=6; j++) {
            final_pos = i+j+board[i+j];
            if(final_pos<=36) {
                g.addEdge(i, final_pos);
            }
        }
    }
    g.addEdge(36, 36);
    cout << g.bfs(0, 36) << "\n\n";
    g.printDist();
    g.printAdjList();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Path: 36<--30<--29<--15<--0
4

Node 0 distance from src: 0
Node 1 distance from src: 1
Node 2 distance from src: 2147483647
Node 3 distance from src: 1
Node 4 distance from src: 1
Node 5 distance from src: 2147483647
Node 6 distance from src: 1
Node 7 distance from src: 1
Node 8 distance from src: 2
Node 9 distance from src: 2147483647
Node 10 distance from src: 2
Node 11 distance from src: 2
Node 12 distance from src: 2
Node 13 distance from src: 2
Node 14 distance from src: 3
Node 15 distance from src: 1
Node 16 distance from src: 2
Node 17 distance from src: 2147483647
Node 18 distance from src: 2147483647
Node 19 distance from src: 2
Node 20 distance from src: 2147483647
Node 21 distance from src: 2
Node 22 distance from src: 3
Node 23 distance from src: 3
Node 24 distance from src: 2147483647
Node 25 distance from src: 2147483647
Node 26 distance from src: 3
Node 27 distance from src: 2
Node 28 distance from src: 3
Node 29 distance from src: 2
Node 30 distance from src: 3
Node 31 distance from src: 3
Node 32 distance from src: 2147483647
Node 33 distance from src: 3
Node 34 distance from src: 2147483647
Node 35 distance from src: 3
Node 36 distance from src: 4
Adjacency List:
0-> 1 15 3 4 7 6 
1-> 15 3 4 7 6 7
2-> 3 4 7 6 7 8
3-> 4 7 6 7 8 27 
4-> 7 6 7 8 27 10
5-> 6 7 8 27 10 11 
6-> 7 8 27 10 11 12
7-> 8 27 10 11 12 13 
8-> 27 10 11 12 13 14
9-> 10 11 12 13 14 15 
10-> 11 12 13 14 15 16
11-> 12 13 14 15 16 4 
12-> 13 14 15 16 4 29
13-> 14 15 16 4 29 19
14-> 15 16 4 29 19 6
15-> 16 4 29 19 6 21
16-> 4 29 19 6 21 22 
17-> 29 19 6 21 22 23 
18-> 19 6 21 22 23 16 
19-> 6 21 22 23 16 15 
20-> 21 22 23 16 15 26 
21-> 22 23 16 15 26 27 
22-> 23 16 15 26 27 28
23-> 16 15 26 27 28 29
24-> 15 26 27 28 29 30
25-> 26 27 28 29 30 31
26-> 27 28 29 30 31 30
27-> 28 29 30 31 30 33
28-> 29 30 31 30 33 12
29-> 30 31 30 33 12 35
30-> 31 30 33 12 35 36
31-> 30 33 12 35 36
32-> 33 12 35 36
33-> 12 35 36
34-> 35 36
35-> 36
36-> 36
*/