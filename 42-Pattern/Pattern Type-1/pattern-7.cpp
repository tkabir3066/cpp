#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

  int n, row, col;

  cout<<"Enter a pattern number: ";
  cin>>n;

  
// ASCI value of A=65 and a=97;
   for(row=1; row<=n; row++){
        
        for(col=1; col<=row; col++){
            cout<<'*';
        }

        cout<<endl;
   }
}

/* 
*
**
***
****
 */


/* for(row=1; row<=n; row++){
        
        for(col=1; col<=row; col++){
            cout<<'#';
        }

        cout<<endl;
   }
    getch();
} */


/* 
#   
##  
### 
####
 */