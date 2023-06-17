#include<iostream>
#include<conio.h>

using namespace std;

// special operator
// 1- comma(,)
// 2- pointer(*)
// 3- sizeof()

 int main()
 {
  
  int a;
  float f;
  double d;
  char ch;
  char name[20];

// data type er size return korbe byte hisebe
//===== sizeof syntax====//
// sizeof(type)
// sizeof(expression)

//   int c= sizeof(a);
//   cout<<c; //4 bytes

//   int c= sizeof(f);
//   cout<<c; //4 bytes

//   int c= sizeof(d);
//   cout<<c; // 8 bytes

//   int c= sizeof(ch);
//   cout<<c; //1 byte

//   int c= sizeof(name);
//   cout<<c; //20 bytes
  

  //-----------------------------------------------------------------------------------------------//

  int x,y,sum;
  sum= (x=20, y=30, sum=x+y);
  cout<<sum; // 50

     getch();
 }