// finding address of function
#include <iostream>

using namespace std;

int abc(int a, int b){
    return a+b;
}

void abc(){
    int p = 99;


}

int main(void)
{
    int (*ptr)(int, int);
    ptr = &abc;

    void (*function_ptr)() = &abc;

    cout << ptr << endl;
    cout << ptr(5, 6) << endl;
    cout << function_ptr << endl;

    return 0;
}
