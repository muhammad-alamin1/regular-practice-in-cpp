// reference
#include <iostream>

using namespace std;

int func(int& a)
{
    return a;
}

int main(void)
{
    int a = 6;
    int& r = a;

    cout << r << endl;
    r = 7;
    cout << a << endl;

    func(a);

    return 0;
}
