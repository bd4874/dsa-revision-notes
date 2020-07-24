// Structures As Parameters
// Author: REET

#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r1)
{
    // r1.length++;
    // Doesn't modify actual parameters.
    // It creates a copy as it is passed by value not by reference
    return r1.length * r1.breadth;
}

void changeLength(struct Rectangle *p, int n)
{
    p->length = 45;
}

int main()
{
    struct Rectangle r = {10, 15};
    cout << area(r) << endl;
    cout << "changeLength() invoked" << endl;
    changeLength(&r, 20);
    cout << area(r) << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
150
changeLength() invoked
675
*/