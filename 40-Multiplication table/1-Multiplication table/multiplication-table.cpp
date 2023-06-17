#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

// formula : num x i = num*i;

 int num;

 cout<<"Enter any positive number: ";
 cin>>num;

 for(int i=1; i<=10; i++){

      cout<<num<<" X "<<i<<" = "<<(num*i)<<endl;

 }

  
    getch();
}