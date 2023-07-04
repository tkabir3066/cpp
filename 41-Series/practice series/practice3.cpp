#include <iostream>

using namespace std;

int main()
{

    // 2 * 4 * 6 *.... *n
    int n, mul = 1;

    cout << "Enter the value of n : ";
    cin >> n;

    int i = 2;

    while (i <= n)
    {
        mul = mul * i;
        i += 2;
    }

    cout << "Mul= " << mul;
    return 0;
}