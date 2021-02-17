// Author: REET

/*
You are given N elements, a1,a2,a3….aN.
Find the number of good sub-arrays.
A good sub-array is a sub-array 
[ai,ai+1,ai+2….aj] such that 
(ai+ai+1+ai+2+….+aj) is divisible by N.
Constraints
    1<=T<=10
    1<=N<=10^5
    |ai|<=10^9
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> s;
map<ll, ll> m;

void generateSum(vector<ll> v) {
    s.clear();
    s.push_back(0);
    ll resultant = 0;
    for(ll i=0; i<v.size(); i++) {
        resultant += v[i];
        s.push_back(resultant);
    }
}

void generateMod(int n) {
    m.clear();
    for(ll i=0; i<s.size(); i++) {
		ll val = s[i]%n;
		val = (val+n)%n;
        m[val]++;
    }
}

ll calculateSum() {
    ll res = 0;
    for(auto it: m) {
        ll n = it.second;
        res += ((n*(n-1))/2);
    }
    return res;
}

void printSum() {
    for(ll i=0; i<s.size(); i++) {
        cout << s[i] << " ";
    }
}

int main() {

    ll T;
    cin >> T;
    while(T--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) {
            cin >> v[i];
        }
        generateSum(v);
        generateMod(n);
        ll res = calculateSum();
        cout << res << "\n";
        // printSum();
    }
    return 0;
}