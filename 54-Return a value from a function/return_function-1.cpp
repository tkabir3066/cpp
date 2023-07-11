#include <iostream>

using namespace std;

double addition(double, double);

int main()
{

    double result = addition(10.5, 25);
    cout << "sum = " << result << endl;
    return 0;
}

double addition(double a, double b)
{
    double sum = a + b;

    return sum;
}