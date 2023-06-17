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
  for(int col=1; col<=row; col++){
    cout<<col;
  }
  cout<<endl;
}


for(int row=n-1;  row>=1;  row--){
    for(int col=1; col<=n-row; col++){
        cout<<" ";
    }
    for(int col=1; col<=row; col++){
        //  cout<<"#";
         cout<<col;
    }
    cout<<endl;
}
  getch();
}


/* 

  1
 12
123
 12
  1

 */


