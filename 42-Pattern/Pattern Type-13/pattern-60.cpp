#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    for(int row=n; row>=1; row--){
      for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
      for(int col=1; col<=row; col++){
            cout<<col<<" ";
        }

      cout<<endl;
    }
}

/* 
  
1 2 3
 1 2
  1

 */