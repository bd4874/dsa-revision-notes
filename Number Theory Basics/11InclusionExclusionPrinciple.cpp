// Inclusion Exclusion Principle 
// Author: REET

/*
A∪B = A+B+A∩B
A∪B∪C = A+B+C-A∩B-B∪C-C∪A+A∩B∩C
*/

// How many no's from 1 to 100 are 
// multiples of 2 or 3

// m(2∪3) = m(2)+m(3)+m(2∩3)
// where m(2∩3) = m(6)
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 100/2;
    int b = 100/3;
    int c = 100/6;
    cout << "There are total " << a+b-c << " multiples of 2 or 3 within 100";
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
There are total 67 multiples of 2 or 3 within 100
*/