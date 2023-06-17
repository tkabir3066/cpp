// print armstrong number from 1 to 1000
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int initialNum, finalNum;

cout<<"Enter an initial value : ";
cin>>initialNum;
cout<<"Enter an final value : ";
cin>>finalNum;


for(int i=initialNum; i<=finalNum; i++){
int temp=i;
int sum=0;
int r;

while(temp!=0){

    r= temp%10;
    sum=sum + r*r*r;
    temp=temp/10;

}

if(i==sum){
    cout<<i<<" ";
}
}

    getch();
}

// input : 371
// output : 3**3 + 7**3 + 1**3 = 371
/* An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371. */