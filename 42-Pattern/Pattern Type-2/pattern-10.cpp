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
    // cout<<char(col+64)<<" ";
    cout<<char(col+96)<<" ";
  }
  cout<<endl;
}
    getch();
}

/* 
A B C D 
A B C   
A B     
A     
 */
/* 
a b c d 
a b c   
a b     
a 
 */