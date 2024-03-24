// assign object
#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int height;
        int width;
    public:
        void set_data(int h, int w);
        int area();
};

void Rectangle::set_data(int h, int w)
{
    height = h;
    width = w;
}

int Rectangle::area()
{
    return height*width;
}

int main(void)
{
    Rectangle obj, obj1;

    int result;

    obj.set_data(5, 6);
    obj1.set_data(7, 8);


     // before assign object
    result = obj.area();
    cout << "Area: " << result << endl;

    result = obj1.area();
    cout << "Area: " << result << endl;

    // assign object
    obj1 = obj;

    // after assign object
    result = obj.area();
    cout << "Area: " << result << endl;

    result = obj1.area();
    cout << "Area: " << result << endl;

    return 0;
}
