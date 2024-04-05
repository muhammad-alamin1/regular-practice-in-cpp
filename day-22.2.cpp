// copy constructor
#include <iostream>

using namespace std;

class Abc{
    public:
        Abc(){
            cout << "Constructor" << endl;
        }

        ~Abc(){
            cout << "Destructor" << endl;
        }
};

int main(void)
{
    Abc a;

    Abc b = a;

    return 0;
}

