#include <iostream>

using namespace std;

int main()
{

    int A[2][3];

    // input

    cout << "Enter elements for a matrix : " << endl;

    for (int row = 0; row < 2; row++)
    {

        for (int col = 0; col < 3; col++)
        {
            cout << "A[" << row << "][" << col << "] = ";
            cin >> A[row][col];
        }
    }

    cout << endl;

    // printing a matrix
    for (int row = 0; row < 2; row++)
    {

        for (int col = 0; col < 3; col++)
        {
            cout << A[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}