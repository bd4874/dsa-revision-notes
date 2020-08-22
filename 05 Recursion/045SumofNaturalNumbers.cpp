// Sum of Natural Numbers using Recursion
// Author: REET

#include <iostream>
using namespace std;

int sum(int num)
{
    if (num == 0)
        return 0;
    else
        return num + sum(num - 1);
}

int main()
{
    int T;
    cout << "Enter number of Test Cases:" << endl;
    cin >> T;
    while (T--)
    {
        int num;
        cout << "Please enter the number:" << endl;
        cin >> num;
        int res = sum(num);
        cout << "The sum of numbers from 0 to " << num << " is:" << res << endl;
    }

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter number of Test Cases:
4
Please enter the number:
1
The sum of numbers from 0 to 1 is:1
Please enter the number:
0
The sum of numbers from 0 to 0 is:0
Please enter the number:
6
The sum of numbers from 0 to 6 is:21
Please enter the number:
233
The sum of numbers from 0 to 233 is:27261
*/