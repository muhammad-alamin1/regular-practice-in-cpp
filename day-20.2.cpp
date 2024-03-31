// func overloading
#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

double add(double a, double b){
    return (a + b) * 2;
}

int main(void)
{
    cout << add(3.5, 2.3) << endl;
    cout << add(3, 2) << endl;
    cout << add(3.5344, 2.3343) << endl;
}
