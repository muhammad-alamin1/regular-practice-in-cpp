#include <iostream>

int x = 20;

int main(void)
{
    int tool_qty    (5), x(10);
    float tool_size (10);

    std::cout << "Scope Resolution Operator(::) " << ::x << '\n';

    return 0;
}
