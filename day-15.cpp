// Object Pointer
#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int height;
        int width;

    public:
        void set(int h, int w);
        int area();
};

void Rectangle::set(int h, int w)
{
    height = h;
    width = w;
}

int Rectangle::area()
{
    return height * width;
}

int main(void)
{
    Rectangle obj;
    Rectangle *ptr;
    int result;

    obj.set(5, 6);
    result = obj.area();
    cout << "Area: " << result << endl;

    // object pointer
    ptr = &obj;
    ptr->set(7, 8);
    result = ptr->area();
    cout << "Area: " << result << endl;

    return 0;
}
