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
    
   
    cout<<row%2<<" ";
  
  }
  cout<<endl;
}
    getch();
}

/* 
n=3
1 1 1 
0 0   
1                
 */
/* 
n=4
0 0 0 0 
1 1 1   
0 0     
1 
 */
