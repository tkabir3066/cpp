#include <iostream>
#include <conio.h>

using namespace std;
int main()
{

    int num, count = 0;
    cout << "Enter a positive number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "not a prime number";
    }

    getch();
}