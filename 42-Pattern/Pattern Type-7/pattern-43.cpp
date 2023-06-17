#include<iostream>
#include<conio.h>


using namespace std;


int main(){

int n;
cout<<"Enter the value  of n : ";
cin>>n;


   for(int row=1; row<=n; row++){
     
     for(int col=1; col<=n; col++){
        cout<<char(col+64);
     }
     cout<<endl;
   }
    getch();
}


/* 
ABCD
ABCD
ABCD
ABCD
 */