#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

/* int m,n, count=0;

cout<<"Enter initial number: ";
cin>>m;

cout<<"Enter final number: ";
cin>>n;

cout<<endl;

 for(int i=m; i<=n; i++){
   
   for(int j=2; j<i; j++){

    if(i%j==0){
      count++;
      break;
    }
   }
   
   if(count==0){
    cout<<i<<endl;

   }

   count=0;
 }
 */


//---------------- Total prime number from m to n ----------------------//

int m,n, count=0, totalPrimeNumber=0;

cout<<"Enter initial number: ";
cin>>m;

cout<<"Enter final number: ";
cin>>n;

cout<<endl;

 for(int i=m; i<=n; i++){
   
   for(int j=2; j<i; j++){

    if(i%j==0){
      count++;
      break;
    }
   }
   
   if(count==0){
    cout<<i<<endl;
    totalPrimeNumber++;
   }

   count=0;
 }
cout<<endl;
cout<<"totalPrimeNumber : "<<totalPrimeNumber;


    getch();
    
}