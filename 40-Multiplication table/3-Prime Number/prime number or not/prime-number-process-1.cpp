#include <iostream>
#include <conio.h>

using namespace std;
int main()
{

    int num, i;

    bool isPrime = true;
    cout << "Enter a positive number: ";
    cin >> num;

    if (num == 0 || num == 1)
    {
        isPrime = false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "not a prime number";
    }

    getch();
}