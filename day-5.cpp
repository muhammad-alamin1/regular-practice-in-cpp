#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    string a;
    int i;
    int arr[] = {3, 5, 2, 1, 6};

    a = "amar nam";
    cout << a;

    cout<< endl;

    for(i = 0; i < 6; i++)
        cout << arr[i] << " ";

    cout<< endl;

    sort(arr, arr+6);
    for(i = 0; i < 6; i++)
        cout << arr[i] << " ";

    cout<< endl;

    return 0;
}
