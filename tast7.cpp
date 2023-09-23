#include<iostream>
using namespace std;
main()
{
string name;
float adult_price,child_price,A_T_sold,C_T_SOLD,charity,total_amount;
cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>adult_price;
cout<<"Enter the child ticket price: $";
cin>>child_price;
cout<<"Enter the number of adult tickets sold: ";
cin>>A_T_sold;
cout<<"Enter the number of child tickets sold: ";
cin>>C_T_SOLD;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>charity;
cout<<endl;
cout<<"Movie: "<<name<<endl;
total_amount=(adult_price*A_T_sold)+(child_price*C_T_SOLD);
cout<<"Total amount generated from ticket sales: $"<<total_amount<<endl;

float charity_amount;
charity_amount=total_amount*charity/100;
cout<<"Donation to charity ("<<charity<<"%): $"<<charity_amount<<endl;
float remaining_amount;
remaining_amount=total_amount-charity_amount;
cout<<"Remaining amount after donation: $"<<remaining_amount;
}



 

