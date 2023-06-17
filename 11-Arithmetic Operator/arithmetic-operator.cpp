#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

   int num1, num2;
     // num1=20, num2=3;
    cout<< "Enter two number : ";
    cin>>num1>>num2;
   int sum= num1+num2;
   cout<<"Sum is = "<<sum<<endl;


   int sub= num1-num2;
   cout<<"Sub is = "<<sub<<endl;

   int mul= num1*num2;
   cout<<"Mul is = "<<mul<<endl;

   int div= num1/num2;
   cout<<"Div is = "<<div<<endl;

   int remainder= num1%num2;
   cout<<"Remainder is = "<<remainder<<endl;


   double div2= (float) num1/num2;   // kono ekta data type ke onno ekta datatype e convert korle seta ke type casting bole//
   cout<<"type casting = "<<div2<<endl;

    getch();
}
