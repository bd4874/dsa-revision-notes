// Prime Factorisation using Sieve 
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

vector<int> findPrimeFactors(int n) {
    vector<int> factors;
    int i = 0;
    while(primes[i]*primes[i]<=n) {
        if(n%primes[i]==0) {
            factors.push_back(primes[i]);
            while(n%primes[i]==0)
                n /= primes[i];
        }
        i++;
    }
    if(n!=1)
        factors.push_back(n);
    return factors;
}

int main() {

    generatePrimeSieve();
	int T;
	cout << "How many queries you want to perform?\n";
    cin >> T;
    int z = 1;
    while(T--) {
		vector<int> res;
        int n;
		cout << "Query " << z << ":\n";
        cout << "Enter the number:\n";
        cin >> n;
        res = findPrimeFactors(n);
        cout << "Prime factors of " << n << " are: ";
        for(auto i: res)
            cout << i << " ";
        cout << "\n";
        z++;
    }
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
How many queries you want to perform?
5
Query 1:
Enter the number:
10
Prime factors of 10 are: 2 5 
Query 2:
Enter the number:
24
Prime factors of 24 are: 2 3 
Query 3:
Enter the number:
66
Prime factors of 66 are: 2 3 11 
Query 4:
Enter the number:
30
Prime factors of 30 are: 2 3 5 
Query 5:
Enter the number:
100
Prime factors of 100 are: 2 5 
*/