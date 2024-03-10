// function overload
#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x+y;
}

float add(float x, float y)
{
    return x+y;
}

double add(double x, double y)
{
    return x+y;
}

int main(void)
{
    cout << "Integer function overload: " << add(5, 5) << endl;
    cout << "Float function overload: " << add(5.5, 5.6) << endl;

    return 0;
}

