// constructor overload;
#include <iostream>

using namespace std;

class Abc
{
    private:
        int a;
    public:
        Abc(int a){
            this->a = a;
        }
        Abc(){
            this->a = 0;
        }
        Abc(int x, int y){
            this->a = x + y;
        }

        int ret(){
            return this->a;
        }
};

int main(void)
{
    Abc obj(5), obj1, obj2(5, 6);

    cout << obj.ret() << endl;
    cout << obj1.ret() << endl;
    cout << obj2.ret() << endl;

    return 0;
}
