#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

  int  fact=1, n;
  cout<<"Enter any positive number: ";
  cin>>n;

  for(int i=1; i<=n; i++){
 
      fact = fact*i;
  }
        cout<<fact;



    getch();
}