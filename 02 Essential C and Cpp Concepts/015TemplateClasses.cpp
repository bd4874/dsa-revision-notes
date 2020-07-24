// Template Classes in C++
// Author: REET

#include <iostream>
using namespace std;

/*
class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic(int a, int b);
    int add();
    int sub();
};

Arithmetic ::Arithmetic(int a, int b)
{
    this->a = a;
    this->b = b;
}

int Arithmetic ::add()
{
    int c;
    c = a + b;
    return c;
}

int Arithmetic ::sub()
{
    int c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic a(87, 15);
    cout << a.add() << endl;
    cout << a.sub() << endl;
    return 0;
}
*/

// Using Template Class Now

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T> ::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T> ::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmetic<T> ::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<int> a(10, 7);
    Arithmetic<float> b(87.4, 15.2);
    cout << a.add() << endl;
    cout << a.sub() << endl;
    cout << b.add() << endl;
    cout << b.sub() << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
17
3
102.6
72.2
*/