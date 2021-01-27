// Range Min Query using ST 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

/*
This algo is used to find minimum value
in a particular range. We can form a 2D
array and precompute the results. But
that is going to take O(n^2) time to
build. But to make a query we can
access that in O(1) time. But the 
problem is it's expensive to update the
value.
Worst time - O(n^2)
To have better updating and querying
time complexity, it's best to use
segment tree.
*/

void buildTree(vector<int> &tree, vector<int> &arr, int idx, int s, int e) {
    // Base Case
    if(s>e) return;
    // Base Case - Leaf Node
    if(s==e) {
        tree[idx] = arr[s];
        return;
    }
    // Recursive Case
    int mid = (s+e)/2;
    // Left Subtree
    buildTree(tree, arr, 2*idx, s, mid);
    // Right Subtree
    buildTree(tree, arr, 2*idx+1, mid+1, e);

    int left = tree[2*idx];
    int right = tree[2*idx+1];

    tree[idx] = min(left, right);
}

int query(vector<int> &tree, int idx, int s, int e, int qs, int qe) {
    // Three possible cases
    // 1.No Overlap
    if(qs>e || qe<s)
        return INT_MAX;
    // 2.Complete Overlap
    if(s>=qs && e<=qe) {
        return tree[idx];
    }
    // 3.Partial Overlap: Call both sides
    int mid = (s+e)/2;
    int leftAns = query(tree, 2*idx, s, mid, qs, qe);
    int rightAns = query(tree, 2*idx+1, mid+1, e, qs, qe);
    return min(leftAns, rightAns);
}

void updateNode(vector<int> &tree, int idx, int s, int e, int i, int val) {
    // No Overlap
    if(i<s || i>e)
        return;
    // Reached Leaf Node
    if(s==e) {
        tree[idx] = val;
        return;
    }
    // Lying in Range - i is lying between s and e
    int mid = (s+e)/2;
    updateNode(tree, 2*idx, s, mid, i, val);
    updateNode(tree, 2*idx+1, mid+1, e, i, val);
    tree[idx] = min(tree[2*idx], tree[2*idx+1]);
    return;
}

// Time complexity for range update -> Worst case:O(n)
// We may need to update all the nodes

void updateRange(vector<int> &tree, int idx, int s, int e, int rs, int re, int inc) {
    // No Overlap
    if(re<s || rs>e)
        return;
    // Reached Leaf Node
    if(s==e) {
        tree[idx] += inc;
        return;
    }
    // Lying in Range - Call both sides
    int mid = (s+e)/2;
    updateRange(tree, 2*idx, s, mid, rs, re, inc); 
    updateRange(tree, 2*idx+1, mid+1, e, rs, re, inc);
    tree[idx] = min(tree[2*idx], tree[2*idx+1]);
    return; 
}

int main() {
    int n;
    int idx = 1;
    cout << "Enter size of the array: ";
    cin >> n;
    int s = 0;
    int e = n-1;
    vector<int> arr(n);
    vector<int> tree(4*n+1);
    cout << "Enter elements: ";
    // 1 4 -2 3
    for(int i=0; i<n; i++)
        cin >> arr[i];
    buildTree(tree, arr, idx, s, e);
    cout << "Tree elements are: ";
    for(int i=0; i<4*n+1; i++) {
        cout << tree[i] << " ";
    }
    int no_of_queries;
    int z = 1;
    cout << "\nHow many queries? ";
    cin >> no_of_queries;

    // updateNode(tree, 1, s, e, 2, 8);
    // updateRange(tree, 1, s, e, 1, 2, 4);

    while(no_of_queries--) {
        int qs;
        int qe;
        cout << "Enter Query No. " << z++ << "\n";
        cin >> qs >> qe;
        cout << "Min value between range " << qs << " to " << qe << " is: ";
        cout << query(tree, idx, s, e, qs, qe);
        cout << "\n";
    }
    return 0;
}

/*
Time Complexities
Build: O(N)
Query: O(logN)
Node Update: O(logN)
Range Update: O(N)
*/

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter size of the array: 6
Enter elements: 1 3 2 -2 4 5
Tree elements are: 0 -2 1 -2 1 2 -2 5 1 3 0 0 -2 4 0 0 0 0 0 0 0 0 0 0 0 
How many queries? 4
Enter Query No. 1
0 5
Min value between range 0 to 5 is: -2
Enter Query No. 2
1 4
Min value between range 1 to 4 is: -2
Enter Query No. 3
1 2
Min value between range 1 to 2 is: 2
Enter Query No. 4
0 1
Min value between range 0 to 1 is: 1
*/