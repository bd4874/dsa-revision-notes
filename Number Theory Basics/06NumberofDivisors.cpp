// Number of divisors 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n) {
    int ori = n;
    int i = 2;
    int ans = 1;
    int cnt;
    while(i*i<=n) {
        if(n%i==0) {
            cnt = 0;
            while(n%i==0) {
                n /= i;
                cnt++;
            }
            ans *= (cnt+1);
        }
        i++;
    }
    if(n!=1)
        ans *= 2;

    cout << "The number of divisors of " << ori << " is: " << ans;
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
The number of divisors of 60 is: 12
*/