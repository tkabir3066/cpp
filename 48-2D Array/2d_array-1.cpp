#include <iostream>

using namespace std;

int main()
{

    int A[2][3];

    // initialization
    A[0][0] = 15;
    A[0][1] = 20;
    A[0][2] = 25;

    A[1][0] = 30;
    A[1][1] = 35;
    A[1][2] = 40;

    // print
    cout << A[1][2] << " ";
    cout << A[1][1] << " ";
    cout << A[0][1];

    return 0;
}