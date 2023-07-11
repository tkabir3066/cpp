#include <iostream>

using namespace std;

void display(int a, int b = 20)
{
    cout << a << endl;
    cout << b << endl;
}

int main()
{

    display(20, 50);
    return 0;
}