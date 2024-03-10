// function argument
#include <iostream>

void func(int x, float y = 3.1415)
{
    std::cout << "Value of x & y are: " << x << ", " << y << std::endl;
}

int main(void)
{
    func(10);
    func(10, 7.22);

    return 0;
}
