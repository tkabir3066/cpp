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
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {

            cout << i << " ";
        }
    }

    return 0;
}