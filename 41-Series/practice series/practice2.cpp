#include <iostream>

using namespace std;

int main()
{

    // 1 * 2 * 3 * 4 *.... *n
    int n, mul = 1;

    cout << "Enter the value of n : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        mul = mul * i;
        i++;
    }

    cout << "Mul= " << mul;
    return 0;
}