// Binary Search Implementation
// Author: REET

// Time Complexity: O(logn)

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> v, int n, int el) {
    int st;  // Starting Index
    int en;  // Ending Index
    int mid; // Middle Index
    st = 0;
    en = n-1;
    while(en>=st) {
        mid = st+(en-st)/2;
        if(v[mid]==el)
            return mid;
        // If x greater, ignore left half
        else if(el>v[mid])
            st = mid+1;
        // If x lesser, ignore right half
        else
            en = mid-1;
    }
    return -1;
}

int main() {
    
    int n;  // Size of the data structure
    int el; // Search Element
    int res;
    cout << "Enter size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements:\n";
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    cout << "What are you searching for?\n";
    cin >> el;
    res = BinarySearch(v, n, el);
    res == -1 ? 
        cout << "Sorry! But the element you are looking for is not present.\n" :
        cout << "The element is present at Index: " << res << "\n";
    return 0;
}

/*
1 2 3 4 5 6 7 8 9 10
Ist Iteration
    l->0, r->9, x->7
    m = 0+(9-0)/2 = 4
    l = 4+1
IInd Iteration
    l->5, r->9, x->7
    m = 5+(9-5)/2 = 7
    r = 7-1
IIIrd Iteration
    l->5, r->6, x->7
    m = 5+(6-5)/2 = 5
    l = 5+1
IVth Iteration
    l->6, r->6, x->7
    m = 6+(6-6)/2 = 6
    Element found
*/