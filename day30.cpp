// function overriding
#include <iostream>

using namespace std;

class Base
{
public:
    void print(){
        cout << "Base" << endl;
    }
};

class Derive: public Base
{
public:
    void print(){
        cout << "Derive" << endl;
    }
};

int main(void)
{
    Derive obj;

    obj.print();

    return 0;
}
