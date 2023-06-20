#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

// difference =1
// 1+2+3+4+5...+n

  /* int n, sum=0;
  cout<<"Enter the last number: ";
  cin>>n;


  int a=1;

  while(a<=n){
    sum=sum+a;
    a++;

  }

  cout<<"Sum= "<<sum; */




  
 //difference =2(odd);
// 1+3+5+7....n

  /* int n, sum=0;
  cout<<"Enter the last number: ";
  cin>>n;


  int a=1;

  while(a<=n){
    sum=sum+a;
    a=a+2;

  }

  cout<<"Sum= "<<sum; */



// difference 2 (even)

int n, sum=0;

cout<<"Enter the last number: ";
cin>>n;

int x=2;

while(x<=n){
    sum=sum+x;
    x=x+2;
}

cout<<"Sum= "<<sum;




    getch();
}