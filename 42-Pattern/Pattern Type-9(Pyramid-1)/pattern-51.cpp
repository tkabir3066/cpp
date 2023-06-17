#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n;
cout<<"enter the value of n : ";
cin>>n;

for(int row=1; row<=n; row++){
    for(int col=1; col<=n-row; col++){
        cout<<"  ";
    }

    for(int col=1; col<= 2*row-1; col++){
        cout<<char(row+64)<<" ";

    }
    cout<<endl;
}
    getch();
}

/* 
      A       
    B B B     
  C C C C C   
D D D D D D D

 */