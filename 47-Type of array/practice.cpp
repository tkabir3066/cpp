#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

  

  int n, sum=0;

  cout<<"Enter the number of student: ";
  cin>>n;

  int students[n];
  for(int i=0; i<n; i++){
 
     cout<<"marks for student "<<i+1<<" = ";
      cin>>students[i];
      sum=sum+students[i];


  }

cout<<"Total marks = "<<sum<<endl;

float avg = (float) sum/n;

cout<<"Average = "<<avg<<endl;





     getch();
}