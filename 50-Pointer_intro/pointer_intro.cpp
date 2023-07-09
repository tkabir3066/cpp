#include <iostream>

using namespace std;

int main()
{

    int x = 5;
    int *p;

    p = &x;             // to store address of x variable
    cout << x << endl;  // 5
    cout << &x << endl; // 0x61ff08
    cout << p << endl;  // 0x61ff08
    cout << *p << endl; // 5
    return 0;
}