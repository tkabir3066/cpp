//Strong number is a special number whose sum of the factorial of digits is equal to the original number. For Example: 145 is strong number. Since, 1! + 4! + 5!


#include<iostream>
#include<conio.h>

using namespace std;


int main(){

int num;

cout<<"Enter an integer number: ";
cin>>num;

int sum=0, fact, rem, temp=num;


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
  
  if(sum==num){
    cout<<num<<" is a strong number";
  }else{
    cout<<num<<" is not a strong number";
  }


    getch();
}