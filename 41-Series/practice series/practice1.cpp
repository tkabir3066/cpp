#include <iostream>

using namespace std;

int main()
{

    // 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    int i = 1;
    double sum = 0.0;
    while (i <= n)
    {
        sum = sum + 1.0 / i;
        i++;
    }

    cout << "Sum = " << sum;
    return 0;
}