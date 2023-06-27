#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

int num[]= {15,2,54,25,35};

  int value, position=-1;

  cout<<"Enter the number: ";
  cin>>value;
  
  

  for(int i=0; i<6; i++){
      if(value==num[i]){
         position=i+1;
         break;
      }
  }

  if(position==-1){
    cout<<"items not found";
  }

  else{
    cout<<"item is found at "<<position;
  }




    getch();
}