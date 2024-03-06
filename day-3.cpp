#include <iostream>

int main(void)
{
    bool get_result;
    int x, y, z;

    x = 5;
    y = 10;
    z = 15;

    get_result = x > y; // false
    std::cout << "Result of get result X > Y: " << get_result << std::endl;

    get_result = y < z; // true
    std::cout << "Result of get result Y < Z: " << get_result << std::endl;

    get_result = false;
    std::cout << "Result of get result: " << get_result << std::endl;

    get_result = true;
    std::cout << "Result of get result: " << get_result << std::endl;

    return 0;
}
