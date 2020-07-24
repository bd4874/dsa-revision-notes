// Pointer to Structure
// Author: REET

struct Rectangle
{
    int length;
    int breadth;
};

#include <iostream>
using namespace std;

int main()
{

    struct Rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.breadth << endl;
    struct Rectangle *p = &r;
    cout << "Dereferencing pointer" << endl;
    // cout << *p.length << endl;
    // This won't work as point is evaluated first
    cout << (*p).length << endl;
    cout << (*p).breadth << endl;
    cout<< "Using Arrow" << endl;
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
10
5
Dereferencing pointer
10
5
Using Arrow
10
5
*/