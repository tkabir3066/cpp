#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num, r;
cout<<"Enter an integer number : ";
cin>>num;

int sum=0;
int temp = num;

while(temp!=0){
    r= temp%10;
    sum= sum*10+r;
    temp = temp/10;
}

cout<<sum;

    getch();
}

//example:-
//input-123
// output-321