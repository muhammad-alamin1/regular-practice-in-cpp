//  inheritance & poiter
#include <iostream>

using namespace std;

class Base
{
public:
    int a;

};

class Derive: public Base
{
public:
    int b;

};


int main(void)
{
    Base b;
    Derive d;

    b.a = 5;
    cout << b.a << endl;

    d.b = 6;
    cout << d.b << endl;

    Base *ptr;

    ptr = &d;
    ptr->a = 1;
    ptr->b = 2; // err

    return 0;
}


