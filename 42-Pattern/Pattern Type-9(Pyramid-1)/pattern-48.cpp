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
        cout<<col<<" ";

    }
    cout<<endl;
}
    getch();
}

/* 

    1     
  1 2 3   
1 2 3 4 5 

 */