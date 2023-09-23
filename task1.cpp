#include<iostream>
using namespace std;
main(){
int number,sum;
cout<<"Enter the number of sides of the polygon: ";
cin>>number;
sum=(number-2)*180;
cout<<"The sum of internal angles of a "<<number<<"-sided polygon is: "<<sum<<" degrees";
}