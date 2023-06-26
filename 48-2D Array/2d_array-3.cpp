#include <iostream>

using namespace std;

int main()
{

    int A[2][3] = {
        {15, 20, 25},
        {30, 35, 40},
    };

    // print
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