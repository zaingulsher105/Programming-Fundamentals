#include<iostream>
using namespace std;
main() {

int frame,mint,fps;
cout<<" Enter number of minutes : ";
cin>> mint;
cout<<" Enter frames per second : ";
cin>> fps;

frame = mint * 60 * fps;

cout<<" Total number of frames : "<<frame;
}