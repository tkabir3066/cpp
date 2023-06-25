#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int num, r;
    cout << "Enter an integer number : ";
    cin >> num;

    int reversed_number = 0;
    int temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        reversed_number = reversed_number * 10 + r;
        temp = temp / 10;
    }

    cout << reversed_number;

    getch();
}

// example:-
// input-123
//  output-321