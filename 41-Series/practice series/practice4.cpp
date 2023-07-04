#include <iostream>

using namespace std;

int main()
{

    // 1^2 * 2^2 * 3^2 *.... *n^2

    int n, mul = 1;

    cout << "Enter the value of n : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        mul = mul * i * i;
        i++;
    }

    cout << "Mul= " << mul;
    return 0;
}