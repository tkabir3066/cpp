#include<iostream>
#include<conio.h>

using namespace std;


int main(){

 int n, row, col;
 cout<<"Enter the pattern number: ";
 cin>>n;

 for(int row=1; row<=n; row++){
    for(int col=1; col<=row; col++){
        cout<<char(row+64)<<" ";
        // cout<<char(row+96)<<" ";
    }
    cout<<endl;
 }

for(int row=n-1; row>=1; row--){
    for(int col=1; col<=row; col++){
        cout<<char(row+64)<<" ";
        // cout<<char(row+96)<<" ";
    }
    cout<<endl;
 }
    getch();
}

/* 
A     
B B   
C C C 
B B   
A  
 */

/* 
a     
b b   
c c c 
b b   
a 
 */