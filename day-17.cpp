// pass object in function
#include <iostream>

using namespace std;

// Rectangle class
class Rectangle
{
    private:
        unsigned int height;
        unsigned int width;

    public:
        void set(unsigned int height, unsigned int width);
        int area();
};

void Rectangle::set(unsigned int height, unsigned int width)
{
    this->height = height;
    this->width = width;
}

int Rectangle::area()
{
    return height * width;
}

// all func
void print_area(Rectangle obj);
Rectangle scan_data();

int main(void)
{
    Rectangle obj;

    // obj.set(5, 6);
    // print_area(obj);

    obj = scan_data();
    print_area(obj);

    return 0;
}

// print area func
void print_area(Rectangle obj)
{
    unsigned int result;

    result = obj.area();
    cout << "Area = " << result << endl;
}

// object func
Rectangle scan_data()
{
    Rectangle obj;
    unsigned int h, w;

    cout << "Enter height & width: " << endl;
    cin >> h >> w;
    obj.set(h, w);

    return obj;
}
