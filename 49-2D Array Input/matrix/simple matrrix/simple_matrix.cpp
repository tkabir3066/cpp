#include <iostream>

using namespace std;

int main()
{

    int A[2][3], B[2][3];

    // input elements for A matrix

    cout << "Enter elements for A matrix : " << endl;

    for (int row = 0; row < 2; row++)
    {
        cout << endl;

        for (int col = 0; col < 3; col++)
        {
            cout << "A[" << row << "][" << col << "] = ";
            cin >> A[row][col];
        }
    }

    cout << endl;

    // printing A matrix
    for (int row = 0; row < 2; row++)
    {

        for (int col = 0; col < 3; col++)
        {
            cout << A[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;
    // input elements for B matrix

    cout << "Enter elements for B matrix : " << endl;

    for (int row = 0; row < 2; row++)
    {
        cout << endl;

        for (int col = 0; col < 3; col++)
        {
            cout << "B[" << row << "][" << col << "] = ";
            cin >> B[row][col];
        }
    }

    cout << endl;

    // printing B matrix
    for (int row = 0; row < 2; row++)
    {

        for (int col = 0; col < 3; col++)
        {
            cout << B[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}