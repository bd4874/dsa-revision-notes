// Calculate frequency of prime within a range

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SIZE 1000001
vector<bool> primeSieve(SIZE, true);
vector<int> primeFreq(SIZE);


void generatePrimeSieve() {
	primeSieve[0] = false;
	primeSieve[1] = false;
	for(ll i=2; i<1000001; i++) {
		if(primeSieve[i]) {
			for(ll j=i*i; j<1000001; j+=i) {
				primeSieve[j] = false;
			}
		}
	}
}

void generatePrimeFreq() {
	int cnt = 0;
	for(int i=0; i<1000001; i++) {
		if(primeSieve[i]) cnt++;
		primeFreq[i] = cnt;
	}
}

void init() {
    generatePrimeSieve();
    generatePrimeFreq();
}

int main() {
	init();
	int T;
	cout << "How many queries you want to perform?\n";
    cin >> T;
    ll z = 1;
    while(T--) {
        ll n;
		ll a;
		ll b;
		cout << "Query " << z << ":\n";
        cout << "Enter the range:\n";
		cin >> a >> b;
        cout << "There are " << primeFreq[b] - primeFreq[a-1] << " between " << a << " and " << b << "\n";
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
Query 1:
Enter the range:
1 10
There are 4 between 1 and 10
Query 2:
Enter the range:
11 20
There are 4 between 11 and 20
*/