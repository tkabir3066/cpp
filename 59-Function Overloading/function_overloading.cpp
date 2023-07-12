#include <iostream>

using namespace std;

/* // process 1
void sum(int a, int b)
{
    int add = a + b;
    cout << "Sum = " << add
         << endl;
}
void sum(int a, int b, int c)
{
    int add = a + b + c;
    cout << "Sum = " << add << endl;
} */

// process 2
void sum(int a, int b)
{
    int add = a + b;
    cout << "Sum = " << add
         << endl;
}
void sum(double a, int b)
{
    double add = a + b;
    cout << "Sum = " << add << endl;
}

int main()
{

    sum(10, 20);
    sum(10.5, 20.0);
    return 0;
}

// function in same name should have deferent parameter of different data type