#include <iostream>

using namespace std;

int addition(int, int);
int main()
{

    int result = addition(10, 25);
    cout << "sum = " << result << endl;
    return 0;
}

int addition(int a, int b)
{

    int sum = a + b;

    return sum;
}