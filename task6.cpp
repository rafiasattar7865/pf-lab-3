#include<iostream>
using namespace std;
main(){
double size,cost,area,cost_of_fertilizer,cost_of_fertilizing;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of the bag: $";
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
cost_of_fertilizer=cost/size;
cout<<"Cost of fertilizer per pound: $"<<cost_of_fertilizer<<endl;
cost_of_fertilizing=cost/area;
cout<<"Cost of fertilizing per square foot: $"<<cost_of_fertilizing;
}
  
