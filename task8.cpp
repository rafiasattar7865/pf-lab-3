#include<iostream>
using namespace std;
main(){
float vegetable_price,fruit_price,total_earning;
int total_vegetable,total_fruit;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegetable_price;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruit_price;
cout<<"Enter total kilograms of vegetables: ";
cin>>total_vegetable;
cout<<"Enter total kilograms of fruits: ";
cin>>total_fruit;
total_earning=(total_vegetable*vegetable_price+total_fruit*fruit_price)/1.94;
cout<<"Total earnings in Rupees (Rps): "<<total_earning;
}

