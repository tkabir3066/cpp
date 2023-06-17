#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
  /*  int num1, num2, num3;
   cout<<"Enter two number : ";
   cin>>num1>>num2>>num3;

   

   if(num1>num2 && num1>num3){
       cout<<num1;
   }

   else if(num2>num1 && num2>num3){
       cout<<num2;
   }
  
  else{
      cout<<num3;
  } */




 int num1, num2, num3, large;
   cout<<"Enter two number : ";
   cin>>num1>>num2>>num3;

   

   if(num1>num2 && num1>num3){
       large=num1;
   }

   else if(num2>num1 && num2>num3){
       large=num2;
   }
  
  else{
      large=num3;
  }

  cout<<large;

  
    getch();
}