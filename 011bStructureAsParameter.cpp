// Structure as Parameter
// Author: REET

#include <iostream>
using namespace std;

struct Test
{
    int A[5];
    int n;
};

void test(struct Test t1)
{
    cout << t1.A[0] << endl;
    cout << t1.A[1] << endl;
    cout << t1.A[2] << endl;
    cout << t1.A[3] << endl;
    cout << t1.A[4] << endl;
    cout << t1.n << endl;
}

int main()
{
    struct Test t = {{2, 3, 4, 5, 6}, 5};
    test(t);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
2
3
4
5
6
*/