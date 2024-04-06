// operator overloading
#include <iostream>

using namespace std;

class Complex;
class Calculator
{
public:
    int add(int a, int b){
        return a + b;
    }

    int sumRealPart(Complex, Complex);
};

class Complex
{
    int a, b;
    friend class Calculator;

public:
    void setData(int n1, int n2){
        a = n1;
        b = n2;
    }

    void printNumber(void){
        cout << "your number is " << a << " and " << b << endl;
    }
};

int Calculator::sumRealPart(Complex o1, Complex o2){
    return (o1.a + o2.a);
};

int main()
{
    Complex o1, o2;

    o1.setData(1, 2);
    o2.setData(3, 4);
    Calculator cal;
    int result = cal.sumRealPart(o1, o2);
    cout << "The result is " << result << endl;

    return 0;
};
