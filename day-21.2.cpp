// default argument;
#include <iostream>

using namespace std;

int abc(int a, int b = 0){
    return a+b;
}

int main(void)
{
    int res;

    res = abc(5);

    cout << res << endl;

    return 0;
}

