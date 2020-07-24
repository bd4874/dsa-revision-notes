// Structures and Functions
// Author: REET

#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r1, int l, int b)
{
    cout << "initialize() invoked" << endl;
    r1->length = l;
    r1->breadth = b;
    cout << "Length initialized to: " << r1->length << endl;
    cout << "Breadth initialized to: " << r1->breadth << endl;
}

void calculateArea(struct Rectangle r1)
{
    cout << "calculateArea() invoked" << endl;
    cout << "The area is: " << r1.length * r1.breadth << endl;
}

void changeLength(struct Rectangle *r1, int l)
{
    cout << "changeLength() invoked" << endl;
    r1->length = l;
}

int main()
{

    struct Rectangle r;
    initialize(&r, 10, 5);
    calculateArea(r);
    changeLength(&r, 20);
    cout << "Length is now: " << r.length << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
initialize() invoked
Length initialized to: 10
Breadth initialized to: 5
calculateArea() invoked
The area is: 50
changeLength() invoked
Length is now: 20
*/