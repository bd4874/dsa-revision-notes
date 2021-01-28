// Insertion in a heap 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

void insertInMaxHeap(vector<int> &v, int val) {
    v.push_back(val);
    int z = v.size()-1;

    while(z>1) {
        //Comparing with parent node
        if(v[z]>v[z/2]) {
            swap(v[z], v[z/2]);
            z /= 2;
        } 
        else break;
    }
}

int main() {
    vector<int> v = {0, 40, 35, 15, 30, 10, 12, 6, 5, 20};
    int tmp;
    cout << "Enter the element: \n";
    cin >> tmp;
    insertInMaxHeap(v, tmp);
    for(int i=1; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter the element: 
50
50 40 15 30 35 12 6 5 20 10
*/