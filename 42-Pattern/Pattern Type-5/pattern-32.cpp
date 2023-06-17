#include<iostream>
#include<conio.h>


using namespace std;

int main(){

int n;
cout<<"Enter the value of n : ";
cin>>n;


for(int row=n; row>=1; row--){

    for(int col=1; col<=n-row; col++){
        cout<<" ";
    }

    for(int col=1; col<=row; col++){
        //  cout<<char(row+64);
         cout<<char(row+96);
    }
    cout<<endl;
}


  getch();
}

/* 
DDDD
 CCC
  BB
   A
 */
/* 
dddd
 ccc
  bb
   a
 */