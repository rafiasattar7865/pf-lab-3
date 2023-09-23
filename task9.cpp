#include<iostream>
using namespace std;
main(){
int num;
cout<<"Enter a 4-digit number: ";
cin>>num;
int a;
a=num%10;
num=num/10;
int b;
b=num%10;
num=num/10;
int c;
c=num%10;
num=num/10;
int d;
d=num%10;
int add;
add=a+b+c+d;
cout<<"Sum of the individual digits: "<<add;
}