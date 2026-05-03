#include<iostream>
using namespace std;
main()
{

float veg,frt,earn;
int tkv,tkf;

cout<<" Enter vegetable price per kilogram (in coins) : ";
cin>> veg;
cout<<" Enter fruit price per kilogram (in coins) : ";
cin>> frt;
cout<<" Enter total kilograms of vegetable : ";
cin>> tkv;
cout<<" Enter total kilograms of fruit : ";
cin>> tkf;

earn = (veg / 1.94*tkv) + (frt / 1.94*tkf);

cout<<" Total earning in rupees are : "<<earn;
}