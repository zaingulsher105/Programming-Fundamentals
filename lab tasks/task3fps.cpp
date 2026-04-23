#include<iostream>
using namespace std;
int main() {

int mints,fps,frames;
cout<<" Enter minutes : ";
cin>> mints;
cout<<" Enter frames : ";
cin>> fps;

frames = mints * 60 * fps;
cout<<" Total frames : "<<frames;

}