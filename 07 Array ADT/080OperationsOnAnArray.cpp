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

void add(struct Array *arr, int n)
{
    if (arr->length == arr->size)
    {
        cout << "Array is full. Sorry. Can't add!!!" << endl;
    }
    else
    {
        arr->A[arr->length++] = n;
    }
}

void insert(struct Array *arr, int index, int num)
{

    for (int i = arr->length - 1; i >= index; i--)
    {
        arr->A[i+1] = arr->A[i];
    }
    arr->A[index] = num;
    arr->length++;
}

int main()
{

    struct Array arr;
    int i, n;
    int append_num;
    int insert_num, index;

    cout << "Enter the size of the array\n";
    cin >> arr.size;

    // Dynamic memory allocation for array
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
    display(arr); // Pass by Value
    cout << "Enter the number you want to add" << endl;
    cin >> append_num;
    add(&arr, append_num); // Pass by Reference
    display(arr);
    cout << "Enter the Index of the number where you want to enter the element: " << endl;
    cin >> index;
    cout << "Enter the number that you want to enter" << endl;
    cin >> insert_num;
    insert(&arr, index, insert_num);
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
Enter the number you want to add
6
Elements of the Array are: 
1 2 3 4 5 6 
Enter the Index of the number where you want to enter the element: 
3
Enter the number that you want to enter
0
Elements of the Array are: 
1 2 3 0 4 5 6 
*/