#include <iostream>

using namespace std;

void displayArray(int num[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    int number[5] = {15, 25, 36, 46, 74};

    displayArray(number, 5);
    return 0;
}