
// print palindrome number from 1 to 1000
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
    sum=sum*10+r;
    temp=temp/10;

}

if(i==sum){
    cout<<i<<" ";
}
}





    getch();
}