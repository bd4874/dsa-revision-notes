// Checking if a large no. is prime or not ~ 10^12 
// Author: REET

#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

typedef long long ll;

const int N = 10000000;
bitset<10000005> b;
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

bool isPrime(ll n) {
    if(n<=N) {
        return b[n]==1 ? true : false;
    }
    for(ll i=0; primes[i]*(ll)primes[i]<=n; i++) {
        if(n%primes[i]==0)
            return false;
    }
    return true;
}

int main() {
    generatePrimeSieve();
    ll T;
    cout << "How many queries you want to perform?\n";
    cin >> T;
    ll z = 1;
    while(T--) {
        ll n;
        cout << "Enter Query " << z << "\n";
        cin >> n;
        cout << n << " is " << (isPrime(n) ? "prime" : "not prime") << "\n";
        z++;
    }
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
How many queries you want to perform?
2
Enter Query 1
2147483647
2147483647 is prime
Enter Query 2
2147483648
2147483648 is not prime
*/