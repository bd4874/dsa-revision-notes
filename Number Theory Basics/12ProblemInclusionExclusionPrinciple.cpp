// Inclusion Exclusion Problem
// Author: REET

// Numbers between 1 and n which are divisible
// by any of the prime numbers less than 20?

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> primes = {2,3,5,7,11,13,17,19};

int main() {
    ll T;
    cin >> T;
    while(T--) {
        ll n;
        cin >> n;
        ll res = 0;
        for(ll i=1; i<=(1ll<<8); i++) {
            ll denom = 1;
            ll cnt = __builtin_popcount(i);
            for(ll j=0; j<8; j++) {
                if(i&(1ll<<j))
                    denom *= primes[j];
            }
            if(denom==1)
                continue;
            if(cnt&1)
                res += (n/denom);
            else
                res -= (n/denom);
        }
        cout << res << "\n";
    }
    return 0;
}