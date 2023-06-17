#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n;
cout<<"enter the value of n : ";
cin>>n;

for(int row=1; row<=n; row++){
    for(int col=1; col<=row; col++){
        cout<<col*row<<" ";
    }
    cout<<endl;
}
    getch();
}

/* 
1
2 4       
3 6 9     
4 8 12 16
 */