#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
  
  int age;
  cout<<"Enter your age: ";
  cin>>age;

  if(age>=18 && age<= 23){
      
     cout<<"You are eligible for army";
  }
  
  else if(age>=10 && age<=18){
     cout<<"you are eligible for ludo game";
  }

  else{
    cout<<"You are not elble for both";
  }



    getch();
}