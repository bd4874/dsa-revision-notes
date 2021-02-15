// Sieve of Eratosthenes 
// Author: REET

#include <bits/stdc++.h>
#define SIZE 1e5
using namespace std;

/*
Time complexity: 
(N/2)+(N/3)+(N/5)+(N/7)+...
N(1/2+1/3+1/5+1/7...)
O(NloglogN)
If there are 10^18 operations,
then O(N*7) which is approximately linear
*/

vector<bool> sieve(SIZE, true);

void generatePrimeSieve() {
    sieve[0] = false;
    sieve[1] = false;
    for(int i=2; i*i<SIZE; i++) {
        for(int j=i*i; j<SIZE; j+=i) {
            sieve[j] = false;
        }
    }
}

int main() {
    generatePrimeSieve();
    cout << "Prime numbers within " << SIZE-1 << " are: \n";
    for(int i=0; i<SIZE; i++)
        if(sieve[i])
            cout << i << " ";
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Prime numbers within 100 are: 
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
*/