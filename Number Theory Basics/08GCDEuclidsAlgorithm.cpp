// GCD Euclids Algorithm 
// Author: REET

#include <bits/stdc++.h>
using namespace std;

/*
Even if you don't know the name you can
derive this algorithm. This is same as
what we used to do when we try to find
HCF of two numbers.
    12 |  20 | 1
        -12 
        8  | 12 | 1
            -8
            4  | 8 | 2
                -8
                    0
    From this we can conclude that,
    gcd(a,b) = gcd(b,a%b)
    gcd(a,0) = a
    which is Euclid's algorithm

HCF * LCM = a * b
So LCM can also be found if we know the
GCD of two numbers, using the relation
LCM = product of numbers/GCD
*/

int gcd(int a, int b) {
    // If b==0 return a else gcd of (b,a%b)
    return b==0 ? a : gcd(b, a%b);
}

int main() {

    cout << gcd(12, 20) << "\n";
    cout << gcd(13, 2) << "\n";
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
4
1
*/