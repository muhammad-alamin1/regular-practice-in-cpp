// new & delete -> Dynamic memory allocation
#include <iostream>

using namespace std;

int main(void)
{
    int *ptr;
    // int a = 5;

    // ptr = &a;

    ptr = new int[5];
    if(ptr == nullptr)
    {
        cerr << "Memory allocation failed.! " << endl;
        return 1;
    }

    ptr[1] = 11;
    cout << ptr[1] << endl;
    cout << *(ptr+1) << endl;

    delete[] ptr;

    return 0;
}
