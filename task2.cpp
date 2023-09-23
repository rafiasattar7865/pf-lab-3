#include<iostream>
using namespace std;
main(){
int number_of_minute;
int frames_per_second,total_number_of_frames;
cout<<"Number of Minutes: ";
cin>>number_of_minute;
cout<<"Frames per Second: ";
cin>>frames_per_second;
total_number_of_frames=number_of_minute*frames_per_second*60;
cout<<"Total Number of Frames: "<<total_number_of_frames;

} 