// variable scope
#include <iostream>

using namespace std;

int main(void)
{
    {
        int a;
        cout << a << endl;
    }

    // error, a was not decleared in this scope
    // cout << a << endl;

    return 0;
}
