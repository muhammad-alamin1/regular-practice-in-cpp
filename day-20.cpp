// static variable, member, member function
#include <iostream>

using namespace std;

int fun()
{
    static int a;
    int b = 0;

    a++;
    b++;

    cout << a << " " << b << endl;
}

int main(void)
{
    fun();
    fun();

    return 0;
}
