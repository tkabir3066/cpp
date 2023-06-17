#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

    int array1[5]= {10, 20, 30, 40, 50}, array2[5];


   cout<<"Array1= ";
    for(int i=0; i<5; i++){

         cout<<array1[i]<<" ";
    }


    for(int i=0; i<5; i++){

          array2[i]=array1[i];
    }


    cout<<endl<<"Array2= ";
    for(int i=0; i<5; i++){
        cout<<array2[i]<<" ";
    }
     



      getch();
}