#include <iostream>

using namespace std;

int main()
{

    int m, n;

    cout << "Enter initial integer : ";
    cin >> m;

    cout << "Enter final integer : ";
    cin >> n;

    cout << endl;
    cout << "Prime Numbers from " << m << " to " << n << " "
         << " = ";
    for (int i = m; i <= n; i++)
    {
        bool isPrime = true;
        if (i == 0 || i == 1)
        {
            isPrime = false;
        }
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {

            cout << i << " ";
        }
    }

    return 0;
}