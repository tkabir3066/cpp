#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    for(int row=1; row<=n; row++){
      for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
      for(int col=1; col<=row; col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    for(int row=n-1; row>=1; row--){
      for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
      for(int col=1; col<=row; col++){
            cout<<row<<" ";
        }

      cout<<endl;
    }
}

/* 
  
  1
 2 2
3 3 3
 2 2
  1

 */