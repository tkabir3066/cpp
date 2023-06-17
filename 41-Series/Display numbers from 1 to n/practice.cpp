#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

int n, even=0, odd=0;

cout<<"Enter a positive number: ";
cin>>n;


for(int i=1; i<=n; i++){

  if(i%2==0){
    even=even+i;
  }
  else{
    odd=odd+i;
  }
}

cout<<odd-even;


 
     getch();
}