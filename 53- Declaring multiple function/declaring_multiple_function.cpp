#include <iostream>

using namespace std;

void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);

int main()
{

    addition(20, 10);
    subtraction(15, 5);
    multiplication(20, 4);

    return 0;
}

void addition(int a, int b)
{

    int sum = a + b;
    cout << "Sum = " << sum << endl;
}

void subtraction(int a, int b)
{

    int sub = a - b;
    cout << "subtraction = " << sub << endl;
}
void multiplication(int a, int b)
{

    int mul = a * b;
    cout << "Mul = " << mul << endl;
}