#include<iostream>
#include<conio.h>

using namespace std;


int main(){

 int n, row, col;
 cout<<"Enter the pattern number: ";
 cin>>n;

 for(int row=1; row<=n; row++){
    for(int col=1; col<=row; col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }

for(int row=n-1; row>=1; row--){
    for(int col=1; col<=row; col++){
        cout<<col<<" ";
    }
    cout<<endl;
 }
    getch();
}

/* 
1     
1 2   
1 2 3 
1 2   
1 
 */