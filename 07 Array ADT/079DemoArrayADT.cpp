// Demo of Array ADT
// Author: REET

#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    cout << "Elements of the Array are: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main()
{

    struct Array arr;
    int i, n;
    cout << "Enter the size of the array\n";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << "Enter number of elements of the array\n";
    cin >> n;
    cout << "Enter all elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;
    display(arr);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter the size of the array
10
Enter number of elements of the array
5
Enter all elements
1
2
3
4
5
Elements of the Array are: 
1 2 3 4 5 
*/