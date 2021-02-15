// https://www.spoj.com/problems/PRIME1/ 
// Author: REET

#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

typedef long long ll;

const int N = 100000;
bitset<100005> b;
vector<int> primes;

void generatePrimeSieve() {
    // Set all bits
    b.set();

    b[0] = b[1] = 0;

    for(ll i=2; i<=N; i++) {
        if(b[i]) {
            primes.push_back(i);
            for(ll j=i*i; j<=N; j+=i) {
                b[j] = 0;
            }
        }
    }
}

int main() {
    generatePrimeSieve();
    int T;
    cin >> T;
    while(T--) {
        int m;
        int n;
        cin >> m >> n;
        vector<bool> segment(n-m+1, false);
        for(auto x: primes) {
            if(x*x>n) break;
            int start = (m/x)*x;
            if(x>=m and x<=n) {
                start = 2*x;
            }
            for(int i=start; i<=n; i+=x) {
                segment[i-m] = true;
            }
        }
        for(int i=m; i<=n; i++) {
            if(segment[i-m]==0 and i!=1)
                cout << i << "\n";
        }
        cout << "\n";
    }
    return 0;
}