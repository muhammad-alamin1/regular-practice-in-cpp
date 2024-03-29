// friend function
#include <iostream>

using namespace std;

class Rectangle;

// Cost Class
class Cost
{
    private:
        unsigned int cost_rate;

    public:
        void set(unsigned int rate);
        int total_cost(Rectangle r);
};

// Rectangle class
class Rectangle
{
    private:
        unsigned int height;
        unsigned int width;

    public:
        void set(unsigned int height, unsigned int width);
        int area();

        friend int Cost::total_cost(Rectangle r);
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

void Cost::set(unsigned int rate)
{
    this->cost_rate = rate;
}

int Cost::total_cost(Rectangle r)
{
    // return this->cost_rate * r.area();
    return this->cost_rate * r.height * r.width;
}

int main(void)
{
    Rectangle r;
    Cost c;
    int result_area, total_cost;

    r.set(5, 6);
    c.set(100);
    result_area = r.area();
    total_cost = c.total_cost(r);

    cout << "Area: " << result_area << endl;
    cout << "Total Cost: " << total_cost << endl;

    return 0;
}
