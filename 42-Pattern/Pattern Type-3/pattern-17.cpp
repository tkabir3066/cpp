#include<iostream>
#include<conio.h>

using namespace std;


int main(){

 int n, row, col;
 cout<<"Enter the pattern number: ";
 cin>>n;

 for(int row=1; row<=n; row++){
    for(int col=1; col<=row; col++){
        // cout<<char(col+64)<<" ";
        cout<<char(col+96)<<" ";
    }
    cout<<endl;
 }

for(int row=n-1; row>=1; row--){
    for(int col=1; col<=row; col++){
        // cout<<char(col+64)<<" ";
        cout<<char(col+96)<<" ";
    }
    cout<<endl;
 }
    getch();
}

/* 
A     
A B   
A B C 
A B   
A  
 */

/* 
a     
a b   
a b c 
a b   
a
 */