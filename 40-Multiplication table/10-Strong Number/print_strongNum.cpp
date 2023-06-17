
#include<iostream>
#include<conio.h>

using namespace std;


int main(){

int initialNum, finalNum, rem, fact;

cout<<"Enter an initial value : ";
cin>>initialNum;
cout<<"Enter an final value : ";
cin>>finalNum;


for(int i=initialNum; i<=finalNum; i++){
int temp=i;
int sum=0;


 while (temp!=0)
  {
    rem = temp%10;
    
    fact=1;
    for(int i=1; i<=rem; i++){
       fact= fact*i;
    }

    sum = sum+fact;
    temp= temp/10;
  }

if(i==sum){
    cout<<i<<" ";
}
}

   
  
  
  


    getch();
}