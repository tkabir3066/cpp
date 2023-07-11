#include <iostream>

using namespace std;

void addition(int a, int b)
{

    int sum = a + b;
    cout << "Sum = " << sum << endl;
}

int main()
{

    addition(20, 10);
    addition(20, 20);
    addition(20, 30);
    return 0;
}