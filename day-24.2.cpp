// operator overloading
#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int x = 0, int y = 0){
        real = x;
        imag = y;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    void display(){
        cout << real << " + i " << imag << endl;
    }
};

int main()
{
    Complex obj(2, 3);
    Complex obj2(3, 4);
    Complex obj3 = obj + obj2;
    obj3.display();

    return 0;
};
