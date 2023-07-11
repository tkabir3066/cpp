
#include <iostream>

using namespace std;

/* void square()
{

    int result = 5 * 5; // we can not use this function repeatedly without parameter
    cout<<result; //25
} */

void square(int n)
{

    int result = n * n; // we can  use this function repeatedly with  parameter
    cout << result;     // 25
}

int main()
{

    // square();
    square(5);
    return 0;
}