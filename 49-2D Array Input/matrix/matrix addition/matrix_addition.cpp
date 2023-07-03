#include <iostream>

using namespace std;

int main()
{

    int numberOfRows, numberOfCols;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter the number of rows : ";
    cin >> numberOfRows;
    cout << "Enter the number of cols : ";
    cin >> numberOfCols;

    // input elements for A matrix

    cout << "Enter elements for A matrix : " << endl;

    for (int row = 0; row < numberOfRows; row++)
    {
        cout << endl;

        for (int col = 0; col < numberOfCols; col++)
        {
            cout << "A[" << row << "][" << col << "] = ";
            cin >> A[row][col];
        }
    }

    cout << endl;
    // input elements for B matrix

    cout << "Enter elements for B matrix : " << endl;

    for (int row = 0; row < numberOfRows; row++)
    {
        cout << endl;

        for (int col = 0; col < numberOfCols; col++)
        {
            cout << "B[" << row << "][" << col << "] = ";
            cin >> B[row][col];
        }
    }
    cout << endl;

    // printing A matrix
    cout << "A = " << endl;
    for (int row = 0; row < numberOfRows; row++)
    {

        for (int col = 0; col < numberOfCols; col++)
        {
            cout << A[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // printing B matrix
    cout << "B = " << endl;
    for (int row = 0; row < numberOfRows; row++)
    {

        for (int col = 0; col < numberOfCols; col++)
        {
            cout << B[row][col] << " ";
        }
        cout << endl;
    }

    // Adding C matrix

    for (int row = 0; row < numberOfRows; row++)
    {

        for (int col = 0; col < numberOfCols; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
        cout << endl;
    }

    // printing C matrix
    cout << "C = " << endl;
    for (int row = 0; row < numberOfRows; row++)
    {

        for (int col = 0; col < numberOfCols; col++)
        {
            cout << C[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}