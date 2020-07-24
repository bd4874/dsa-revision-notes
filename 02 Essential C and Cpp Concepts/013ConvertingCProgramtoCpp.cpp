// Structures and Functions
// Author: REET

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void initialize(int l, int b)
    {
        cout << "initialize() invoked" << endl;
        length = l;
        breadth = b;
        cout << "Length initialized to: " << length << endl;
        cout << "Breadth initialized to: " << breadth << endl;
    }

    void calculateArea(void)
    {
        cout << "calculateArea() invoked" << endl;
        cout << "The area is: " << length * breadth << endl;
    }

    void changeLength(int l)
    {
        cout << "changeLength() invoked" << endl;
        length = l;
        cout << "Length is now: " << length << endl;
    }
};

int main()
{

    class Rectangle r;
    r.initialize(10, 5);
    r.calculateArea();
    r.changeLength(20);
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