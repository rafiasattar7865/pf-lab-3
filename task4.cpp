#include<iostream>
using namespace std;
main(){
float imposter_count,player_count,chance;
cout<<"Enter Imposter Count: ";
cin>>imposter_count;
cout<<"Enter Player Count: ";
cin>>player_count;
chance=100*(imposter_count/player_count);
cout<<"Chance of being an imposter: "<<chance<<"%";
}

