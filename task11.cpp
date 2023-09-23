#include<iostream>
using namespace std;
main(){
int age,move,moves,avg;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they've moved: ";
cin>>moves;
move=moves+1;
avg=age/move;
cout<<"Average number of years lived in the same house: "<<avg;
}
