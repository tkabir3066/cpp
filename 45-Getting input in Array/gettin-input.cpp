#include <iostream>

using namespace std;

int main()
{

  int marks[5];

  cout << "Enter marks : ";
  for (int i = 0; i < 5; i++)
  {

    // cout << "Marks of student " << i + 1 << " = ";
    cin >> marks[i];
  }

  // cout << "Marks are : ";

  cout << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << "Marks of student " << i + 1 << " = ";
    cout << marks[i] << endl;
  }

  return 0;
}