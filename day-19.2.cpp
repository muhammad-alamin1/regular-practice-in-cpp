// const
#include <iostream>

using namespace std;

class Const_class
{
    public:
        int a;
        int change (int a) const
        {
            a += this->a;

            return a;
        }
};

int main(void)
{
    const unsigned int abc = 100;
    unsigned int arr[abc];

    int i = 0;
    const int& r = i;

    r = 4; // error

    return 0;
}
