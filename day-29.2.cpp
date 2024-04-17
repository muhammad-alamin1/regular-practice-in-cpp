//  inheritance & constructor
#include <iostream>

using namespace std;

class Base
{
public:
    int a;
    Base(int x){
        a = x;
    }
};

class Derive: public Base
{
public:
    int b;
    Derive(int x):Base(3){
        b = x;
    }
};


int main(void)
{


    return 0;
}

