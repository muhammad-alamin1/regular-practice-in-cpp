// constructor destructor
#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int height;
        int width;
    public:
        void set_data(int h, int w);
        int print_data();
        // constructor function
        Rectangle(int h, int w);
        // destructor function
        ~Rectangle();
};

// constructor function
Rectangle::Rectangle(int h, int w)
{
    height = h;
    width = w;

    cout << "Constructor Func!" << endl;
}
Rectangle::~Rectangle()
{
    cout << "Destructor Func!" << endl;
}

int Rectangle::print_data()
{
    return height * width;
}

int main(void)
{
    // when decl an object then default call constructor func
    Rectangle s(4, 6), s1(5, 6);
    int a, b, result;

    a = 2, b = 4;
    // s.set_data(a, b);

    result = s.print_data();
    cout << "Result: " << result << endl;
    result = s1.print_data();
    cout << "Result: " << result << endl;

    return 0;
}
