// Reference as parameter
// Author: REET

#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "BEFORE SWAPPING" << endl;
    cout << a << endl;
    cout << b << endl;

    swap(a, b);

    cout << "AFTER SWAPPING" << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
BEFORE SWAPPING
10
20
AFTER SWAPPING
20
10
*/