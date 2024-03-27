// this pointer
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

void Rectangle::set(int height, int width)
{
    this->height = height;
    this->width = width;
}

int Rectangle::area()
{
    return this->height * this->width;
}


int main(void)
{
    Rectangle obj;
    int result;

    obj.set(5, 6);
    result = obj.area();
    cout << "Area: " << result << endl;

    return 0;
}
