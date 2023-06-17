#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n;
cout<<"Enter the pattern number : ";
cin>>n;

for(int row=n; row>=1; row--){
  for (int col=1; col<=row; col++)
  {
    // cout<<char(row+64)<<" ";
    cout<<char(row+96)<<" ";
  }
  cout<<endl;
}
    getch();
}

/* 
D D D D 
C C C   
B B     
A            
 */
/* 
d d d d 
c c c   
b b     
a 
 */