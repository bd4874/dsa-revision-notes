// Array as Parameter
// Author: REET

#include <iostream>
using namespace std;

int* fun(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}

int main()
{

    int *a;
    a = fun(5);
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
0
0
0
0
0
*/