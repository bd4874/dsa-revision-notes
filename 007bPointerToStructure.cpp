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

    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 10;
    p->breadth = 20;
    cout << p->length << endl;
    cout << p->breadth << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
10
20
*/