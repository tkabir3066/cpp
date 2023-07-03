#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

/* 
int n, first=2, second=1, count=0, i=3;

cin>>n;


while(i<=n){
   count=first+second;
   first=second;
   second=count;
   cout<<count;

   i++;
}
 */


int n, first=2, second=1, count, i=0;
cout<<"Enter the terms: ";
cin>>n;


while(i<=n){
  if(i==0){
    cout<<2<<" ";

  }

  else if(i==1){
    cout<<1<<" ";
  }
  else{
   count=first+second;
   first=second;
   second=count;
   cout<<count<<" ";
  }

   i++;
}



    getch();
}