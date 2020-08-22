// Power Using Recursion
// Author: REET

#include <iostream>
using namespace std;

int powerCalc(int base, int exp)
{
    if (exp == 1)
        return base;
    return base * powerCalc(base, exp - 1);
}

int main()
{
    int T;
    cout << "Enter the number of test cases:" << endl;
    cin >> T;
    while (T--)
    {
        int m;
        int n;
        cout << "Enter the base number:" << endl;
        cin >> m;
        cout << "Enter the exponent number:" << endl;
        cin >> n;
        cout << m << " to the power " << n << " is: " << powerCalc(m, n) << endl;
    }
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter the number of test cases:
4
Enter the base number:
1
Enter the exponent number:
1
1 to the power 1 is: 1
Enter the base number:
2
Enter the exponent number:
1
2 to the power 1 is: 2
Enter the base number:
4
Enter the exponent number:
5
4 to the power 5 is: 1024
Enter the base number:
5
Enter the exponent number:
7
5 to the power 7 is: 78125
*/