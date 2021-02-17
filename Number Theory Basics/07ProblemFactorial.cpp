// Author: REET
/*
In this problem you are given two integers,
n and k. You need to find the the maximum 
value of x, such that, n! % k^x = 0.
1<=T<=20 1<=n<=10^8 2<=k<=10^8
*/

#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
typedef long long ll;

vector<ll> calculatePrimeFactors(ll n) {
    ll i = 2;
    vector<ll> factors;
    while(i*i<=n) {
        if(n%i==0) {
            while(n%i==0) {
                n /= i;
            }
            factors.push_back(i);    
        }
        i++;
    }
    if(n!=1)
        factors.push_back(n);
    return factors;
}

int main() {
    ll T;
    cin >> T;
    while(T--) {
        ll n;
        ll k;
        cin >> n >> k;
        vector<ll> kfactors;
        kfactors = calculatePrimeFactors(k);
        if(n==1 && k==1) {
            cout << "1\n";
            continue;
        }
        if(k>n && k%n==0) {
            cout << "0\n";
            continue;
        }
        ll mini = LONG_LONG_MAX;
        ll sum;
        ll z;
        for(ll i=0; i<kfactors.size(); i++) {
            sum = 0;
            z = 1;
            while(1) {
                ll num = n/pow(kfactors[i], z);
                if(num==0)
                    break;
                sum += num;
                z++;
            }
            mini = min(sum, mini);
        }
        cout << mini << "\n";
    }
    return 0;
}

// Failing for testcase
// 1
// 40335377 61296961
// Expected: 136267
// Received: 161340