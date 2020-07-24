// Reference in C++
// Author: REET

/*
Useful in parameter passing.
This is just the alias name given to a 
variable.
SYNTAX: int a = 10;
        int &r = a;
*/

#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int &r = a;
    cout << a << endl;
    r++;
    cout << r << endl;
    cout << a << endl;

  return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
10
11
11
*/