#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int num, r;

    cout << "Enter an integer number : ";
    cin >> num;

    int temp = num;
    int reversed_number = 0;

    while (temp > 0)
    {

        r = temp % 10;
        reversed_number = reversed_number * 10 + r;
        temp = temp / 10;
    }

    if (num == reversed_number)
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << "not a Palindrome number";
    }

    getch();
}

/* A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number (such as 16461) that remains the same when its digits are reversed. In other words, it has reflectional symmetry across a vertical axis. */