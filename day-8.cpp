// create object & member function
#include <iostream>

using namespace std;

class Rectangle
{
    public:
        int height;
        int width;

        // member function prototype
        int area();
};

// function definition
int Rectangle::area()
{
    return height * width;
}

int main(void)
{
    Rectangle obj;
    int area;

    obj.height = 10;
    obj.width = 5;
    // area = obj.height * obj.width;

    cout << "Area = " << obj.area() << endl;


    return 0;
}
