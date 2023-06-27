#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

   int array1[30],n, array2[30];

   cout<<"How many numbers: ";
   cin>>n;
  
  cout<<"Enter values of array: ";

   for(int i=0; i<n; i++){

      cin>>array1[i];
   }


   cout<<"Array1 = ";
   for(int i=0; i<n; i++){
      
        cout<<array1[i]<<" ";
   }


  for(int i=0; i<n; i++){
     array2[i]= array1[i];
  }

  
  cout<<"Array2 = ";
  for(int i=0; i<n; i++){
     cout<<array2[i]<<" ";
  }




      getch();
}