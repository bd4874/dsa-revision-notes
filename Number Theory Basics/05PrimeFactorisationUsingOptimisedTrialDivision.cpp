// Prime Factorisation using Optimised Trial Division 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n) {
    int i = 2;
    int cnt;
    vector<pair<int, int>> factors;
    while(i*i<=n) {
        if(n%i==0) {
            cnt = 0;
            while(n%i==0) {
                n /= i;
                cnt++;
            }
            factors.push_back(make_pair(i, cnt));    
        }
        i++;
    }
    if(n!=1)
        factors.push_back(make_pair(n, 1));

    for(auto i: factors)
        cout << i.first << "^" << i.second << "\n";
}

int main() {

    int n;
    cout << "Enter the number: ";
    cin >> n;
    printPrimeFactors(n);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter the number: 60
2^2
3^1
5^1
*/