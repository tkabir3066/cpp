#include<iostream>
#include<conio.h>


using namespace std;

int main(){

 int n;
 cout<<"Enter the value of n : ";
 cin>>n;

 for(int row=1; row<=n; row++){

    // printing space
    // space = n-row
    for(int col=1; col<= n-row; col++){
        cout<< " ";

    }

    // printing number
    for(int col=1; col<=row; col++){
        cout<< col;

    }
    cout<<endl;
 }

    getch();
}
/* 
  1
 12
123
 */