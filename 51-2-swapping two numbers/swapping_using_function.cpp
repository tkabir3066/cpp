#include <iostream>

using namespace std;

void swapping(int *ptr1, int *ptr2)
{

    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{

    int x = 10, y = 20;

    cout << "Before swapping value of x = " << x << " and y = " << y << endl;

    swapping(&x, &y);

    cout << "After swapping value of x = " << x << " and y = " << y << endl;

    return 0;
}