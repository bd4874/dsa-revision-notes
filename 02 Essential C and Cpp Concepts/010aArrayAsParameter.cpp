// Arrays as Paramter
// Author: REET

#include <iostream>
using namespace std;

// We can change value by passing array
// as parameter as it is passed by address

void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, 5);
    // Arrays can never be passed by value
    // It is passed by reference only
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
1
2
3
4
5
*/