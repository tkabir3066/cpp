#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

int n, row, col;
cout<<"Enter a pattern number: ";
cin>>n;
for(row=1; row<=n; row++){

     for(col=1; col<=row; col++){
       cout<<col;
     }

     cout<<endl;
}

/*
1   
12  
123 
1234 */


    getch();
}