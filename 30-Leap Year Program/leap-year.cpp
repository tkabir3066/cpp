#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
   /* int year;
   cout<<"Enter year: ";
   cin>>year;

   if(year%4==0 && year%100!=0){
       cout<<"Leap year";
   }

   else if(year%400==0){
       cout<<"leap year";
   }
  
  else{
      cout<<"Non-leap year";
  } */


 int year;
   cout<<"Enter year: ";
   cin>>year;

   if((year%4==0 && year%100!=0) || year%400==0){
       cout<<"Leap year";
   }

   else if(year%400==0){
       cout<<"leap year";
   }
  
  else{
      cout<<"Non-leap year";
  }



    getch();
}