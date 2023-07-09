#include <iostream>

using namespace std;

int main()
{

    int a[5] = {15, 20, 25, 35, 40};

    int *ptr;

    ptr = &a[0];

    for (int i = 0; i < 5; i++)
    {

        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}