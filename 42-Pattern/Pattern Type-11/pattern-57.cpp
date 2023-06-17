#include<iostream>
#include<conio.h>

using namespace std;


int main(){

int n;
cout<<"Enter the value of n : ";
cin>>n;



for(int row=1; row<=n; row++){
    for(int col=1; col<=n-row; col++){
        cout<<" ";
    }
    for(int col=1; col<=2*row-1; col++){
        cout<<row;
    }
    cout<<endl;
}
for(int row=n-1; row>=1; row--){
    for(int col=1; col<=n-row; col++){
        cout<<" ";
    }
    for(int col=1; col<=2*row-1; col++){
        cout<<row;
    }
        cout<<endl;
}
    getch();
}


/* 
  1  
 222 
33333
 222 
  1 

 */