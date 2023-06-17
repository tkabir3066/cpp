
//counting number of a digit in an integer
#include<iostream>
#include<conio.h>


using namespace std;


int main(){

 int num; 
 cout<<"Enter an integer : ";
 cin>>num;

 int count =0;

 while(num!=0){

    num = num/10;
    ++count;
 }

  cout<<"Total number of a digit: "<<count;
     getch();
}

// input : 123
// output : 3