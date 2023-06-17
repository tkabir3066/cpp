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
    cout<<row%2;
  }
  cout<<endl;
}


for(int row=n-1;  row>=1;  row--){
     for(int col=1; col<=n-row; col++){
        cout<<" ";
     }
     for(int col=1; col<=row; col++){
        //  cout<<"#";
          cout<<row%2;
     }
      cout<<endl;
   }
  getch();
}

/* 

   1
  00
 111
0000
 111
  00
   1

 */


