
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{

 float num1, num2;
  cout<<"Enter two number: ";
  cin>>num1>>num2;
 cout<<showpoint;
 cout<<fixed;
 cout<<setprecision(10);
   
   float sum=num1+num2;
   cout<<setw(20)<<"Sum is = "<<sum<<endl;

   float sub=num1-num2;
   cout<<setw(20)<<"Sub is = "<<sub<<endl;

   float mul=num1*num2;
   cout<<setw(20)<<"Mul is = "<<mul<<endl;



   double div= (float) num1/num2;
   cout<<setw(20)<<"Div is = "<<div;




  getch();
}