#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    for (int i = 1; i <= 10; i++)
    {

        int random_num = rand() % 5 + 1;
        cout << "Random Number = " << random_num << endl;
    }
    return 0;
}

// random number ke 5 diye bhag korechi tai random number 0 theke porjonto asbe
// je number diye modulus korbo random number 0 theke sei number er aag porjonto asbe.