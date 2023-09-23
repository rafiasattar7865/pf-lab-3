#include<iostream>
using namespace std;
main()
{
float square_meters,height,width,number;
cout<<"Number of square meters you can paint: ";
cin>>square_meters;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;
number=square_meters/(height*width);
cout<<"Number of walls you can paint: "<<number;
}


