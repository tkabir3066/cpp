
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int num, r;

cout<<"Enter an integer number : ";
cin>>num;

int temp=num;
int sum=0;


while(temp!=0){

    r= temp%10;
    sum=sum + r*r*r;
    temp=temp/10;

}

if(num==sum){
    cout<<"Armstrong number";
}else{
    cout<<"not Armstrong number";
}





    getch();
}

// input : 371
// output : 3**3 + 7**3 + 1**3 = 371
/* An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371. */