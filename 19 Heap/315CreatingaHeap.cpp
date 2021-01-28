// Creating a heap 
// Author: REET

/*
We don't need extra array to create a
heap. We can easily create heap by
using insert function[check previous
file] for every element.
This type of creation where we don't 
need extra array is known as inplace
heap creation.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> v = {0, 10, 20, 30, 25, 5, 40, 35};

void insertInMaxHeap(int val, int idx) {
    int z = idx;
    while(z>1) {
        //Comparing with parent node
        if(v[z]>v[z/2]) {
            swap(v[z], v[z/2]);
            z /= 2;
        } 
        else break;
    }
}

void createMaxHeap() {
    for(int i=2; i<=v.size()-1; i++)
        insertInMaxHeap(v[i], i);
}

int main() {
    
    createMaxHeap();
    for(int i=1; i<v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";
    return 0;
}

/*
Time complexity for insertion in a heap
is O(logN)
So, for creating a heap, n such 
operations needs to be performed.
Therefore time complexity will be
O(NlogN)
*/

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
40 25 35 10 5 20 30
*/