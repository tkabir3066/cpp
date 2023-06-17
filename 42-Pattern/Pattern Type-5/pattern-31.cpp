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
        //  cout<<char(col+64);
         cout<<char(col+96);
    }
    cout<<endl;
}


  getch();
}

/* 
ABCD
 ABC
  AB
   A
 */
/* 
abcd
 abc
  ab
   a
 */