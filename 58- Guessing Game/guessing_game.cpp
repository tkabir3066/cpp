#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    while (1)
    {

        cout << endl
             << endl;
        int guessNumber, randomNum;

        cout << "Enter your guess between 1 to 5 : ";
        cin >> guessNumber;

        for (int i = 1; i <= 5; i++)
        {
            randomNum = rand() % 5 + 1;
        }

        if (guessNumber == randomNum)
        {
            cout << "You have won" << endl;
            cout << "Random Number " << randomNum << endl;
        }
        else
        {
            cout << "You have lost, try again" << endl;
            cout << "Random number was " << randomNum;
        }
    }
    return 0;
}