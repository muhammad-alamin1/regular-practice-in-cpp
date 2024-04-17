// virtual inheritance
#include <iostream>

using namespace std;

class Base
{
    public:
        int a;
};

class New1: virtual public Base
{
    public:
        int b;
};

class New2: virtual public Base
{
    public:
        int c;
};

class Derive: public New1, public New2
{
    public:
        void get(){
            cin >> a >> b >> c;
        }
        int add(){
            return a+b+c;
        }
};

int main(void)
{
    Derive ob;

    ob.get();
    cout << ob.add() << endl;

    return 0;
}
