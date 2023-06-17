#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n;
cout<<"Enter the pattern number : ";
cin>>n;

for(int row=n; row>=1; row--){
  for (int col=1; col<=row; col++)
  {
    cout<<col<<" ";
  }
  cout<<endl;
}
    getch();
}

/* 
1 2 3 4 
1 2 3   
1 2     
1
 */